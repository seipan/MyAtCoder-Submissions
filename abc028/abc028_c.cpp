#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> p;

int main(){
    vector<int> A(5);
    for(int i=0;i<5;i++) cin >> A[i];

    vector<int> ans;

    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<5;k++){
                int res = A[i] + A[j] + A[k];
                ans.push_back(res);
            }
        }
    }

    sort(ans.begin(),ans.end(),greater<int>());

    cout << ans[2] << endl;

}