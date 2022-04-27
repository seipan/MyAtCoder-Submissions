#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX / 2;

int main(){
    int N;cin >> N;
    string S;cin >> S;
    vector<int> v(N,-1);
    deque<int> deq = {N};

    for(int i=N-1;i>=0;i--){
        if(S[i] == 'R') deq.push_front(i);
        if(S[i] == 'L') deq.push_back(i);
    }
    for(int i=0;i<N;i++){
        cout << deq[i] << " "; 
    }

    cout << deq[N] << endl;

}