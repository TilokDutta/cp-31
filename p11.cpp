#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(abs(a[i]) < ans) ans = abs(a[i]);
    }
    cout<<ans<<endl;
    return 0;
}