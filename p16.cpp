#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;


void solve(){
    int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        if(!is_sorted(a.begin(),a.end())) {
            cout<<0<<endl;
            return;
        }
        int dif = INT_MAX;
        for(int i = 0; i < n-1; i++){
            int diff = a[i+1] - a[i];
            dif = min(dif,diff);
        }
        cout<<dif/2+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}