#include<iostream>
using namespace std;

void printsum(int *arr,int n){
          for(int start =0; start<n; start++){
                    for(int end=start; end<n; end++){
                              int currsum = 0;
                              for(int i=start; i<=end; i++){
                                        currsum += arr[i];
                              }
                              cout<<currsum<<" ,";
                    }cout<<endl;
          }
}

int main(){
          int arr[]={1,2,3,4};
          int n = sizeof(arr)/sizeof(int);

          printsum(arr, n);
                    return 0;
}