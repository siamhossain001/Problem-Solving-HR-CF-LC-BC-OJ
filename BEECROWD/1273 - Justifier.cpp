#include <iostream>
#include <cmath>
#include<vector>

using namespace std;
int maxString(vector<string>&names ,int x){
     int max = names[0].size();
     for(int i=1;i<x;i++){
         if(names[i].size()>max){
            max = names[i].size();
         }
     }
     return max;
}
void spacePrinter(int space){
    for(int i=0;i<space;i++){
        cout<<" ";
    }
}
int main() {
    
    int x,highestValue,k=0;
    while(1){
     cin>>x;
    
        if(x==0)break;
        else{
            if(k!=0)cout<<endl;
            vector<string> names(x);
        
            for(int i=0;i<x;i++){
             cin>>names[i];
            }
            
            highestValue = maxString(names,x);

            for(int i=0;i<x;i++){
               spacePrinter(highestValue - names[i].size());
               cout<<names[i]<<endl;
            }
            k=1;
        }
    }
    return 0;
}
