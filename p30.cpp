#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check(int i){
    int zero = 0;
    int digit = 0;
    while(i != 0){
        if(i%10 == 0){
            zero++;
        }
        digit++;
        i=i/10;
    }
    return zero == digit-1;
}
int main() {
    vector<int> rounded;
    for(int i = 1; i <= 999999; i++){
        if(check(i) == true){
            rounded.push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int each : rounded){
            if(each <= n){
                cnt++;
            }else{
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
