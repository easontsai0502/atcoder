#include<iostream>
#include<cmath>
using namespace std;
int main(){
	unsigned long long int fir,las,nowadd=0,ans=0;
	cin>>fir>>las;
	while(fir+nowadd<=las){
		ans=ans|fir;
		if(nowadd){
			nowadd=nowadd<<1;
		}else{
			nowadd=1;
		}
	}
	cout<<ans;
	return 0;
}