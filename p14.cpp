#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a > b) cout<<"First"<<endl;
        else if( a < b) cout<<"Second"<<endl;
        else if(a == b){
            if(c % 2 == 0){
                cout<<"Second"<<endl;
            }else{
                cout<<"First"<<endl;
            }
        }
    }
    return 0;
}