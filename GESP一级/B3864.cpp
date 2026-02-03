#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,r,k,sum = 0;
	cin >> k >> l >> r;
	for (int i = l ; i <= r ; i++){
		if (i % k == 0 || i%10 == k){
			sum += i;
		}
	}
	cout << sum;
}
