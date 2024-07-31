#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    char arr[26]={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    int count=0;
    for(auto x:arr){
        if(x>0) count++;
    }

    if(count%2!=0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
    return 0;

}