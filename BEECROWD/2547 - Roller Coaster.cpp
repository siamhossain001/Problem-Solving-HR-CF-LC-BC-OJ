#include <iostream>
 
using namespace std;
 
int main() {
    
    int N,min,max,guest,count=0;
    
    while(cin>>N>>min>>max){
        count=0;
         for(int i=0;i<N;i++){
              cin>>guest;
              if(guest>=min && guest<=max)count++;
         }
         cout<<count<<endl;
    }
    return 0;
}