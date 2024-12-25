#include<bits/stdc++.h>
using namespace std;



void printNumber(int n) {
    if(n == 1) {
        cout << "1\n";
        return;
    }

    cout << n << " ";
    printNumber(n - 1);
    cout << n << " ";
}

int main() {

    int n;
    cin >> n;

    printNumber(n);


    return 0;
}