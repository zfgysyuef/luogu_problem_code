#include<iostream>
using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    if(x+n <= 7){
        cout << x+n;
        return 0;
    }else{
        if((x+n)%7 == 0){
            cout << 7;
            return 0;
        }
        cout << (x+n)%7;
    }
}
