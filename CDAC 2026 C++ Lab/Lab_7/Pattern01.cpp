#include<iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        int num = i % 2;  // starting number

        for(int j = 1; j <= i; j++) {
            cout << num;
            num = 1 - num;  // toggle between 0 and 1
        }

        cout << endl;
    }

    return 0;
}