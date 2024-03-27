#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int q, first_index{0}, last_index{0};
        cin >> q;
        string str;
        cin >> str;
        for (int i{0}; i < str.size(); i++) {
            if (str[i] == 'B') {
                first_index = i + 1;
                break;
            }
        } 
        for (int i = str.size() - 1; i >= 0; i--) {
            if (str[i] == 'B') {
                last_index = i;
                break;
            }
        }
        cout << (last_index - first_index) + 2 << endl;
    }
    return 0;
}
