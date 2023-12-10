#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
     
    double Old,New,total;
    cin>>Old>>New;
    
    total = ((New-Old)/Old)*100;
    
    cout<<fixed<<setprecision(2)<<total<<"%"<<endl;
    return 0;
}