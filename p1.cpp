#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(static_cast<size_t>(n));
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        vector<long long> ca = a;
        sort(ca.begin(),ca.end());
        if(ca == a || k > 1){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}