#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q,ans;
    cin >> q;
    int a[q],b[q];
    for (int i{0} ; i<q ; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i{0} ; i<q ; i++) {
        for (int j{0} ; j<q ; j++) {
            if (a[i] == b[j]) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}