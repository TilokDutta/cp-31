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
        int noTwo = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] == 2) noTwo++;
        }
        if(noTwo == 0){
            cout<<1<<endl;
        }
        else if(noTwo%2 != 0){
            cout<<-1<<endl;
        }else{
            int half = noTwo/2;
            for(int i = 0; i < n; i++){
                if(a[i] == 2){
                    half--;
                    if(half == 0){
                        cout<<i+1<<endl;
                    }
                }
            }
        }
        // long long divi = a[0];
        // bool found = false;
        // for(int k = 1; k < n; k++){
        //     long long res = multi/divi;
        //     if(res == divi){
        //         cout<<k<<endl;
        //         found = true;
        //         break;
        //     }
        //     divi *= a[k];
        // }
        // if(!found){
        //     cout<<-1<<endl;
        // }
    }
    return 0;
}