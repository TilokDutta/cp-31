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
        vector<int> a(n);
        int total_xor = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            total_xor ^= a[i];
        }
        if(n%2 == 0){
            if(total_xor == 0){
                cout<<total_xor<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            cout<<total_xor<<endl;
        }
    }
    return 0;
}