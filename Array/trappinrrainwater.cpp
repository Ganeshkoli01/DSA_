#include<iostream>
using namespace std;

trapwater(int *hights,int n){
          int leftMax[20000],rightMax[20000];
          leftMax[0]=hights[0];
          rightMax[0]=hights[n-1];

          for(int i=1; i<n; i++){
                    leftMax[i]=max(leftMax[i-1],hights[i-1]);
          }

          for(int i=n-2; i>=0; i--){
                    rightMax[i]=max(rightMax[i+1],hights[i+1]);
          }

          int watertrapped = 0;
          for(int i=0; i<n; i++){
                    int currwater = min(leftMax[i],rightMax[i])-hights[i];
                    if(currwater>0){
                              watertrapped += currwater;
                    }
          }
          cout<<"The water trapped:"<<watertrapped<<endl;
}

int main(){
          int hights[]={4,2,0,6,3,2,5};
          int n = sizeof(hights)/sizeof(int);

          trapwater(hights,n);
          return 0;
}