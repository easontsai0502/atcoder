/*
[Q]https://atcoder.jp/contests/dp/tasks/dp_n
[AC]
*/

/*include*/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O2")
#pragma GCC optimize("O1")
#pragma GCC optimize("O3")
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

/*using namespace*/
using namespace std;

/*define type*/
#define what_the_fuck cin.tie(0);cout.tie(0);ios::sync_with_stdio(false)
#define ULLI long long int
#define LLI long long int
#define INT ULLI
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
#define DBG if(debug)

/*struct*/
/*fn宣告*/
/*num*/
bool debug=false;
bool iofast=true;
INT n;
INT num[401];
INT ntt[401];
INT dp[401][401];
/*fn定義*/
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast){what_the_fuck;}
	cin>>n;
	/*re:0*/
	for(INT i=0;i<=n;i++){
		for(INT j=0;j<=n;j++){
			dp[i][j]=4e12;
		}
	}
	/*CIN*/
	for(INT i=1;i<=n;i++){
		cin>>num[i];
		ntt[i]=ntt[i-1]+num[i];
		dp[i][i]=0;
	}
	/*solve*/
	INT now;
	for(INT i=2;i<=n;i++){
		for(INT l=1,r=i;r<=n;l++,r++){
			for(INT k=l;k<r;k++){
				now=ntt[r]-ntt[l-1]+dp[l][k]+dp[k+1][r];
				dp[l][r]=min(dp[l][r],now);
			}
		}
	}
	DBG{
		for(INT i=1;i<n;i++){
			for(INT j=1;j<n;j++){
				cerr<<dp[i][j]<<" ";
			}
			cerr<<endl;
		}
	}
	cout<<dp[1][n]<<endl;;
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
