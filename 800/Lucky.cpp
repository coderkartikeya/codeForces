#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int count=0;
    while(x>0){
        int digit=x%10;
        if(digit==4 || digit==7) count++;
        x/=10;
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}