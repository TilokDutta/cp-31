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
        string s;
        cin>>s;
        bool threeCon = false;
        long long cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
                threeCon = true;
                break;
            }
            if(s[i] == '.'){
                cnt++;
            }
        }
        if(threeCon){
            cout<<2<<endl;
        }else{
            cout<<cnt<<endl;
        }
    }
    return 0;
}