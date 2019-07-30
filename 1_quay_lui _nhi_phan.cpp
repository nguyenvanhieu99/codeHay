#include<iostream>

using namespace std;
int n,k,x[200];

void output(){
	for(int u=0; u<n; ++u)
		cout << x[u];
	cout << endl;
}

void backTrack(int i){
	for(int j=0; j<2; ++j){
		x[i] = j;
		if (i==n-1 ) output();
		else backTrack(i+1);
	}
}

int main(){
    int bo;cin>>bo;
    while(bo--){
    	cin>>n;
    
    		backTrack(0);
		
	}

	return 0;
}

