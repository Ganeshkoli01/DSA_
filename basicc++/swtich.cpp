#include<iostream>
using namespace std;

int main(){

          int a;
          cout<<"Enter the a:";
          cin>>a;

          int b;
          cout<<"Enter the b:";
          cin>>b;

          char op;
          cout<<"Enter the op:";
          cin>>op;



          switch(op){
                    case '+': cout<<"a+b:"<<(a+b)<<endl;
                    break;

                    case '-': cout<<"a-b:"<<(a-b)<<endl;
                    break;

                    case '*': cout<<"a*b:"<<(a*b)<<endl;
                    break;

                    case '/': cout<<"a/b:"<<(a/b)<<endl;
                    break;

                    default:cout<<"invalide op";
          }
          return 0;

}