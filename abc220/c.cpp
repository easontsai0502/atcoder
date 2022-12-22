/*
[tioj]	[Q]https://tioj.ck.tp.edu.tw/problems/ [ID]
[zj]
[AtCoder]		[Q]https://atcoder.jp/contests/abc220/tasks/abc220_c
[AC]
*/

/*include*/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O2")
#pragma GCC optimize("O1")
#pragma GCC optimize("O3")
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<cstring>
#include<iomanip>

/*using namespace*/
using namespace std;

/*define type*/
#define what_the_fuck cin.tie(0);cout.tie(0);ios::sync_with_stdio(false)
#define ULLI unsigned long long int
#define LLI long long int
#define INT ULLI
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
#define DBG if(debug)
#define FIR first
#define SEC second
#define elif else if
#define wassomething() empty()==false
/*struct宣告*/
struct mat;
/*fn宣告*/
/*num*/
bool debug=0;
bool iofast=true;

// PII mv[]={{0,1},{1,0},{0,-1},{-1,0}};
// int mx[]={0,1,0,-1};
// int my[]={1,0,-1,0};
int mod=988244353;
/*struct定義*/
struct mat{
	INT a[2][2];
	mat(){
		memset(a,0,sizeof(a));
	}
	mat operator*(const mat &b)const{
		mat re;
		for(INT i=0;i<2;i++){
			for(INT j=0;j<2;j++){
				for(INT k=0;k<2;k++){
					re.a[i][j]=(re.a[i][j]+a[i][k]*b.a[k][j])%mod;
				}
			}
		}
		return re;
	}
};
/*fn定義*/
PII padd(PII a,PII b){
	return {a.FIR+b.FIR,a.SEC+b.SEC};
}

bool vser(const INT &n,const INT &nw){
	return n<=nw;
}

template<typename TPE,typename TPE2,typename Fn>TPE Bit_Search(TPE l,TPE r,TPE2 n,Fn isit){
	if(isit(n,*l))return l;
	while(r-l>1){
		TPE nw=l+(r-l)/2;
		if(isit(n,*nw)){
			r=nw;
		}else{
			l=nw;
		}
	}
	return r;
}

template<typename TPE>TPE reader(){
	TPE a;
	cin>>a;
	return a;
}

/*main*/
int main(){
	if(!debug&&iofast){what_the_fuck;}
	/*CIN*/
	INT n=reader<INT>();
	vector<INT> vec;
	vec.push_back(0);
	for(INT i=1;i<=n;i++){
		vec.push_back(vec[i-1]+reader<INT>());
	}
	/*solve*/
	INT x=reader<INT>();
	INT ans=x/vec[n];
	ans*=n;
	vector<INT>::iterator it=Bit_Search(vec.begin(),vec.end(),(x%vec[n]),vser);
	ans+=it-vec.begin();
	cout<<ans<<endl;
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
