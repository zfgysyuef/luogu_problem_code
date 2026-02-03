#include <iostream>
#include <stdio.h>
using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}

int main() {
    int s, e;
    int sum = 0;
    cin >> s >> e;
    for (int year = s + 1; year < e; year++) {
        if (isLeapYear(year)) {
            sum += year;
        }
    }
    
    cout << sum << endl;
    return 0;
}
