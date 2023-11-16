#include <iostream>

using namespace std;

int main() {
    int row{0} , col{0} , ans{0};
    int arr[5][5];
    for (int i{0} ; i<5 ; i++) {
        for (int j{0} ; j<5 ; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i{0} ; i<5 ; i++) {
        for (int j{0} ; j<5 ; j++) {
            if (arr[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }

    if (row > 2) {
        while (row != 2) {
            row--;
            ans++;
        }
    }
    else {
        while (row != 2) {
            row++;
            ans++;
        }
    }   

    if (col > 2) {
        while (col != 2) {
            col--;
            ans++;
        }
    }
    else {
        while (col != 2) {
            col++;
            ans++;
        }
    }

    cout << ans;
}