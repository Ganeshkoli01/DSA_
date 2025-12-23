#include<iostream>
#include<climits>
using namespace std;

void optimizedsum(int *arr,int n){
          int maxi = INT_MIN;
          int mini = INT_MAX;

          for(int start=0; start<n; start++){
                    int currsum = 0;
                    for(int end=start; end<n; end++){
                              currsum += arr[end];

                    cout<<currsum<<" ";

                    maxi = max(maxi,currsum);
                    mini = min(mini,currsum);
                    }
                    cout<<endl;
                    
          }
          cout<<"The maximam sum is:"<<maxi<<endl;
          cout<<"The minimam sum is:"<<mini;
}


int main(){
          int arr[]={2,-3,4,-5,1,7};
          int n = sizeof(arr) / sizeof(int);

          optimizedsum(arr,n);
          return 0;
}