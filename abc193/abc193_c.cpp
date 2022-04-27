#include <bits/stdc++.h>
using namespace std;

inline long long pow_ll(long long x, long long n){
    long long ret = x;
    if(n==0) return 1;
    for(long long i=1; i<n; i++){
        ret *= x;
    }
    return ret;
}


int main(){
    long long N;cin >> N;
    unordered_set<long long> st;

    for(long long a=2;a*a<=N;a++){
        for(long long b=2;b<=50;b++){   
            long long res = pow_ll(a,b);
            if(res>N) break; 
                st.insert(res);
        }
    }

    cout << N-st.size() << endl;


}