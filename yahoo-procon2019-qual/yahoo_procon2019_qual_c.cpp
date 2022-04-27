#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;

int main(){
    ll A,K,B;cin >> K >> A >> B; 
    if(A>=B || (B-A) == 1){
        cout << 1+K << endl;
        //cout << "Neko" << endl;
        return 0;
    } 
    if(K < (A+1)){
        cout << 1+K << endl;
        //cout << "Neko" << endl;
        return 0;
    }
    ll ans = A + ((K - (A - 1)) / 2) * (B - A) + (K - (A - 1)) % 2;
    

    cout << ans << endl;

}