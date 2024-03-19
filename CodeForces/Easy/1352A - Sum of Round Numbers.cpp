#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<vector>
#include<set>

using namespace std;

int main() {
    set<int,greater<int>> roundNumber;
    int test;
    int number,carry,i=0;
    cin>>test;

    while(test--){
       cin>>number;
       while(number){
            carry = (number%10)*pow(10,i);
            if(carry!=0){
               roundNumber.insert(carry);
            }
            number = number/10;
            i++;
       }
       cout<<roundNumber.size()<<endl;
       for(auto i=roundNumber.begin();i!=roundNumber.end();i++){
            cout<<*i<<" ";
       }
       cout<<endl;
       roundNumber.clear();
       i=0;
    }
    return 0;
}
