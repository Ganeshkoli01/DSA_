#include<iostream>
using namespace std;
int dectobin(int decnum){
          int n = decnum;
          int binnum =0;
          int pow =1;

          while(n >0){
                    int rem = n % 2;
                    binnum = binnum + rem * pow;
                    n =  n/2;
                    pow = pow * 10;
          }
          cout<<binnum<<endl;
}
int main(){
          dectobin(123);
          return 0;

}