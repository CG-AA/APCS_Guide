#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, q;
    cin >> n >> q;
    ll sum[n+1][n+1] = {};
    bool a[n][n] = {};
    for(int i = 0; i < n; i++)for(int j = 0; j < n; j++){
        char t;
        cin >> t;
        if(t == '*'){
            a[i][j] = true;
        }
        sum[i+1][j+1] = sum[i][j+1] + sum[i+1][j] - sum[i][j] + a[i][j];
    }
    for(int i = 0; i < q; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x1-1][y1-1] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x2][y2] << '\n';
    }
    return 0;
}