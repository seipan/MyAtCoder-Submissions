#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const long long INF = 5100000000000000000;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll l,r;cin >> l >> r;
    ll ans = inf;

    for(ll i=l;i<=r;i++){
        for(ll j=i+1;j<=r;j++){
            ll seki = (i*j)%2019;
            ans = min(ans,seki);
            if(ans == 0){
                cout << 0 << endl;
                return 0;
            }

        }
    }

    cout << ans << endl;

}