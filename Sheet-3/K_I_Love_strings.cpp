#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    while (N--) {
        string S, T;
        cin >> S >> T;
        string result = "";
        int lenS = S.size();
        int lenT = T.size();
        int minLen = min(lenS, lenT);
        for (int i = 0; i < minLen; i++) {
            result += S[i];
            result += T[i];
        }
        if (lenS > lenT) {
            result += S.substr(minLen);
        } else if (lenT > lenS) {
            result += T.substr(minLen);
        }

        cout << result << "\n";
    }

    return 0;
}