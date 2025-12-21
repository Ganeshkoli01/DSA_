#include<iostream>
using namespace std;

int large(int a , int b , int c){
          if(a>b && a>c){
                    return a;
          }
          else if(b>a && b>c){
                    return b;
          }
          else{
                    return c;
          }
};

int main(){
          int a,b,c;
          cout<<"Enter thr number a:";
          cin>>a;
          cout<<"Enter thr number b:";
          cin>>b;
          cout<<"Enter thr number c:";
          cin>>c;
          
          
          cout<<"The largest number is:"<<large(a,b,c)<<endl;
          return 0;
}