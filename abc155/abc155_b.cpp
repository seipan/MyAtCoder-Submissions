#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    ll N;cin >> N;
    vector<ll> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    bool flag = true;

    for(int i=0;i<N;i++){
        if(A[i]%2 == 0){
            if(A[i]%3 !=0 && A[i]%5 != 0) flag = false;
        }
    }

    if(flag) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
 
    

}