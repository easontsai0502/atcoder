#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k,q;
	cin>>n>>k>>q;
	vector<int> plist(n,k-q);
	for(int i=0;i<q;i++){
		int a;
		cin>>a;
		plist[a-1]++;
	}
	for(int i=0;i<n;i++){
		if(plist[i]>0){
			cout<<"Yes\n";
		}else{cout<<"No\n";}
	}
	return 0;
}