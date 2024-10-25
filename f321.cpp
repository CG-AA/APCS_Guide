#include<bits/stdc++.h>
using namespace std;
int main() {
    int x[2], y[2], z[2];
    cin >> x[0] >> y[0] >> z[0] >> x[1] >> y[1] >> z[1];
    int ans = z[0]+z[1], n;
    cin >> n;
    int mx = INT_MIN;
    for(int i = 0; i <= n; i++){
        int ip = n - i;
        mx = max(x[0]*i*i+y[0]*i+x[1]*ip*ip+y[1]*ip, mx);
    }
    cout << mx+ans;
    return 0;
}