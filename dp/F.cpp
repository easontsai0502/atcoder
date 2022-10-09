/*
[Q]
[]
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
	//cin.tie(0);
	//cout.tie(0);
	//ios::sync_with_stdio(false);
	/*CIN*/
	string s,t;
	cin>>s>>t;
	/*solve*/
	string dp[s.size()+1][t.size()+1];
	
	for(INT i=0;i<=s.size();i++){
		for(INT j=0;j<=t.size();j++){
			//cout<<i<<","<<j<<" ";
			dp[i][j]="";
		}
		//cout<<"\n";
	}
	for(INT i=1;i<=s.size();i++){
		for(INT j=1;j<=t.size();j++){
			if(dp[i-1][j].size()>dp[i][j-1].size()){
				if(s[i]==t[j]){
					string ad={s[i]};
					dp[i][j]=dp[i][j-1]+ad;
				}else dp[i][j]=dp[i-1][j];
			}else{
				if(s[i]==t[j]){
					string ad={s[i]};
					dp[i][j]=dp[i][j-1]+ad;
				}else dp[i][j]=dp[i][j-1];
			}
			cout<<dp[i][j].size()<<",";
		}
		cout<<"\n";
	}
	cout<<dp[s.size()][t.size()];
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
