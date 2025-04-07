#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<numeric>

using namespace std;
// int gcd(vector<int>a){
//     int n = a.size();
//     int mini = INT_MAX;
//     for(int i = 0; i < n; i++){
//         if(a[i]  < mini){
//             mini = a[i];
//         }
//     }
//     int gcd = -1;
//     for(int i = 1; i <= mini; i++){
//         bool flag = true;
//         for(int j = 0; j < n; j++){
//             if(a[j] % i != 0) flag = false;
//         }
//         if(flag) gcd = i;
//     }
//     return gcd;
// }
// void permute(vector<int>&a, int start, vector<vector<int>>&arr){
//     int n = a.size();
//     if(start == n){
//         arr.push_back(a);
//         return;
//     }
//     for(int i = start; i < n; i++){
//         swap(a[start],a[i]);
//         permute(a,start+1,arr);
//         swap(a[start],a[i]);
//     }
// }
// bool isGood(vector<int>a){
//     int n = a.size();
//     if(gcd(a) <= n){
//         return true;
//     }
//     return false;
// }
bool isBeautiful(vector<int>a){
    int n = a.size();
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(gcd(a[i],a[j]) <= 2){
                return true;
                break;
            }
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i < n; i++){
            cin>>a[i];
        }
        if(isBeautiful(a)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}