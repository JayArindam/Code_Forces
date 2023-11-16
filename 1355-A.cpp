#include <iostream>
using namespace std;

void answer(int n){
    if (n % 2 == 0){
        cout <<  (n / 2) - 1 << endl;
    }
    else{
        cout << n / 2 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    while (n > 0){
        int a;
        cin >> a;
        answer(a);
        n--;
    }
    return 0;
}