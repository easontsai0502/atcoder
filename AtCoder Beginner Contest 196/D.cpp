/*
[Q]https://atcoder.jp/contests/abc196/tasks/abc196_d
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a,b;
int place[16][16];
int h,w;
int anscount;
//a=**
//b=*
void out(){
	cout<<"a="<<a<<",b="<<b<<"\n";
	for(int j=0;j<w;j++){
		for(int i=0;i<h;i++){
			switch(place[i][j]){
				case 1:
				cout<<"*";
				break;
				case 2:
				cout<<"-";
				break;
				case 3:
				cout<<"|";
				break;
				case 0:
				cout<<" ";
				break;
			}
			cout<<place[i][j];
		}
		cout<<"\n";
	}
}
void findans(int x=0,int y=0){
	if(x==h){
		//下一行
		findans(0,y+1);
	}else if(y==w){
		//確認答案
		if(a==b&&b==0){
			anscount++;
		}
	}else if(place[x][y]){
		findans(x+1,y);
	}else{
		//暴力階段
		//1block(1)
		if(b){
			b--;
			place[x][y]=1;
			findans(x+1,y);
			place[x][y]=0;
			b++;
		}
		if(a){
			//2block,橫向(2)
			if(x<h-1){
				a--;
				place[x][y]=2;
				place[x+1][y]=2;
				findans(x+2,y);
				place[x][y]=0;
				place[x+1][y]=0;
				a++;
			}
			//2block,縱向(3)
			if(y<w-1){
				a--;
				place[x][y]=3;
				place[x][y+1]=3;
				findans(x+1,y);
				place[x][y]=0;
				place[x][y+1]=0;
				a++;
			}
		}
	}
	//out();
}
int main(){
	cin>>h>>w>>a>>b;
	anscount=0;
	findans();
	cout<<anscount;
	return 0;
}
/*
[I1]
2 2 1 2
[O1]
4
[I2]
3 3 4 1
[O2]
18
[I3]
4 4 8 0
[O3]
36
*/
/*
___>h
****|
****|
****V
    w
*/