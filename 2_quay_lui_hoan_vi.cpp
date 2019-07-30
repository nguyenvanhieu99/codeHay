//liet ke hoan vi bang quay lui 
#include<iostream>

using namespace std;
int n,k,x[200];
bool chuaxet[200]={};
void out(){
	for(int i=1;i<=n;++i){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void hoanvi(int i){
	for(int j=1;j<=n;++j){
		if(chuaxet[j]==false){
			x[i]=j;
			chuaxet[j]=true;
			if(i==n) out();
			else hoanvi(i+1);
			chuaxet[j]=false;
		}
	}
}
int main(){
    int bo;cin>>bo;
    while(bo--){
    	cin>>n;
        //for(int i=1;i<=n;++i) chuaxet[i]=true;
    	hoanvi(1);
	}

	return 0;
}

