#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;

    string m="";
    for(auto x:s){
        auto conso=tolower(x);
        if(conso!='a' && conso!='e' && conso!='i'&& conso!='o' && conso!='u'  ){
            m+=conso;
        }
    }
    for(auto y:m){
        cout<<'.'<<y;
    }
}

