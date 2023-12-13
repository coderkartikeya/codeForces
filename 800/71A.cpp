#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    

    if (s.size() > 10) {
        cout<<s[0]<<s.size()-2<<s.back();
    } else {
        cout << s;
    }

    return 0;
}