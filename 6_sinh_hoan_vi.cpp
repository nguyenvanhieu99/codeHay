//sinh hoan vi ke tiep 

#include<iostream>

using namespace std;
int n,k,x[200]={};
bool ok=true;
void ini(){
	cin>>n;
	for(int i=1;i<n;i++){
		x[i]=i;
	}
}
void out(){
	for(int i=1;i<=n;++i){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void shoanvi(){
	int j=n-1;
	while(j>0 && x[j]>x[j+1]) j--;
	if(j>0){
		int k=n;
		while(x[j]>x[k]) k--;
		swap(x[j],x[k]);
		int r=j+1,s=n;
		while(r<s){
			swap(x[r],x[s]);
			r++;s--;
		}
	}
	else ok =false;
}

int main(){
     ini();
     while(ok){
     	
		out();
     	shoanvi();
     	
	 }

	return 0;
}

