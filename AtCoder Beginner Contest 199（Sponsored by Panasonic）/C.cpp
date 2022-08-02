/*
[Q]https://atcoder.jp/contests/abc199/tasks/abc199_c
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	char s[n*2+1];
	cin>>s;
	int q;
	cin>>q;
	while(q--){
		int t,a,b;
		cin>>t>>a>>b;
		if(t==2){
			char ns[n*2+1];
			for(int i=0;i<n;i++){
				ns[i]=s[i+n];
				ns[i+n]=s[i];
			}
			for(int i=0;i<(n*2+1);i++){
				s[i]=ns[i];
			}
		}else{
			char x=s[a-1];
			s[a-1]=s[b-1];
			s[b-1]=x;
		}
	}
	for(int i=0;i<n*2;i++){
		cout<<s[i];
	}
	return 0;
}