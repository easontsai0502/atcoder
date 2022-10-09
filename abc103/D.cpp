/*
[Q]https://atcoder.jp/contests/abc103/tasks/abc103_d
*/
#include<iostream>
#include<vector>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
using namespace std;
bool lliasb(lli a,lli b){
	return a<b;
}
int main(){
	lli m;
	lli n;
	cin>>m>>n;
	lli a[n],b[n];
	bool broken[n];
	lli brokecount=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		broken[i]=false;
	}
	sort(a,a+n,lliasb);
	sort(b,b+n,lliasb);
	lli ans=0;
	while(brokecount<n){
		int canbrokemax=0,maxpi=0;
		for(int i=0;i<m;i++){//find cut
			int canbroke=0;
			for(int j=0;j<n;j++){
				if(a[j]<=i){
					if(b[j]>i){
						if(!broken[j]){
							canbroke++;
						}
					}
				}else{break;}
			}
			if(canbroke>=canbrokemax){
				canbrokemax=canbroke;
				maxpi=i;
			}
		}
		//start cut
		for(int i=0;i<n;i++){
			if(a[i]<=maxpi){
				if(b[i]>maxpi){
					if(!broken[i]){
						brokecount++;
						broken[i]=true;
					}
				}
			}
		}
		ans++;
	}
	cout<<ans;
	return 0;
}
/*
[I1]
5 2
1 4
2 5
[O1]
1
[I2]
9 5
1 8
2 7
3 5
4 6
7 9
[O2]
2
[I3]
5 10
1 2
1 3
1 4
1 5
2 3
2 4
2 5
3 4
3 5
4 5
[O3]
4
*/