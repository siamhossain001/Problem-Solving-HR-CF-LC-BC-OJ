#include <iostream>
#include<cmath>
 
using namespace std;
 
int main() {
 
    int width,hight,x=1,housenumbers=0,Alowarea;
    double percentage;
    while(1){
           cin>>hight;
               if(hight==0)break;
               else{
               cin>>width>>percentage;
               Alowarea = (hight*width)/(percentage/100.00);
                    while(x*x<=Alowarea){
                           housenumbers++;
                           x++;
                    }
                cout<<housenumbers<<endl;
                x = 1;
                housenumbers = 0;
               }
    }
    return 0;
}