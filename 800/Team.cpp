#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][3];
    int numberOfQuestions=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            int num;
            cin>>num;
            arr[i][j]=num;
        }
        for(int m=0;m<3;m++){
            if(arr[i][m]==1){
                count++;

            }
        }
        if(count>=2){
            numberOfQuestions++;
        }

    }
    cout<<numberOfQuestions;





    return 0;
}