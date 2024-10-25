#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<pair<int, int>> a;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x){
                a.push_back({max(i-x+1, 0), i});
            }
        }
        sort(a.begin(), a.end());
        int curr = -1;
        for(auto i : a){
            for(int j = curr+1; j < i.first; j++){
                cout << "0 ";
            }
            if(curr+1 < i.first)
                curr = i.first-1;
            for(int j = curr+1; j <= i.second; j++){
                cout << '1';
                if(j != n-1){
                    cout << ' ';
                }
            }
            if(curr+1 <= i.second)
                curr = i.second;
        }
        for(int i = curr+1; i < n; i++){
            cout << '0';
            if(i != n-1){
                cout << ' ';
            }
        }
        cout << '\n';
    }
}