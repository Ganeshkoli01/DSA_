#include<iostream>
using namespace std;

char alph(char c){
          if(c=='z'){
                    return 'a';
          }
          else{
                    return c+1;
          }
          
}


int main(){
          char c;
          cout<<"Enter the alphabet:";
          cin>>c;
          cout<<"The next alphabet is:";
          char next=alph(c);
          cout<<next;
          return 0;
}