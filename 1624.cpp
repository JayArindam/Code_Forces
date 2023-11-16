#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i{0} ; i<q ; i++) {
        int a;
        cin >> a;
        int arr[a];
        for (int m{0} ; m<a ; m++) {
            cin >> arr[m];
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr,arr+n);
        cout << arr[a-1]-arr[0] << endl;
    }
    return 0;
}