//liet ke to hop chap k cua n
#include<iostream>

using namespace std;
int n,k,x[200];

void out(){
	for(int i=1;i<=k;++i){
		cout<<x[i]<<" ";
		
	}
	cout<<endl;
}
void tohop(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
    	x[i]=j;
    	if(i==k) out();
    	else tohop(i+1);
	}
}

int main(){
    int bo;cin>>bo;
    while(bo--){
    	cin>>n>>k;
    	x[0]=0;,
    	tohop(1);
	}

	return 0;
}

