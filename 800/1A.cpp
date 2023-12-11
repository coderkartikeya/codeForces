#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m,n,a;
    int numberoftiles;
    cin>>m>>n>>a;
    if (a == 0) {
        a=1;
        cout << "Invalid tile size (a cannot be zero)." << endl;
        
    }

    numberoftiles=ceil(m/static_cast<double>(a))+ceil(n/static_cast<double>(a));
    cout<<numberoftiles;
    
}