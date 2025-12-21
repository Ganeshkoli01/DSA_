#include<iostream>
using namespace std;

int main(){
          int num;
          int fact=1;

          cout<<"Enter the number:";
          cin>>num;

          for(int i=1; i<=num; i++ ){
                    fact *= i;
          }

          cout<<"The number is:"<<num<<"   and number of factorial is:"<<fact<<endl;

          return 0;
}