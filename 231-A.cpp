#include <iostream>

using namespace std;

int main() {
    int q,count{0};
    cin >> q;
    for (int i{0} ; i<q ; i++) {
        int p,q,r;
        cin >> p >> q >> r;
        if (p+q+r >= 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}