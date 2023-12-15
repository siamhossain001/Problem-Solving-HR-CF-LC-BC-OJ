#include <iostream>
 
using namespace std;
 
bool isFit(string num1,string num2){
    int len1 = num1.length();
    int len2 = num2.length();
    int start = len1-len2;
    int j=0;

    for(int i=start;i<len1;i++){
        if(num1[i]==num2[j]){
            j++;
        }
    }
    if(j==len2){
        return true;
    }
    else {
        return false;
    }
}
int main() {
    
    int N;
    cin>>N;
    
    string number1;
    string number2;
    
    while(N--){
        cin>>number1>>number2;
        if(isFit(number1,number2)){
            cout<<"encaixa"<<endl;
        }else{
            cout<<"nao encaixa"<<endl;
        }
    }
    return 0;
}