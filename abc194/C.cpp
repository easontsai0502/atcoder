/*
[Q]https://atcoder.jp/contests/abc194/tasks/abc194_c
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int b=0,a=0;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		a+=k;
		b+=k*k;
	}
	cout<<(b*n)-(a*a);
	return 0;
}
/*
[I1]
3
2 8 4
[O1]
56
[I2]
5
-5 8 9 -4 -3
[O2]
950
*/

/*
[思考邏輯]
(a-b)^2+(a-c)^2+(b-c)^2
= a^2-2ab+b^2 + a^2-2ac+c^2 + c^2-2cb+b^2
= 2a^2 + 2b^2 + 2c^2 - 2(ab+ac+bc)
(a-b)^2+(a-c)^2+(a-d)^2+(b-c)^2+(b-d)^2+(c-d)^2
= 3a^2 + 3b^2 + 3c^2 + 3d^2 - 2(ab+ac+ad+bc+bd+cd)
......

(a+b)^2=a^2+2ab+b^2
(a+b+c)^2=a^2+b^2+c^2+2(ab+ac+bc)
(a+b+c+d)^2=aa+bb+cc+dd+2(ab+ac+ad+bc+bd+cd)
......

(a-b)^2+(a-c)^2+(a-d)^2+(b-c)^2+(b-d)^2+(c-d)^2
= 3a^2 + 3b^2 + 3c^2 + 3d^2 - 2(ab+ac+ad+bc+bd+cd)
= 3a^2 + 3b^2 + 3c^2 + 3d^2 - 2(ab+ac+ad+bc+bd+cd) + (a+b+c+d)^2-(a+b+c+d)^2
= 3a^2 + 3b^2 + 3c^2 + 3d^2 - 2(ab+ac+ad+bc+bd+cd) + aa+bb+cc+dd + 2(ab+ac+ad+bc+bd+cd) - aa+bb+cc+dd+2(ab+ac+ad+bc+bd+cd)
= 4a^2 + 4b^2 + 4c^2 + 4d^2 - aa+bb+cc+dd+2(ab+ac+ad+bc+bd+cd)
=4(a^2+b^2+c^2+d^2)-(a+b+c+d)^2


N(A1^2+A2^2+......+AN^2)-(A1+A2+......+AN)^2
*/