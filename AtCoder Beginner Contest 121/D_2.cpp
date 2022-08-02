#include<iostream>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
ulli solve(ulli a){
	switch(a%4){
		case 0:
			return a;
		break;
		case 1:
			return 1;
		break;
		case 2:
			return a+1;
		break;
		case 3:
			return 0;
		break;
	}
}
int main(){
	ulli fir,las;
	cin>>fir>>las;
	cout<<(solve(fir-1)^solve(las))<<"\n";
	return 0;
}
