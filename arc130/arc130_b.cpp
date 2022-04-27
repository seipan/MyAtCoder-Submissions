#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()



int main(){ 
    ll H,W,C,Q;cin >> H >> W >> C >> Q;
    vector<ll> t(Q),n(Q),c(Q);

    vector<ll> count(C);
    map<ll,bool> gyou;
    map<ll,bool> retu;

    for(int i=0;i<Q;i++){
        cin >> t[i] >> n[i] >> c[i];
    }

    for(int i=Q-1;i>=0;i--){
        if(t[i] == 1){
            if(gyou[n[i]-1]) continue;
            count[c[i]-1] += W;
            gyou[n[i]-1] = true;
            H--;

        }
        else{
            if(retu[n[i]-1]) continue;
            count[c[i]-1] += H;
            retu[n[i]-1] = true;
            W--;
        }
    }
    
    for(int i=0;i<C;i++){
        cout << count[i] << " ";
    }
    

    cout << endl;

}