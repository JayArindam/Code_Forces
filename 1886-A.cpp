#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    if (n < 7 or n == 9) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    
    if (n % 3 == 0)
        cout << 1 << " " << 4 << " " << (n - 5) << endl;
    else
        cout << 1 << " " << 2 << " " << (n - 3) << endl;
}

int main()
{
    long long T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}