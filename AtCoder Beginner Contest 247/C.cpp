/*
[Q]https://codeforces.com/problemset/problem/1501/B
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
void solve(int n){
	if(n==1){
		cout<<"1 ";
	}else{
		solve(n-1);
		cout<<n<<" ";
		solve(n-1);
	}
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	solve(n);
	return 0;
}
/*
[I1]
2
[O1]
1 2 1
[I2]
1
[O2]
1
[I3]
4
[O3]
1 2 1 3 1 2 1 4 1 2 1 3 1 2 1
*/