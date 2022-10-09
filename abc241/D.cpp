#include<iostream>
#include<algorithm>
#include<set>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	int q;
	cin>>q;
	set<ulli> se;
	while(q--){
		int a,x,k;
		cin>>a;
		ulli counter=0;
		if(a==0){
			cin>>x;
			se.insert(x);
			counter++;
		}else if(a==1){
			cin>>x>>k;
			if(counter<5){
				continue;
			}
			set<ulli>::iterator seit=se.end();
			for(int i=0;i<k;i++){
				seit--;
			}
			if(*seit<=x){
				cout<<*seit<<"\n";
			}else{
				cout<<"-1\n";
			}
		}else{
			cin>>x>>k;
			if(counter<5){
				continue;
			}
			set<ulli>::iterator seit=se.begin();
			for(int i=0;i<k-1;i++){
				seit++;
			}
			if(*seit>=x){
				cout<<*seit<<"\n";
			}else{
				cout<<"-1\n";
			}
		}
	}
	return 0;
}