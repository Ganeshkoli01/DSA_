#include<iostream>
using namespace std;

int main(){

          int a =34;
          int *ptr = &a;
          int **pptr = &ptr;

          cout<< &a<<"  =   "<<ptr<<"   =          "<<pptr ;
          cout<<"dereferncing oprator "<<*ptr;

          return 0;
}