#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans;

    if (s.size() > 12) {
        ans = s.substr(0, 1) + to_string(s.size() - 2) + s.substr(s.size() - 1, 1);
        cout << ans;
    } else {
        cout << s;
    }

    return 0;
}