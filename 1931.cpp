#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int solver(int a) {
    for (int i{1} ; i<27 ; i++) {
            for (int j{1} ; j<27 ; j++) {
                for (int k{1} ; k<27 ; k++) {
                    if (i + j + k == a) {
                        cout << char(96 + i) << char(96 + j) << char(96 + k) << endl;
                        return 0;
                    }
                }
            }
        }
}
 
int main() {
    int N;
    cin >> N;
    while (N--) {
        int a{0};
        cin >> a;
        solver(a);
    }
    return 0;
}