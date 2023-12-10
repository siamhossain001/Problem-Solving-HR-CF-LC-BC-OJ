#include <iostream>
 
using namespace std;
 
int main() {
 
    string A;
    string B;
    string C;
    
    getline(cin,A);
    getline(cin,B);
    getline(cin,C);
    
    cout<<A<<B<<C<<endl;
    cout<<B<<C<<A<<endl;
    cout<<C<<A<<B<<endl;
    
    //most important part is print all charectar 10;
    cout << A.substr(0, 10) << B.substr(0, 10) << C.substr(0, 10) << endl;
    
    return 0;
}