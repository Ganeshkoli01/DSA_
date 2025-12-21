#include<iostream>
using namespace std;


int palindrome(int n){


          int temp = n;
          int rev =0;
          while(n>0){
          int digit = n%10;
          rev = rev*10+digit;
          n =n/10;
          }

          if(temp == rev){
                    cout<<temp<<" is the palindrome";
          }
          else{
                    cout<<temp<<" is not the palindrome";
          }
          



};


int main(){
          int n;
          cout<<"Enter the number:";
          cin>>n;

          palindrome(n);
          

}