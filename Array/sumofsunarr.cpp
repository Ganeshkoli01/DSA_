#include<iostream>
#include <climits>
using namespace std;


void MaxSumofSubArr(int *arr,int n){
          int maxi = INT_MIN ;
          int mini = INT_MAX ;
          for(int start=0; start<n; start++){
                    for(int end=start; end<n; end++){
                              int currsum = 0;
                              for(int i=start; i<=end; i++){
                                        currsum = currsum + arr[i];
                              }
                              cout<<currsum<<", ";
                              maxi = max(maxi,currsum);
                              mini = min(mini,currsum);
                    }
                    cout<<endl;
          }
          cout<<"The maximam sum is:"<<maxi<<endl;
          cout<<"The minimam sum is:"<<mini;
}

int main(){
          int arr[]={2,4,1,-4,3,-7};
          int n = sizeof(arr) / sizeof(int);


          MaxSumofSubArr(arr,n);

          return 0;
}