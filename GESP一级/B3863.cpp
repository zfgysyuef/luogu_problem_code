#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,z,q;
	cin >> x >> y >>z >> q;
	int sum = 0;
	sum = x*2 + y*5 + z*3;
	if (sum <= q){
		cout << "Yes" << endl;
		cout << q-sum;
	}else{
		cout <<"No" << endl;
		cout << sum-q;
	}
}
