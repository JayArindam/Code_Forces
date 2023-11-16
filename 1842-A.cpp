#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i{0} ; i<q ; i++) {
        long long a{0},b{0},ten{0},tzn{0};
        cin >> a >> b;
        for (int m{0} ; m < a ; m++) {
            int r{0};
            cin >> r;
            ten += r;
        }
        for (int m{0} ; m < b ; m++) {
            int r{0};
            cin >> r;
            tzn += r;
        }
        if (ten > tzn) {
            cout << "Tsondu" << endl;
        }
        else if (tzn > ten) {
            cout << "Tenzing" << endl;
        }
        else {
            cout << "Draw" << endl;
        }
    }
    return 0;
}