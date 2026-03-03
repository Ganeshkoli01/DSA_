#include<iostream>
using namespace std;
int tp(int n){
          if(n==1 || n==0){
                    return 1;
          }

          int ans1= tp(n-1);

          int ans2= tp(n-2);

          return ans1 + ans2;
}
int main(){
          int n=5;
          cout<<tp(n);
          return 0;
}