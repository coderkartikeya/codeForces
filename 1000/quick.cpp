#include <iostream>
using namespace std;

int partion(int *arr,int i,int j){
    int pivot=arr[i];
    int start=i;
    int end=j;
    while(start<end){
        while(arr[start]<=pivot){
        start++;

    }
    while(arr[end]>pivot){
        end--;
    }
    if(start<end){
        swap(arr[start],arr[end]);
    }


    }
    swap(arr[i],arr[end]);
    return end;    
}

void quicksort(int *arr,int i,int j){
    if(i<j){
        int loc=partion(arr,i,j);
        quicksort(arr,i,loc-1);
        quicksort(arr,loc+1,j);
    }
}

int main(){
    int arr[5]={9,3,5,2,1};
    quicksort(arr,0,4);
    for(int x:arr){
        cout<<x<<endl;
    }

}