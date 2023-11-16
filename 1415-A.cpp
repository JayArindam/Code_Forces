#include<bits/stdc++.h>

#define ll              long long

using namespace std;

int main()
{
    ll t,n,m,r,c;
    cin>>t;
    while(t--){
        cin>>n>>m>>r>>c;
        ll dis = 0;
        dis = max(dis,(r-1) + (c-1));
        dis = max(dis,((n-r) + (c-1)));
        dis = max(dis,((r-1) + (m-c)));
        dis = max(dis,(n-r) + (m-c));

        cout<<dis<<endl;
    }

    return 0;
}