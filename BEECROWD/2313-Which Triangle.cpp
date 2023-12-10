#include <iostream>
#include<cmath>

using namespace std;
bool rectangle(long long int a,long long int b,long  long int c){
      
      if( (a*a)+(b*b)==c*c || (a*a)+(c*c)==b*b || (c*c)+(b*b)==a*a ){
        return true; 
      }
      else {
        return false;
      }
}

void print(int a,int b,int c){  
    if(rectangle(a,b,c)){
        cout<<"Retangulo: S"<<endl;
    }
    else {
        cout<<"Retangulo: N"<<endl;
    }
    
}


int main() {
     
    int a,b,c;
    
    cin>>a>>b>>c;

    //yes triangle  
    if(a+b>c && b+c>a && c+a>b){
           //Equilateral
          if(a==b && b==c) {
             cout<<"Valido-Equilatero"<<endl;
             print(a,b,c);
          }
          //isoceles
          else if(a==b || b==c || c==a){
             cout<<"Valido-Isoceles"<<endl;
             print(a,b,c);
          }
          //scalene 
          else{
             cout<<"Valido-Escaleno"<<endl;
             print(a,b,c);
          }

    }
    //not triangle
    else {
        cout<<"Invalido"<<endl;
    }
    
    return 0;
}
