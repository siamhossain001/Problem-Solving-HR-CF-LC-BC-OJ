#include <iostream>
 
using namespace std;
 
int main() {
    
    
    
    int a,b,count;
    float ga,gb;
    
    int t;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        cin>>ga>>gb;
        
        count = 0;
        while(a<=b){
             a = a + ((a*ga)/100);
             b = b + ((b*gb)/100);
             count++;
        if(count>100){
            cout<<"Mais de 1 seculo."<<endl;
            break;
         }
        }
        if(count<=100){
            cout<<count<<" anos."<<endl;
        }
    }
    return 0;
}