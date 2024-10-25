#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    long long a[n], sum[n+1] = {};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum[i+1] = sum[i]+a[i];
    }
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << '\n';
    }
    return 0;
}