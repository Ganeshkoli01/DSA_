#include<iostream>
#include <vector>
using namespace std;

int main(){
          vector<int> vec1;
          vector<int> vec2 = {1,2,3,4,5};

          cout<<vec2.size();
          cout<<endl;
          cout<<vec1.size();cout<<endl;

          vec2.push_back(6);

          for(int i=0; i<vec2.size();i++){
                    cout<<vec2[i]<<" ";
          }cout<<endl;

          vec2.pop_back();
          for(int i=0; i<vec2.size();i++){
                    cout<<vec2[i]<<" ";
          }

          return 0;
}