#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if x is a divisor of any element in array b
bool isDivisor(int x, const vector<int>& b) {
    for (int num : b) {
        if (num % x == 0) return true;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end()); 
    vector<int> b, c;
    b.push_back(a[0]); 
    for (int i = 1; i < n; i++) {
        if (isDivisor(a[i], b)) {
            b.push_back(a[i]);
        } else {
            c.push_back(a[i]);
        }
    }

    if (b.empty() || c.empty()) {
        cout << -1 << endl;
    } else {
        cout << b.size() << " " << c.size() << endl;
        for (int num : b) cout << num << " ";
        cout << endl;
        for (int num : c) cout << num << " ";
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
