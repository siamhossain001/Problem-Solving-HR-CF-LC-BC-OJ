#include <iostream>
 
using namespace std;
 
void happy(){
    cout<<":)"<<endl;
}
void sad(){
    cout<<":("<<endl;
}
int main() {
    
    int day1,day2,day3,carry1,carry2;
    while(1){
        cin>>day1>>day2>>day3;
    if(day1>day2 && day2<=day3){
        happy();
    }    
    else if(day1<day2 && day2>=day3){
        sad();
    }
    else if(day1<day2 && day2<day3){
        carry1 = abs(day1-day2);
        carry2 = abs(day2-day3);
        if(carry1>carry2){
            sad();
        }
        else{
            happy();
        }
    }
    else if(day1>day2 && day2>day3){
          carry1 = abs(day1-day2);
          carry2 = abs(day2-day3);
          if(carry1>carry2){
            happy();
          }
          else {
            sad();
          }
    }
      else if(day1==day2){
             if(day2<day3){
                 happy();
            }
            else {
                sad();
            }
      }
    }
    return 0;
}