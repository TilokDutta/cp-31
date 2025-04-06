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
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int maxL = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                int cl = 0;
                for(int j = i; j < n; j++){
                    if(a[j] == 0){ 
                        cl++;
                        if(cl > maxL) maxL = cl;
                    }else {
                        break;
                    }
                }
            }
        }
        cout<<maxL<<endl;
    }
    return 0;
}