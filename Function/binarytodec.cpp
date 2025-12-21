#include<iostream>
using namespace std;

int bitodec(int binum){
          int n = binum;
          int decnum = 0;
          int pow = 1;

          while(n > 0){
                    int digit =n%10;
                    decnum = decnum + digit * pow;
                    pow =pow * 2;
                    n =n/10;
          }

          cout<<decnum<<endl;

}

int main(){
          bitodec(101);
          return 0;
}