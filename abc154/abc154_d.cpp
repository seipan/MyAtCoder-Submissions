#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;


int main(){
    double N,K;cin >> N >> K;
    vector<double> p(N);
    vector<double> res(N);
    for(int i=0;i<N;i++) cin >> p[i];

    for(int i=0;i<N;i++){
        res[i] = (1.0*(p[i]+1))/2;
    }

    double ans = 0;
    for(int i=0;i<K;i++) ans+=res[i];

    double ans2 = ans;
    for(int i=K;i<N;i++){
        ans = ans + res[i] - res[i-K];
        ans2 = max(ans,ans2);
    }

    cout << fixed << setprecision(7);
    cout << ans2 << endl;
    

}