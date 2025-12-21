#include<iostream>
using namespace std;

int main(){
          int arr[5]={2,89,4,7,3};
          // int max=arr[0];
          // for(int i=0; i<5; i++){
                    
          //           if(max < arr[i]){
          //                     max = arr[i];
          //           }
          // }
          // cout<<max;
          cout<<sizeof(arr)<<endl;
          int n = sizeof(arr)/sizeof(int);
          cout<<n;
          return 0;
}