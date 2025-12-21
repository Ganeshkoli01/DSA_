#include<iostream>
using namespace std;


void binToDec(int binNum){

          int n = binNum;
          int decNum =0;
          int pow =1;

          while(n>0){
                    int lastdig =n%10;
                    decNum +=lastdig *pow;
                    pow =pow*2;
                    n=n/10;
          }
          cout<<"The decimal number is:"<<decNum<<endl;
}


void decToBin(int decNum){
          int n = decNum;
          int pow =1;
          int binNum =0;

          while (n>0){
                    int rem =n%2;
                    binNum += rem * pow;
                    n = n/2;
                    pow = pow*10;
          }
          cout<<"The binary number is:"<<binNum<<endl;
}



int main(){
          binToDec(101);
          decToBin(10);
          return 0;

}
