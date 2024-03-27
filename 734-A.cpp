#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    int siz{0} ,a_count{0} , b_count{0};
    cin >> siz >> a;
    for (int i{0} ; i<siz ; i++) {
        if (a[i] == 'A') {
            a_count++;
        }
        else {
            b_count++;
        }
    }
    if (a_count > b_count) {
        cout << "Anton" << endl;
    }
    else if (b_count > a_count) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}