#include<iostream>
using namespace std;

int binarySerch(int *arr, int n,int key){

          int st = 0 , end = n-1;
          
          while(st <=end){

          int mid = (st + end)/2;

          if(arr[mid] == key){
                    return mid;
          }

          else if(arr[mid]  < key){
                    st = mid + 1;
          }

          else{
                    end = mid - 1;
          }

          }
          return -1;
}



int main(){
          int arr[]={2,3,4,5,6,7,8,9};
          int n=sizeof(arr)/sizeof(int);
          int key = 99;

          int index=binarySerch(arr,n,key);
          cout<<index;
          return 0;
}