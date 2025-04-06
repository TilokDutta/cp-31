#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int neg = 0;
        int pos = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] == -1) neg++;
            if(a[i] == 1) pos++;
        }
        int op = 0;
        while(pos < neg || (neg%2) == 1){
            neg--;
            pos++;
            op++;
        }
        cout<<op<<endl;
    }
    return 0;
}