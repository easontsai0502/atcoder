/*
[Q]https://atcoder.jp/contests/abc229/tasks/abc229_c
[AC]
*/
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#define ulli unsigned long long int
#define pulli pair<ulli,ulli>
using namespace std;
struct cheese{
	ulli a;
	ulli b;
};
bool finder(cheese& a,cheese& b){
	return a.a>b.a;
}
int main(){
	ulli n,w;
	cin>>n>>w;
	cheese alist[n];
	for(int i=0;i<n;i++){
		cheese a;
		cin>>a.a>>a.b;
		alist[i]=a;
	}
	sort(alist,alist+n,finder);
	ulli ans=0;
	for(int i=0;i<n;i++){
		int cantake=min(w,((alist[i]).b));
		w-=cantake;
		ans+=(alist[i]).a*cantake;
		if(w){continue;}
		else{break;}
	}
	cout<<ans;
	return 0;
}
/*
[I1]
3 5
3 1
4 2
2 3
[O1]
15
[I2]
4 100
6 2
1 5
3 9
8 7
[O2]
100
[I3]
10 3141
314944731 649
140276783 228
578012421 809
878510647 519
925326537 943
337666726 611
879137070 306
87808915 39
756059990 244
228622672 291
[O3]
2357689932073
*/