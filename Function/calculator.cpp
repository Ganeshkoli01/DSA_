#include<iostream>
using namespace std;


          float sum(float a,float b){
          float resulte =a+b;
          cout<<"The sum of a ans b is :"<<resulte<<endl;
          return resulte;
          }



          float sub(float a,float b){
          float resulte =a-b;
          cout<<"The sub of a ans b is :"<<resulte<<endl;
          return resulte;
          }



          float mul(float a,float b){
          float resulte =a*b;
          cout<<"The mul of a ans b is :"<<resulte<<endl;
          return resulte;
          }



int main(){
          float a;
          float b;
          cout<<"Enter the value of a:";
          cin>>a;
          cout<<"Enter the value of b:";
          cin>>b;


          sum(a,b);
          sub(a,b);
          mul(a,b);



          return 0;
}