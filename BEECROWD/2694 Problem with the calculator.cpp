#include <iostream>
 
using namespace std;
 
int main() {
 
    int sum,carry,number,test;
    string input;

    cin>>test;
    while(test--){
    cin>>input;

    sum = 0;
    number = 0;
   
    for(int i=0;i<input.size();i++){
        if(input[i]>='0' && input[i]<='9'){
            carry = input[i]-48;
            if(number==0){
                number+=carry;
            }
            else {
                number = number*10 + carry;
            }
            
        }
        else{
            sum+=number;
            number = 0;
        }
    }
   
    cout<<int(sum+number)<<endl;
    
    }
    return 0;
}