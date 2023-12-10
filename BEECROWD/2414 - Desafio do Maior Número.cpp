#include <iostream>
 
using namespace std;
 
int main() {
   
    int number,maxvalue=0;
    
    while(1){
        cin>>number;
        if(number==0){
            break;
        }
        else {
            if(maxvalue<number){
                maxvalue=number;
            }
        }
    }
    cout<<maxvalue<<endl;
    return 0;
}