#include<iostream>
#include<math.h>
typedef long long int ll;

using namespace std;
//ucln khong dung de quy
ll gcd(ll x,ll y){
   	while(x!=0){
   		ll r=y%x;
   		y=x;
   		x=r;
	   }
	   return y;
}
// tim boi cnn :
ll bcnn3(int x,int y,int z){
	ll p=gcd(x,y);
	ll t=(x*y)/p;
	ll c=gcd(t,z);
	return (t*z)/c;
}

int main(){
     int bo ;cin>>bo;
	 while(bo--){
	 	long long x,y,z,n;
	 	cin>>x>>y>>z>>n;
	 	ll min=pow(10,n-1);
	 	ll term=min*10-1;
	 	ll k=bcnn3(x,y,z);
	 	//cout<<min<<endl;
	 	ll r=min%k;
	 	if(r==0);
	 	else {
	 		min=min+(k-r);
	 		if(min>term)  min=-1;
		 }
		 cout<<min<<endl;
	 	
	 }     

	return 0;
}

