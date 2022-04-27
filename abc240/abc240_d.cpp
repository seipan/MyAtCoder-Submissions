#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    deque<pi> deq;
    ll count = 0;
    deq.push_back(pi(-1,-1));

    for(int i=0;i<N;i++){
        ll a;cin >> a;
        count++;
        if(deq.back().first != a){
            deq.push_back(pi(a,1));
        }
        else{
            deq.back().second++;
        }
        if(deq.back().second == a){
            deq.pop_back();
            count -= a;
        }

        cout << count << endl;

    }

}