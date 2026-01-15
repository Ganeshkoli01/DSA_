#include<iostream>
using namespace std;

bool isPowerof(int num){
          if(num >0 && !(num & (num - 1))){
                    return true;
          }else{
                    return false;
          }
}

int main(){
          int num;
          cout<<"Enter the number: ";
          cin>>num;

          if(isPowerof(num)){
                    cout<<"Yes";
          }else{
                    cout<<"No";
          }

          return 0;
}
