/*
[Q]https://atcoder.jp/contests/abc261/tasks/abc261_c
*/
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	int n;
	cin>>n;
	map<string,ulli> files;
	while(n--){
		string s;
		cin>>s;
		if(files.count(s)){
			files[s]++;
			cout<<s<<"("<<files[s]-1<<")";
		}else{
			files[s]=1;
			cout<<s;
		}
		cout<<"\n";
	}
	return 0;
}