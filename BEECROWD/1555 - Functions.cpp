#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y;
    int rafael,beto,carlos;
    int test;
    cin>>test;
    
    while(test--){
        cin>>x>>y;
       
        rafael = ((3*x)*(3*x))+(y*y);
        beto = 2*(x*x)+ ((5*y)*(5*y));
        carlos = -100*x + (y*y*y);

       if(rafael>beto && rafael>carlos){
           cout<<"Rafael ganhou"<<endl;
       }
       else if(beto>rafael && beto>carlos){
           cout<<"Beto ganhou"<<endl;
       }
       else if(carlos>beto && carlos>rafael){
           cout<<"Carlos ganhou"<<endl;
       }
       

    }
    return 0;
}