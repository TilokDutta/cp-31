#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int ans = -1;
        for(int i = 0; i <= 5; i++){
            if(x.find(s) != string::npos) {
                ans = i;
                break;
            }
            x +=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}