#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1,m1,h2,m2;
	cin >> h1 >> m1 >> h2 >> m2;
	int sum1, sum2;
	sum1 = h1*60 + m1;
	sum2 = h2*60 + m2;
	cout << sum2 - sum1;
}
