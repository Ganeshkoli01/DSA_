#include<iostream>
using namespace std;

int main(){
          float marathi;
          float ganit;
          float english;

          cout<<"Enter the marathi subject mark: ";
          cin>>marathi;

          cout<<"Enter the ganit subject mark: ";
          cin>>ganit;


          cout<<"Enter the english subject mark: ";
          cin>>english;


          float avg=(marathi+ganit+english)/3;


          cout<<"The arage of all subjet is :"<<avg;

          return 0;

}