#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

void Test1(){
    cout<<"I hate ";
}
void Test2(){
    cout<<"I love ";
}
void Test3(){
    cout<<"it"<<endl;
}
void Test4(){
    cout<<"that ";
}
int main() {
    
    int number;
    cin>>number;
    
    for(int i=1;i<=number;i++){
       if(i%2!=0){
          Test1();
          if(i<number)Test4();
       }
       else {
           Test2();
           if(i<number)Test4();
       }
    }
    Test3();
    return 0;
}
