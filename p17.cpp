#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> a;
        if(x != 1){
            for(int i = 0; i < n; i++){
                a.push_back(1);
            }
        }else{
            if(k == 1){ 
                cout<<"NO"<<endl;
                continue;
            }
            else if(k == 2){
                if(n%2 != 0) {
                    cout<<"NO"<<endl;
                    continue;
                }
                else{
                    for(int i = 0; i < n/2;i++){
                        a.push_back(2);
                    }
                }
            }
            else if(k >= 3){
                if(n%2 == 0){
                    for(int i = 0; i < n/2;i++){
                        a.push_back(2);
                    }
                }else{
                    a.push_back(3);
                    for(int i = 0; i < (n-3)/2; i++){
                        a.push_back(2);
                    }
                }
            }
        }
        cout<<"YES"<<endl;
        cout<<a.size()<<endl;
        for(int each:a){
            cout<<each<<" ";
        }
        cout<<endl;
    }
    return 0;
}