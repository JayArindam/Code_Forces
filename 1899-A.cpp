#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using lld = long double;
using ull = unsigned long long;
using VI = vector<ll>;
using VVI = vector<vector<ll>>;
using SI = set<ll>;
using MII = map<ll, ll>;
using PII = pair<ll, ll>;
 
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
 
void FAST_IO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
ll fact(ll n) {
    ll res = 1;
    for (ll i = 2; i <= n; i++) res *= i;
    return res;
}
 
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
 
ll nCr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
 
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
 
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
ll mypow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans *= a;
        b /= 2;
        a *= a;
    }
    return ans;
}
 
bool isPrime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
 
void solve() {
    ll n;
    cin >> n;
    cout << (n % 3 ? "First" : "Second") << endl;
}
 
int main() {
    FAST_IO();
    ll TC = 1;
    cin >> TC;
    while (TC--) solve();
    return 0;
}