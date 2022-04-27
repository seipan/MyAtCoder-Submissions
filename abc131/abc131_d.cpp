#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}


int main(){
    ll N;cin >> N;
    vector<pi> p;

    for(int i=0;i<N;i++){
        ll a,b;cin >> a >> b; 
        p.push_back(pi(a,b));
    }

    sort(ALL(p),compare_by_b);
    ll place = 0;
    bool flag = true;

    for(int i=0;i<N;i++){
        place += p[i].first;
        if(place > p[i].second){
            flag = false;
            //cout << p[i].first << " " << p[i].second << endl;
        } 
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;



}