#include <iostream>
#include <cstring>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char>v;
    string ans="";

    for(int i=0;i<s.size();i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='3'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    

    for(int i=0;i<v.size();i++){
        ans=ans+v[i]+'+';

    }
    ans=ans.substr(0,ans.size()-1);
    cout<<ans;


}