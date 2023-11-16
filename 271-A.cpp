#include <iostream>
#include <string>

using namespace std;

int isDistinct(int yr) {
    int arr[4];
    for (int i{0} ; i<4 ; i++) {
        int tem{0};
        tem = yr%10;
        arr[i] = tem;
        yr /= 10;
    }
    for (int i{0} ; i<4 ; i++) {
        for (int j{0} ; j<4 ; j++) {
            if (arr[i] == arr[j] && j != i) {
                return false;
            }
        }
    }
    return true;
    }

int main() {
    int year;
    cin >> year;
    while (true) {
        year++;
        if (isDistinct(year) == true){
            cout << year << endl;
            break;
        }
    }
    return 0;
}