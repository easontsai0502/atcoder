/*
[Q]https://atcoder.jp/contests/abc199/tasks/abc199_c
[AC]
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	int n;
	cin>>n;
	char s[n*2+1];
	cin>>s;
	int q;
	cin>>q;
	ulli ccount=0;
	while(q--){
		int t,a,b;
		cin>>t>>a>>b;
		a--;
		b--;
		if(t==2){
			ccount=(ccount+1)%2;
		}else{
			if(ccount){
				swap(s[(a+n)%(2*n)],s[(b+n)%(2*n)]);
			}else{
				swap(s[a],s[b]);
			}
		}
	}
	if(ccount){
		for(int i=0;i<n*2;i++){
			cout<<s[(i+n)%(2*n)];
		}
	}else{
			for(int i=0;i<n*2;i++){
			cout<<s[i];
		}
	}
	return 0;
}