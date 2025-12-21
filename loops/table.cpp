#include<iostream>
using namespace std;

int main(){
          int n;
          int table;

          cout<<"Enter the number:";
          cin>>n;

          cout<<"The multiplication table of: "<<n<<endl;

          for(int i=1; i<=10; i++){
                    table=n*i;
                    cout<<n<<"X"<<i<<"="<<table<<endl;
          }
}