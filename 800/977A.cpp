#include <iostream>
using namespace std;

int main(){
  int num;
  int k;
  cin>>num>>k;
  for(int i=0;i<k;i++){
    if(num>=2 && num <=9){
      num--;
    }
    else{
      int digit=num%10;
      if(digit!=0){
        num--;
      }else{
        num=num/10;
      }
    }
  }
  cout<<num;
}