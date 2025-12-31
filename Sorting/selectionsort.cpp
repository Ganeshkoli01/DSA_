#include<iostream>
using namespace std;
printarr(int *arr,int n){
          for(int i = 0; i<n; i++){
                    cout<<arr[i]<<" ";
          }
}

selectionSort(int *arr , int n){
          for(int i=0; i<n-1; i++){
                    int minIDX = i ;
                    for(int j=i+1; j<n; j++){
                              if(arr[j]<arr[minIDX]){
                                        minIDX = j;
                              }
                    }
                    swap(arr[i],arr[minIDX]);
          }
          printarr(arr,n);
}

int main(){
          int arr[]={5,4,2,1,3};
          int n = sizeof(arr)/sizeof(int);

          selectionSort(arr,n);
          return 0;
}