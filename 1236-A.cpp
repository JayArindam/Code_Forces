#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i{0} ; i<q ; i++) {
        int a,b,c,ans{0};
        cin >> a >> b >> c;
        if (c%2!=0) {
                c--;
        }
        while (b>0 && c>0) {
            ans+=3;
            c-=2;
            b--;
        }
        if (b%2!=0) {
                b--;
        }
        while (a>0 && b>0) {
            ans += 3;
            b-=2;
            a--;
        }
        cout << ans << endl;
    }
    return 0;
}