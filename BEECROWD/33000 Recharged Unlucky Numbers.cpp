#include <iostream>
 
using namespace std;
 
bool islucky(string number){
    string unluckyNumber = "13";
    int j=0;
    for(int i=0;i<number.size();i++){
        if(number[i]==unluckyNumber[j]){
            j++;
            if(j>1)return true;
        }
        else {
            j=0;
        }
    }
    return false;

}
int main() {
 
    string number;
    cin>>number;
    
    if(islucky(number)){
        cout<<number<<" es de Mala Suerte"<<endl;
    }
    else {
        cout<<number<<" NO es de Mala Suerte"<<endl;
    }   
     
    return 0;
}