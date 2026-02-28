#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "";  
    for (int i = 0; i < s.size(); ) 
    {
        if (i + 4 < s.size() && s.substr(i, 5) == "EGYPT") {
            res += " "; 
            i += 5;          
        } else {
            res += s[i];  
            i++;
        }
    }

    cout << res;
    return 0;
}