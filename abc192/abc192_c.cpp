#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    int K;
    cin >> N >> K;

    for(int i=0;i<K;i++){
        sort(N.begin(),N.end());
        int g1 = stoi(N);
        sort(N.begin(),N.end(),greater<int>());
        int g2 = stoi(N);
        int f1 = g2 - g1;
        //cout << g1 << " " << g2 << " " << f1 << endl;
        N = to_string(f1);
    }

    cout << N << endl;
}