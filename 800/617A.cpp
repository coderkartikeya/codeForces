#include <iostream>
#include <cmath>
using namespace std;

// elephant

int main(){
    int x;
    int ans=INT_MAX;
    cin>>x;

    for(int i=1;i<=5;i++){
        int steps;

        if(x%i==0){
            steps=(x/i);
        }
        else{
            steps=ceil(double(x)/i);

        }
        ans=min(ans,steps);             

    }
    cout<<ans;


}