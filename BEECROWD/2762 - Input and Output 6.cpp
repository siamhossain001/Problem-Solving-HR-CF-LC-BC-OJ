#include <iostream>
#include<iomanip>

using namespace std;
//i think it would be better

int count;
double divider(int a){
     double div=1.00;
     while(a){
        a /= 10;
        div *=10;
        count++;
     }
     return div;
}
double correct(double c ){
    int a;
    c = c*10000.0;
    a = c;
    if(a%10>8){
      a = a/10;
      a++;
    }
    else {
      a = a/10;
      if(a%10==0)a/=10;
    }
    return a;
}
int main() {

    double a,c,m,sum;
    int b,d;  
    
    cin>>a;
    //interger value
    b = a;
    //how many need like 100 or 1000
    m = divider(b);
    //float pind convert into integer
    c = (a-b);
    c = correct(c);
    b = c;
    
    //interger convrt into float
    d = a;
    c = d/m;

    //print total sum
    sum = b+c;
    cout<<fixed<<setprecision(count)<<sum<<endl;


    return 0;
}