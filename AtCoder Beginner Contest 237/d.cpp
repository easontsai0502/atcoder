/*
[Q]https://atcoder.jp/contests/abc237/tasks/abc237_d
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<lli> vec;
	vector<lli>::iterator vec_it=vec.begin();
	for(int i=1;i<=n;i++){
		if(s[i]=='R'){
			vec.insert(vec_it+1,i);
		}else{
			vec.insert(vec_it,i);
			vec_it--;
		}
	}
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
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
