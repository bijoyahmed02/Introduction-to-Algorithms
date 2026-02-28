#include <iostream>
#include <string>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;
        bool good = false;

        for (int i = 0; i + 2 < S.size(); i++) {
            string sub = S.substr(i, 3); 
            if (sub == "010" || sub == "101") {
                good = true;
                break; 
            }
        }

        if (good) 
            cout << "Good\n";
        else 
            cout << "Bad\n";
    }
    return 0;
}