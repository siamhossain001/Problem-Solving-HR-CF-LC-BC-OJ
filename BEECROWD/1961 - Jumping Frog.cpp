#include <iostream>
#include<cmath>

using namespace std;

bool gameRules(int ar[],int pipe,int jump){
      int carry;
      for(int i=0;i<pipe;i++){
          carry = abs(ar[i]-ar[i+1]);
          if(carry>jump && (i+1)<pipe){
            return false;
          }
      }
      return true;
}

int main() {
 
    int highestJump,pipesSize;
    cin>>highestJump>>pipesSize;

    int ar[pipesSize];

    for(int i=0;i<pipesSize;i++){
        cin>>ar[i];
    }
    if(gameRules(ar,pipesSize,highestJump)){
        cout<<"YOU WIN"<<endl;
    }
    else {
        cout<<"GAME OVER"<<endl;
    }
    return 0;
}