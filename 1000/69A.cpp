#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>x(n);
    vector<int>y(n);
    vector<int>z(n);
    

    
    
    int xsum=0;
    int ysum=0;
    int zsum=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
        xsum+=x[i];
        ysum+=y[i];
        zsum+=z[i];

    }
    if(xsum==0 && ysum==0 && zsum==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}