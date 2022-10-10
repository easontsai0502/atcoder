/*
[Q]https://atcoder.jp/contests/dp/tasks/dp_f
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
#define INT int
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
/*struct*/

/*fn宣告*/

/*num*/
string s,t;
INT dp[3001][3001];
bool debug=false;
/*fn定義*/
void lcs(INT n,INT m){
	for(INT i=1;i<=n;i++){
		for(INT j=1;j<=m;j++){
			if(s[i-1]==t[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
}
void printdp(INT n,INT m){
	if(debug){
		for(INT i=0;i<=n;i++){
			for(INT j=0;j<=m;j++){
				cout<<dp[i][j]<<",";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
string backlcs(INT n,INT m){
	string re="";
	INT i=n,j=m;
	while(i && j){
		if(s[i-1]==t[j-1]){
			re.push_back(s[i-1]);
			i--;
			j--;
		}else{
			if(dp[i-1][j]>=dp[i][j-1]){
				i--;
			}else j--;
		}
	}
	reverse(re.begin(),re.end());
	return re;
}
/*main*/
int main(){
	/*IO加速*/
	if(!debug){cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);}
	/*CIN*/
	cin>>s>>t;
	/*solve*/
	INT ss=s.length(),ts=t.length();
	lcs(ss,ts);
	printdp(ss,ts);
	cout<<backlcs(ss,ts);
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
