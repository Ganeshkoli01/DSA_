#include<iostream>
#include<climits>
using namespace std;

void kadanes(int *arr , int n){
          int maxi = INT_MIN;
          int mini = INT_MAX;

          int currsum = 0;

          for(int i=0; i<n; i++){
                    currsum += arr[i];
                    maxi =max(maxi,currsum);
                    if(currsum <0){
                              currsum =0;
                    }
                    

          }
          cout<<"The maximam sum is:"<<maxi<<endl;
}

int main(){
          int arr[]={1,2,-3,4,-5};
          int n = sizeof(arr) / sizeof(int);

          kadanes(arr,n);
          return 0;
}