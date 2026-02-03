#include<iostream>
using namespace std;

int main(){
    int h,m,s,t;
    cin >> h >> m >> s;
    cin >> t;
    int sum = h * 60*60 + m * 60 + s + t;
    cout << (sum/3600) << " " << (sum/60)%60 << " " << (sum%60);
}
