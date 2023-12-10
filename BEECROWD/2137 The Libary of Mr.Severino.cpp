#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
int main() {

    int test;
    while(cin>>test){
         vector<int> book(test);
         
         for(int i=0;i<test;i++){
             cin>>book[i];
         }

         sort(book.begin(),book.end());

         for(int i=0;i<test;i++){
            if(book[i]>=0 && book[i]<=9){
                cout<<"000"<<book[i]<<endl;
            }
            else if(book[i]>=10 && book[i]<=99){
                cout<<"00"<<book[i]<<endl;
            }
            else if(book[i]>=100 && book[i]<=999){
                cout<<"0"<<book[i]<<endl;
            }
            else{
                 cout<<book[i]<<endl;
            }
         }
    }
    return 0;
}