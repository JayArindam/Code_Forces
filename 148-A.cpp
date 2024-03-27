#include <iostream>

using namespace std;

int main() {
    int k{0},l{0},m{0},n{0},d{0},ans{0};
    cin >> k >> l >> m >> n >> d;
    for (int i{1} ; i<=d ; i++) {
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}