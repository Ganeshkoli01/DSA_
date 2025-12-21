#include<iostream>
using namespace std;

int main(){
          int n;
          cout<<"Enter the the size of arrary:";
          cin>>n;

          int arr[n];


          cout<<"Put the element of arrary:";
          for(int i=0; i<n; i++){
                    cin>>arr[i];
          }

          cout<<"All element:";
          for(int i=0; i<n; i++){
                    cout<<arr[i]<<" ";
          }

          return 0;
}