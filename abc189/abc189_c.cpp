#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    vector<ll> A(N);
    map<ll,ll> mp;
    for(int i=0;i<N;i++) cin >> A[i];

    ll ans = -1;

    for(int i=0;i<N;i++){
        ll res = A[i];
        for(int j=i;j<N;j++){
            res = min(res,A[j]);
            ans = max(ans,(res*(j-i+1)));
        }
    }

    cout << ans << endl;

}