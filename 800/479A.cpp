#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=-1;

    int exp1=a + b + c;
    ans=max(ans,exp1);

    exp1=a * b * c;
    ans=max(ans,exp1);

    exp1=(a + b) * c;
    ans=max(ans,exp1);

    exp1=a * (b + c);
    ans=max(ans,exp1);

    exp1=a+b*c;
    ans=max(ans,exp1);

    exp1=a*b+c;
    ans=max(ans,exp1);    

    cout<<ans;
}