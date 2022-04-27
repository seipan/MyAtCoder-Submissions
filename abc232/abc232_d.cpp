#include <bits/stdc++.h>
using namespace std;

//解説AC

int main() {
	int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; ++i) cin >> S[i];
    vector f(H+1, vector<int>(W+1));

    for(int i=H-1;i>=0;i--){
        for(int j=W-1;j>=0;j--){
            if(S[i][j] == '#') continue;
            f[i][j] = max(f[i+1][j]+1,f[i][j+1]+1);
        }
    }

    cout << f[0][0] << endl;


}