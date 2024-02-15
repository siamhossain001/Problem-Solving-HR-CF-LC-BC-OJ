#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<string>

using namespace std;


int main() {
    int counter=0;
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;

    if(s1==s2 || s1==s3 || s1==s4){
        counter++;
    }
    if(s2==s3 || s2==s4){
       counter++;
    }
    if(s3==s4){
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}
