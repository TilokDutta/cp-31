#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n-1);
        long long sum = 0;
        for(int i=0; i<n-1;i++){
            cin>>a[i];
            sum += a[i];
        }
        cout<<(-sum)<<endl;
    }
    return 0;
}