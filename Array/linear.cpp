#include<iostream>
using namespace std;
int linearSearch(int *arr,int n,int key){
          for(int i=0; i<n; i++){
                    if(arr[i]==key){
                              return i;
                    }
          }
          return -1;

}
int main(){
          int arr[]={1,2,3,4,5,6,99,234};
          int n = sizeof(arr)/sizeof(int);
          int key =99;

          int index=linearSearch(arr,n,key);
          cout<<"The index of key is:"<<index;
          return 0;
}


//Time complexity :

// Best Case: O(1)
// Average Case: O(n)
// Worst Case: O(n)
// Space Complexity: O(1)