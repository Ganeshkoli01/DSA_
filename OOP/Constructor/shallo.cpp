#include<iostream>
#include<string>
using namespace std;
class Car{
          public:
          string name;
          string color;
          int *mileage;
          Car(string name, string color){
                    this->name = name;
                    this->color=color;

                    mileage = new int ;
                    *mileage = 12;
          }

          Car(Car &original){
                    cout<<"copying original to new..\n";
                    name = original.name;
                    color = original.color;
                    // mileage = original.mileage;         shallo copy
                    mileage = new int ;                     //deep cpoy
                    *mileage = *original.mileage;            //deep cpoy
          }
};

int main(){
          Car C1("BMW", "Black");
          cout<<"C2 object"<<endl;
          Car C2(C1);
          cout<<C2.name<<endl;
          cout<<C2.color<<endl;
          cout<<*C2.mileage<<endl;
          cout<<"C1 object"<<endl;
          cout<<C1.name<<endl;
          cout<<C1.color<<endl;
          return 0;
}