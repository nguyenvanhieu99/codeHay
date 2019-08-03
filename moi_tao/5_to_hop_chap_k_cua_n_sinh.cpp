//sinh to hop chap k cua n 
#include<iostream>

using namespace std;
int n,k,x[200]={};
bool ok =true;
void init(){
	cin>>n;
	cin>>k;
	for(int i=1;i<=k;++i){
		x[i]=i;
	}
}
void out(){
	for(int i=1;i<=k;++i){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void tohop(){
	int i=k;
	while(i>0 && x[i]==n-k+i) i--;
	if(i>0) {
		x[i]=x[i]+1;
		for(int j=i+1;j<=k;j++) x[j]=x[i]+j-i;
	}
	else ok=false;	
}
int main(){
    init()  ;
    while(ok){
    	out();
    	tohop();
	}
	return 0;
}

