#include<iostream>
using namespace std;


int sum(int n){
          int sum =0;
          int digit;
          while(n!=0){
          digit = n%10;
          sum =sum + digit;
          n =n/10;
          }
          return sum;
};


int main(){
          int n;
          cout<<"Enter the number:";
          cin>>n;

          int s=sum(n);
          cout<<s;

}