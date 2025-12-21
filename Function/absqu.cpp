#include<iostream>
using namespace std;

int absqu(int a , int b){
          return a*a + b*b + 2*a*b;
};

int main(){
          int result=absqu(2,3);
          cout<<result;
          return 0;

}