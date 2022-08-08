/*
[Q]https://atcoder.jp/contests/abc237/tasks/abc237_d
[AC]
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<deque>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	deque<int> res;
	res.push_back(n);
	for(int i=n-1;i>=0;i--){
	    if(s[i]=='L') res.push_back(i);
		else res.push_front(i);
	}
	for(int i=0;i<=n;i++)cout<<res[i]<<" ";
	return 0;
}
/*
[I1]
5
LRRLR
[O1]
1 2 4 5 3 0
[I2]
7
LLLLLLL
[O2]
7 6 5 4 3 2 1 0
*/
