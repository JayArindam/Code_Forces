#include <iostream>
#include <string>

using namespace std;

int is_valid (string str) {
    for (int i{0} ; i<str.size() ; i++) {
        if (str[i] != '4' && str[i]!='7') {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

int main() {
    int siz{0};
    string a,b;
    cin >> a;
    for (int i{0} ; i<a.size() ; i++) {
        if (a[i] == '4' || a[i] == '7') {
            siz++;
        }
    }
    b = to_string(siz);
    is_valid(b);
    return 0;
}