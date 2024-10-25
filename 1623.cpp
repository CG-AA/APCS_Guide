#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    long long g1 = 0, tar = 0, ans = LONG_LONG_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        tar += a[i];
    }
    
    for(int i = 0; i < (1 << n); i++){
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                g1 += a[j];
            }
        }
        ans = min(ans, abs(tar-g1*2));
        g1 = 0;
    }
    cout << ans;
    return 0;
}