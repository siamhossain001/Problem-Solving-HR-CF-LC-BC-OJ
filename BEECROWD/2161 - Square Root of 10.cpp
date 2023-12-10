#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main() {
   int a;
   double num=0.00;
   cin>>a;
   for(int i=0;i<a;i++){
    num+=6.00;
    num = 1.00/num;
   }
   num+=3.00;
   cout<<fixed<<setprecision(10)<<num<<endl;    
    
    return 0;
}