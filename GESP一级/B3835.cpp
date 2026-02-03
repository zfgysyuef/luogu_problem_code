#include<bits/stdc++.h>
using namespace std;

int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	int a,b;
	cin >> a >> b;
	if ((a%4 == 0 && a %100 !=0) || (a%400 == 0)){
		if(b == 2){
			cout << 29;
			return 0;
		}
	}
	cout << month[b];
	
	
}
