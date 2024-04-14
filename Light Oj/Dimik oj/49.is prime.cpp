#include <iostream>
#include<cmath>
using namespace std;
bool isprime(long long int number){
      int need = sqrt(number);
      for(int i=2;i<=need;i++){
           if(number%i==0){
                return false;
           }
      }
      return true;
}
int main() {
    int test;
    cin>>test;
    
    char carry;
    while(test--){
       long long int number;
       cin>>number;
       if(isprime(number)){
           cout<<number<<" is a prime"<<endl;
       }
       else{
           cout<<number<<" is not a prime"<<endl;
       }
    }
    return 0;
}