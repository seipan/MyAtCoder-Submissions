#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    map<int,int> mp;
    for(int i=0;i<N;i++){
        cin >> A[i];
        mp[A[i]]++;
    }

    long long ans = 0;

    for(int i=-200;i<=200;i++){
        if(!mp[i]) continue;
        long long t = mp[i];
        for(int j=i+1;j<=200;j++){
            if(!mp[j]) continue;
            long long p = mp[j];
            long long res = (j-i)*(j-i);
            res *= (p*t);
            ans += res;
        }
    }


    cout << ans << endl;
}