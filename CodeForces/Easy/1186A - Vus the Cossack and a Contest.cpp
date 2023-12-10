#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>
using namespace std;

bool ispossible(int a,int b,int c){
       if(a<=b && a<=c){
         return true;
       }
       else {
         return false;
       }
}
int main() {
    int members,pen,notebook;

    cin>>members>>pen>>notebook;

    if(ispossible(members,pen,notebook)){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }

    return 0;
}
