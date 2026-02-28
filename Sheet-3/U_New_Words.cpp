#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; i < s.size(); i++) {
        char c = toupper(s[i]);  
        if (c == 'E') e++;
        else if (c == 'G') 
            g++;
        else if (c == 'Y') 
            y++;
        else if (c == 'P') 
            p++;
        else if (c == 'T') 
            t++;
    }
    int ans = e;
    if (g < ans) 
        ans = g;
    if (y < ans) 
        ans = y;
    if (p < ans) 
        ans = p;
    if (t < ans) 
        ans = t;

    cout << ans;
    return 0;
}