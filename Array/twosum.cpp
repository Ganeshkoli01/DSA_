#include<iostream>
#include <algorithm>
using namespace std;

int twoSum(int *nums,int n , int t){
                    int st=0, end=n-1;
                    sort(nums,nums+n);
                    for(int i=0; i<n; i++){
                              while(st < end){
                              int sum = nums[st]+nums[end];
                              if(sum == t){
                                        cout<<nums[st]<<" "<<nums[end];
                                        return 1;
                              }
                              else if(sum>t){
                                        end--;
                              }else{
                                        st++;
                              }
                              }
                    }
                    return 0;

          }

int main(){
          int nums[]={2,1,5,3};
          int n=sizeof(nums)/sizeof(int);
          int t = 4;

          twoSum(nums,n,t);
          return 0;
}