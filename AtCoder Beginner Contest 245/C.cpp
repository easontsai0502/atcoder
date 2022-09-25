/*
[Q]https://atcoder.jp/contests/abc245/tasks/abc245_c
[AC]
*/

/*include*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<stack>
#include<cstring>
#include<unordered_map>

/*using namespace*/
using namespace std;

/*define type*/
#define ULLI unsigned long long int
#define LLI long long int
#define INT LLI
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>

/*struct*/

/*fn宣告*/

/*num*/
const INT maxn=2e5;
bool dp[maxn+1][2];
/*fn定義*/

/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	/*CIN*/
	INT n,k;
	cin>>n>>k;
	INT a[n],b[n];
	for(INT i=0;i<n;i++){
		cin>>a[i];
	}
	for(INT i=0;i<n;i++){
		cin>>b[i];
	}
	/*solve*/
	dp[0][0]=true;
	dp[0][1]=true;
	string ans="Yes";
	for(INT i=1;i<n;i++){
		if(dp[i-1][0]==true){//通道a開通
			if(abs(a[i-1]-a[i])<=k){
				dp[i][0]=true;
			}
			if(abs(a[i-1]-b[i])<=k){
				dp[i][1]=true;
			}
		}
		if(dp[i-1][1]==true){//通道b開通
			if(abs(b[i-1]-a[i])<=k){
				dp[i][0]=true;
			}
			if(abs(b[i-1]-b[i])<=k){
				dp[i][1]=true;
			}
		}
	}
	if(dp[n-1][0]||dp[n-1][1])cout<<"Yes";
	else cout<<"No";
	//debug
//	for(int i=0;i<=n;i++){
//	    if(dp[i][0])cout<<"1 ";
//	    else cout<<"0 ";
//	}
//	cout<<"\n";
//	for(int i=0;i<=n;i++){
//	    if(dp[i][1])cout<<"1 ";
//	    else cout<<"0 ";
//	}
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
