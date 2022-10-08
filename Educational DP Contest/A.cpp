/*
[Q]https://atcoder.jp/contests/dp/submissions/35461367
[WA 10/11]
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
	INT n;
	cin>>n;
	INT stone[n+1];
	stone[0]=0;
	for(INT i=1;i<=n;i++){
		cin>>stone[i];
	}
	/*solve*/
	if(n==2){
		cout<<abs(stone[1]-stone[2])<<"\n";
	}else{
		INT dp[n+1];
		dp[0]=dp[1]=0;
		for(INT i=2;i<=n;i++){
			if(i==2){
				dp[i]=abs(stone[i]-stone[i-1])+dp[i-1];
			}
			INT a=abs(stone[i]-stone[i-1])+dp[i-1];
			INT b=abs(stone[i]-stone[i-2])+dp[i-2];
			dp[i]=min(a,b);
		}
		cout<<dp[n]<<"\n";
	}
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
