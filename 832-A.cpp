#include <iostream>
 
using namespace std;
 
int main() {
    unsigned long long n, k;
 
    while (cin >> n >> k) {
        cout << ((n / k) & 1 ? "YES" : "NO") << endl;
    }
 
    return 0;
}