#include <iostream>

using namespace std;

int solve (int p , int q, int r) {
    if (p <= q+r){
        cout << (p*2)-1 << endl;
    }
    else {
        cout << ((q+r)*2)+1 << endl;
    }
}

int main() {
    int a;
    cin >> a;
    while (a>0) {
        int p{0},q{0},r{0};
        cin >> p >> q >> r;
        solve(p,q,r);
        a--;
    }
    return 0;
}