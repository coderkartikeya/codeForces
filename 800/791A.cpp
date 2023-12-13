#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    int i=0;
    while(a<=b){
        a=3*a;
        b=2*b;
        i++;

    }
    cout<<i;
}