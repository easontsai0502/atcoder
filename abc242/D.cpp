/*
[Q]https://atcoder.jp/contests/abc242/tasks/abc242_d
*/
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
string cha(string str){
	int a=str.size();
	string ou="";
	for(int i=0;i<a;i++){
		switch(str[i]){
			case 'A':
				ou.push_back('B');
				ou.push_back('C');
			break;
			case 'B':
				ou.push_back('C');
				ou.push_back('A');
			break;
			case 'C':
				ou.push_back('A');
				ou.push_back('B');
			break;
		}
	}
	return ou;
}


int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	string s;
	int q;
	cin>>s>>q;
	map<unsigned long long int,vector<pair<unsigned long long int,int>>> qlist;
	char anslist[q];
	unsigned long long int tmax=0;
	for(int i=0;i<q;i++){
		unsigned long long int t,k;
		cin>>t>>k;
		qlist[t].push_back({k-1,i});
		tmax=max(tmax,t);
	}
	for(int i=0;i<=tmax;i++){
	    if(qlist.count(i)){
		    int ned=qlist[i].size();
		    for(int j=0;j<ned;j++){
		    	anslist[(qlist[i][j]).second]=s[(qlist[i][j]).first];
		    }
	    }
		
		s=cha(s);
	}
	for(int i=0;i<q;i++){
		cout<<anslist[i]<<"\n";
	}
	return 0;
}
/*
[I1]
ABC
4
0 1
1 1
1 3
1 6
[O1]
A
B
C
B
[I2]
CBBAACCCCC
5
57530144230160008 659279164847814847
29622990657296329 861239705300265164
509705228051901259 994708708957785197
176678501072691541 655134104344481648
827291290937314275 407121144297426665
[O2]
A
A
C
A
A
*/