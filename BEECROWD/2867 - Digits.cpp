#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double base,power ;
  int test;
  cin>>test;
  while(test--){
        cin>>base>>power;
        double result = ( power * log10(base));
        int digit  = result + 1;
        cout<<digit<<endl;
  }
  return 0;
}