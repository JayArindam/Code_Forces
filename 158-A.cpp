#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,ans;
    cin >> a >> b;
    int arr[a];
    for (int i{0} ; i<a ; i++) {
        cin >> arr[i];
    }
    for (int i{0} ; i<a ; i++) {
        if (arr[i] >= arr[b-1] && arr[i]>0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}