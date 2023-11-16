#include <iostream>

using namespace std;

int main() {
    int a{0};
    cin >> a;
    int arr[a][3];
    for (int i{0} ; i<a ; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    for (int i{0} ; i<3 ; i++) {
        int col_sum{0};
        for (int j{0} ; j<a ; j++) {
            col_sum += arr[j][i];
        }
        if (col_sum != 0) {
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES";
}