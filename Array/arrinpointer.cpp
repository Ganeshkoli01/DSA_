#include<iostream>
using namespace std;

void arrfunction(int gk[]){
          gk[2]=20000;
          cout<<gk[4]<<endl;
}

int main(){
          int arr[]={1,2,3,4,5,6};
          int n = sizeof(arr)/sizeof(int);

          cout<<arr[0]<<endl;

          arrfunction(arr);
          cout<<arr[2]<<endl;

          return 0;
          
}