/*
[Q]https://atcoder.jp/contests/abc197/tasks/abc197_c
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
vector<unsigned long long int> numlist;
unsigned long long int ans;
unsigned long long int maxn;
vector<unsigned long long int> nownum;
int ansfind(int add){
	if(add==maxn){
		ans=min(nownum[maxn-1],ans);
	}else if(add==0){
		nownum.push_back(numlist[0]);
		ansfind(add+1);
	}else{
		/*xor*/
		nownum.push_back(nownum[add-1]^numlist[add]);
		ansfind(add+1);
		nownum.pop_back();
		/*or*/
		nownum.push_back(nownum[add-1]|numlist[add]);
		ansfind(add+1);
		nownum.pop_back();
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	maxn=n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		numlist.push_back(a);
		if(i){
			ans=ans|a;
		}else{
			ans=a;
		}
	}
	ansfind(0);
	cout<<ans;
	return 0;
}