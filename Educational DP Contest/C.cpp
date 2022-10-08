/*
[Q]https://atcoder.jp/contests/dp/tasks/dp_c
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
	/*solve*/
	INT dp[2][3];
	dp[0][0]=dp[0][1]=dp[0][2]=0;
	dp[1][0]=dp[1][1]=dp[1][2]=0;
	INT cc[6]={0,1,2,0,1,2};
	for(int j=0;j<n;j++){
		//cout<<(j)%2<<" ";
		for(INT i=0;i<3;i++){
			INT abc;
			cin>>abc;
			INT typea;
			typea=dp[(j+1)%2][cc[i+1]]+abc;
			//從右上角過來
			INT typeb;
			typeb=dp[(j+1)%2][cc[i+2]]+abc;
			//從左上角過來
			dp[(j)%2][i]=max(typea,typeb);
			//cout<<typea<<","<<typeb<<" ";
		}
		//cout<<"\n";
	}
	cout<<max(dp[(n-1)%2][1],max(dp[(n-1)%2][2],dp[(n-1)%2][0]));
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
