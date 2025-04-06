#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long difb = abs(b-d);
        long long na = a+difb;
        long long nb = b+difb;
        long long difa = na-c;
        if(difa < 0 || d < b){
            cout<<-1<<endl;
        }else{
            cout<<(difb+difa)<<endl;
        }
    }
    return 0;
}