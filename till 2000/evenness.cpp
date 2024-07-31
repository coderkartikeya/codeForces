#include <iostream>
using namespace std;


int main(){
    int x;
    cin>>x;
    int arr[x];
    int counte=0;

    for(int i=0;i<x;i++){
        cin>>arr[i];
        if(arr[i]%2==0) counte++;
        
    }
    for(int i=0;i<x;i++){
        if((counte==1 && arr[i]%2==0) || (counte==x-1 && arr[i]%2!=0)){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
    
}