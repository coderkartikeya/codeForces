#include <iostream>
using namespace std;
#include <queue>

int main(){
    int x;
    cin>>x;
    queue<pair<int,int>> q;
    for(int i=0;i<x;i++){
        int a;
        int b;
        cin>>a >>b;
        if(a>b){
            q.push(make_pair(b,a));
        }else{
            q.push(make_pair(a,b));
        }
    }
    while(!q.empty()){
        cout<<q.front().first<<" "<<q.front().second<<endl;
        q.pop();
    }

    return 0;
}