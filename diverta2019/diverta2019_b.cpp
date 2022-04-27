#include <bits/stdc++.h>
using namespace std;

int main(){
    long long R,G,B,N;cin >> R >> G >> B >> N;

    long long count = 0;
    
    for(int i=0;i<=3000;i++){
        for(int j=0;j<=3000;j++){
            long long n = (R*i) + (G*j);
            long long p =  N - n;
            if(p<0) continue;
            if(p%B == 0) count++;
        }
    }

    cout << count << endl;

    
}