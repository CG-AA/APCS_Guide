#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a, b;
    while(n--){
        int t1, t2;
        cin >> t1 >> t2;
        a.push_back(t1);
        b.push_back(t2);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    // when read from back, b is +1
    int max = 0, curr = 0;
    while(b.size()){
        if(b.back() > a.back()){
            curr++;
            b.pop_back();
            if(curr > max){
                max++;
            }
            continue;
        }
        curr--;
        a.pop_back();
    }
    cout << max;
    return 0;
}