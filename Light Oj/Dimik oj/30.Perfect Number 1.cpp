#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
bool isperfect(int number){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    if(sum==number)
        return true;
    else
        return false;
}
int main(){
   int test;
   int number;
   cin>>test;
   while(test--){
      cin>>number;
      if(isperfect(number)){
        cout<<"YES, "<<number<<" is a perfect number!"<<endl;
      }
      else{
        cout<<"NO, "<<number<<" is not a perfect number!"<<endl;     
      }
   }
    
   return 0;
}