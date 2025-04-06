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
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum += a[i];
        }
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                int dif = sum - a[i];
                if(dif % 2 == 0){
                    flag = true;
                    break;
                }
            }else{
                int dif = sum - a[i];
                if(dif %2 != 0){
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}