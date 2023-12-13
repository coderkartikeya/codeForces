#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    cin>>s;
    int lower=0;
    int upper=0;
    for(char n:s){
        if(islower(n)){
            lower++;
        }
        else if(isupper(n)){
            upper++;
        }
    }
    if(lower==upper){
        for(char &n:s){
            n=tolower(n);            
        }

    }
    else if(lower>upper){
        for(char &n:s){
            n=tolower(n);            
        }

    }else{
        for(char &n:s){
            n=toupper(n);            
        }
    }

    cout<<s;
}