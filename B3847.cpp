#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,m,s,sum;
	cin >> h >> m >> s;
	char time;
	cin >> time;
	if (time == 'A'){
		sum = h*60*60 + m*60 + s;
	}else{
		sum = h*60*60 + m*60 + s + 12*60*60;
	}
	cout << sum;
}
