/*
[Q]https://atcoder.jp/contests/dp/tasks/dp_f
[WA TLE]
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
#define INT int
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
	string s,t;
	cin>>s>>t;
	/*solve*/
	INT ss=s.size(),ts=t.size();
	string dp[ss+1][ts+1];
	for(INT i=0;i<=ss;i++){
		for(INT j=0;j<=ts;j++){
			//cout<<i<<","<<j<<" ";
			dp[i][j]={NULL};
		}
		//cout<<"\n";
	}
	for(INT i=1;i<=ss;i++){
		for(INT j=1;j<=ts;j++){
			if(s[i-1]==t[j-1]){
				dp[i][j]=dp[i-1][j-1];
				dp[i][j].push_back(s[i-1]);
			}else if(dp[i-1][j].size()>dp[i][j-1].size()){
				dp[i][j]=dp[i-1][j];
			}else{
				dp[i][j]=dp[i][j-1];
			}

			//cout<<dp[i][j]<<",";
		}
		//cout<<"\n";
	}
	//for(int i=0;i<dp[ss][ts].size();i++){
	//	cout<<dp[ss][ts][i];
	//}
	cout<<dp[ss][ts]<<"\n";
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
