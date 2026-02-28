#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int even_count = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 2 == 0) even_count++;
        }

        if(n % 2 != 0) {
            cout << -1 << "\n";
        } else {
            int target = n / 2;
            cout << abs(even_count - target) << "\n";
        }
    }
    return 0;
}