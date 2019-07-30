//sinh nhi phan
#include<iostream>

using namespace std;
int x[200]={},n;
bool ok=true;
void in(){
	cin>>n;
    for(int i=0;i<=n;++i) x[i]=0;
}
void out(){
	for(int i=1;i<=n;++i)
			cout<<x[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n;
	while(i>0 && x[i]==1) {
		x[i]=0;
		i--;
	}
	if(x[i]==0 && i>0) x[i]=1;
	else ok=false;
}
int main(){
    in();
	while(ok){
		out();
		sinh();
	} 
   
	return 0;
}

