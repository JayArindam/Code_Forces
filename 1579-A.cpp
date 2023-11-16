#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i{0} ; i<q ; i++) {
        int a{0},b{0},c{0};
        string str;
        cin >> str;
        for (int m{0} ; m < str.size() ; m++) {
            if (str[m] == 'A' ){
                a++;
            }
            else if (str[m] == 'B' ) {
                b++;
            }
            else {
                c++;
            }
        }
        if (a+c == b) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}