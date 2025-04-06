#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag = false;
        vector<int> a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
            if(a[i] == k){
                flag=true;
            }
        }
        if(flag) cout<<"yes"<<endl;
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}