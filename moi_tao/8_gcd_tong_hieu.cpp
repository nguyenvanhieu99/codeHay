#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int bo;
    cin>>bo;
    while(bo--){
    	int n , m ;
    	cin>>n>>m ;
    	long long tong=n*(n+1)/2;
    	long long sum1=(tong+m)/2;
    	long long sum2=tong-sum1;
    	int check=__gcd(sum1,sum2);
    	if(check== 1) cout<<"YES"<<endl;
    	else cout<<"NO";
	}

	return 0;
}

