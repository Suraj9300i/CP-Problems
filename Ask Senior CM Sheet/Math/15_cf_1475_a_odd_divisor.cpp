// size
#include<bits/stdc++.h>

using namespace std;

bool isPower(long long int n){
	int c = 0;
	while(n>0){
		if(n&1) c++;
		n = n>>1;
	}
	return c==1;
}

int main(){

	int t;
	cin>>t;
	while(t-->0){
		long long int n;
		cin>>n;
		if(isPower(n)) cout<<"NO\n";
		else cout<<"YES\n";
	}

return 0;
}