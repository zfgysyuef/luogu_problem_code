#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n;i++) {
        if (i * i * i == n) {
            cout << "Yes"<< endl;
            break;
        }
        else if (i * i * i > n) {
            cout << "No" << endl;
            break;
        }
    }
    
    return 0;
}
