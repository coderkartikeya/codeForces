#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    string m;

    cin>> s;
    cin>> m;
    int ans=-1;

    for(char &c:s){
        c=tolower(c);
    }
    for(char &c:m){
        c=tolower(c);
    }

    for(int i=0;i<s.size();i++){
        if(s[i]<m[i]){
            ans=-1;
            break;
        }
        else if(s[i]>s[i]){
            ans=1;
            break;
        }
        else if(s[i]==m[i]){
            ans=0;
        }
        
        
    }

    cout<<ans;



    }