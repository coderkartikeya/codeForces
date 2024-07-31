#include <iostream>
using namespace std;


int main(){
    string s;
    cin>>s;
    int count1=0;
    int max1=0;
    int count0=0;
    int max0=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') count1++;
        else if(s[i]=='0'){
            max1=max(count1,max1);
            count1=0;
        }
    }
    max1=max(max1,count1);
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') count0++;
        else if(s[i]=='1'){
            max0=max(count0,max0);
            count0=0;
        }
    }
    max0=max(count0,max0);
    if(max0>=7 || max1>=7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}