#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int R,G,B,P,t=1;
    string saw;
    int test;
    
    cin>>test;
    while(test--){
        cin>>saw;
        cin>>R>>G>>B;
        
        if(saw=="eye"){
            P = (double(0.30*R) + double(0.59*G) + double(0.11*B));
        }
        else if(saw=="mean"){
             P = (R+G+B)/3;
        }
        else if(saw=="max"){
            P = max({R,G,B});
        }
        else {
            P = min({R,G,B});
        }
        
        cout<<"Caso #"<<t<<": "<<P<<endl;
        t++;
    }
 
    return 0;
}