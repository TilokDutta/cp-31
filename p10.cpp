#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string> a(10) ;
        long long sum = 0;
        for(int i=0; i<10;i++){
            cin>>a[i];
        }
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(a[i][j] == 'X') {
                    double dis = max(abs(i - 4.5), abs(j - 4.5));
                    // double dis = max(abs(i - 4.5), abs(j - 4.5));  
                    if(dis <= 0.5) sum+= 5;
                    else if(dis <= 1.5) sum+= 4;
                    else if(dis <= 2.5) sum+= 3;
                    else if(dis <= 3.5) sum+= 2;
                    else{
                        sum+= 1;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}