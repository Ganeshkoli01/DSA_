#include<iostream>
using namespace std;

void printarr(int *arr,int n){
          for(int i=0; i<n; i++){
                    cout<<arr[i]<<",";
          }
          cout<<endl;
}
int main(){
          int arr[]={2,4,6,4,1};
          int n = sizeof(arr)/sizeof(int);


          //with space

          // int copyarr[n];
          // for(int i=0; i<n; i++){
          //           int j = n-i-1;
          //           copyarr[i]=arr[j];
          // }

          // for(int i=0; i<n; i++){
          //           arr[i] = copyarr[i];
          // }




          //without space


          int start = 0 , end = n-1;

          while(start<end){
                    int tem = arr[start];
                    arr[start] =arr[end];
                    arr[end]= tem;
                    start++;
                    end--;
          }

          printarr(arr,n);
}

// swap(a,b)