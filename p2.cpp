#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        if(n==0) cout<<x<<endl;
        if(n == 1){
            cout<<max((a[0]-0),(x-a[0]));
        }
        long long maxi = a[0] - 0;
        for(int i = 1; i < n; i++){
            long long sub = a[i] - a[i-1];
            maxi = max(maxi,sub);
        }
        maxi = max(maxi,2*(x-a[n-1]));
        cout<<maxi<<endl;
    }
    return 0;
}