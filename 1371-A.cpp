#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--){
        int b;
        cin >> b;
        if (b<=2){
            cout << 1 << endl;
        }
        else {
            if (b%2 == 0) {
                cout << b/2 << endl;
            }
            else {
                cout << (b/2)+1 << endl;
            }
        }
    }
    return 0;
}