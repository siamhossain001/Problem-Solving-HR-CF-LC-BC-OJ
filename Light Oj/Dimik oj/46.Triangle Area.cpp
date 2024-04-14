#include <iostream>
#include <cstdio>
#include<vector>
#include<cmath>
#include <iomanip>

using namespace std;
int main() {

    int T;
    cin>>T;

    int a,b,c;
    double area=0;
    double s;
    while(T--){
        cin>>a>>b>>c;

        s = (a+b+c)/2.00;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<fixed<<setprecision(3)<<"Area = "<<area<<endl;
 
    }

    return 0;
}