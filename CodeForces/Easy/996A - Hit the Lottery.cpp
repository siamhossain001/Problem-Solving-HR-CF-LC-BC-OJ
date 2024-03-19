#include<iostream>
#include<vector>

using namespace std;


int main(){
   
   int arr[] = {1,5,10,20,100};
   long long int money;
   
   long long int counter = 0;
   cin>>money;
   for(int i=4;i>=1;i--){
      if(money>=arr[i]){
         counter+= money/arr[i];
         money = money%arr[i];
      }
   }
   counter+=money;
   cout<<counter<<endl;

   return 0;
}