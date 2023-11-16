#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,ans{0};
    cin >> a;
    while (a--) {
        string str;
        cin >> str;
        if (str[0] == '+' || str[2] == '+' ){
            ans++;
        }
        else {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}