/*
[Q]https://atcoder.jp/contests/dp/tasks/dp_e
[RE]
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
 
/*fn定義*/
 
/*main*/
int main(){
	/*IO加速*/
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	/*CIN*/
	INT N,W;
	cin>>N>>W;
	//N物品數
	//W承受重量
	INT w[N+1],v[N+1];
	//w重量
	//v價值
	for(INT i=1;i<=N;i++){
		cin>>w[i]>>v[i];
	}
	/*solve*/
	INT dp[N+1][W+1];
	for(INT i=0;i<=N;i++){
		for(INT j=0;j<=W;j++){
			dp[i][j]=0;
		}
	}
	for(INT i=1;i<=N;i++){
		for(INT j=1;j<=W;j++){
			INT dontake=dp[i-1][j];
			INT take=0;
			if(j>=w[i]) take=dp[i-1][j-w[i]]+v[i];
			dp[i][j]=max(dontake,take);
			//cout<<dp[i][j]<<",";
		}
		//cout<<"\n";
	}
	cout<<dp[N][W];
	return 0;
}
 
/*
[I1]
3 8
3 30
4 50
5 60
[O1]
90
*/
 
/*think*/
/*
 
*/