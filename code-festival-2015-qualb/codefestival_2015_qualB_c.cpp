#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> p;


int main(){
    ll N,M;cin >> N >> M;
    if(N<M){
        cout << "NO" << endl;
        return 0;
    }

    vector<ll> A(N);
    vector<ll> B(M);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<M;i++) cin >> B[i];

    sort(A.begin(),A.end(),greater<ll>());
    sort(B.begin(),B.end(),greater<ll>());

    for(int i=0;i<M;i++){
        if(B[i] > A[i]){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;


}