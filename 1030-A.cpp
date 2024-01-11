#include <bits/stdc++.h> 

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i{0} ; i<a ; i++) {
        int q;
        cin >> q;
        if (q==1) {
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;
    return 0;
}