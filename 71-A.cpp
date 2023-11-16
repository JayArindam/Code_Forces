#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    char arr[3];
    string str;
    cin >> str;
    int n = str.size();
    if (n<=10) {
        cout << str << endl;
        return;
    }
    cout << str[0] << n-2 << str[n-1] << endl;
}

int main() {
    int a;
    cin >> a;
    while(a--) {
        solve();
    }
    return 0;
}