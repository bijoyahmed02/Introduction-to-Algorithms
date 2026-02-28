#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i=0; i<N; i++) 
        cin >> A[i];
    for (int i=0; i<N; i++) 
        cin >> B[i];
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    if (A == B) {
        cout <<"yes\n";
    } else {
        cout <<"no\n";
    }

    return 0;
}
