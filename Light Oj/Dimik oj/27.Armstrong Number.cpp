#include<iostream>
using namespace std;
bool isArmstrong(int number){
    int carry = number;
    int total=0;
    while(number){
        int digit = number%10;
        total += digit*digit*digit;
        number /= 10;
    }
    if(total == carry){
        return true;
    }
    return false;
}
int main(){
    int N,test;
    cin>>test;
    
    while(test--){
        int number,carry;
        cin>>number;
        if(isArmstrong(number)){
            cout<<number<<" is an armstrong number!"<<endl;
        }
        else{
            cout<<number<<" is not an armstrong number!"<<endl;
        }
     
    }
    return 0;
}