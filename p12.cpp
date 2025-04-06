#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> b(n);
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        vector<long long> ans;
        ans.push_back(b[0]);
        for(int i =1; i < n; i++){
            if(b[i] >= b[i-1]){
                ans.push_back(b[i]);
            }else{
                ans.push_back(b[i]);
                ans.push_back(b[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}