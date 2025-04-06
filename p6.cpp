#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
           cin >> a[i]; 
        }
        unordered_set<int> st(a.begin(), a.end());
        if(st.size() == 1) {
            cout << "yes" << endl;
            continue;
        }
        if(st.size() > 2) {
            cout << "no" << endl;
            continue;
        }
        auto it = st.begin();
        int first = *it;
        int second = *(++it);
        int cnt1 = count(a.begin(), a.end(), first);
        int cnt2 = count(a.begin(), a.end(), second);
        if(abs(cnt1 - cnt2) > 1) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }
    return 0;
}