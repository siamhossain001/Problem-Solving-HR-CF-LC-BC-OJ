#include <iostream>
#include<cmath>
#include<stdio.h>

using namespace std;
int main() {
    string s;
    char t;
    
    int h1,h2,m1,m2,s1,s2,Du1,Du2,carry;
    int d1,d2;
    
    int cal[4];
    
    scanf("%*s");
    cin>>d1>>h1;
    scanf("%*s");
    cin>>m1;
    scanf("%*s");
    cin>>s1;
    
    scanf("%*s");
    cin>>d2>>h2;
    scanf("%*s");
    cin>>m2;
    scanf("%*s");
    cin>>s2;
    
    Du1 = (d1*(24*60*60)) + (h1*(60*60)) + (m1*60) + s1;
    Du2 = (d2*(24*60*60)) + (h2*(60*60)) + (m2*60) + s2;
    
    carry = Du2-Du1;
    cal[0] = carry/86400;

    carry = carry%86400;
    cal[1] = carry/3600;
    
    carry = carry%3600;
    cal[2] = carry/60;
    
    carry = carry%60;
    cal[3] = carry;
    
    cout<<cal[0]<<" dia(s)"<<endl;
    cout<<cal[1]<<" hora(s)"<<endl;
    cout<<cal[2]<<" minuto(s)"<<endl;
    cout<<cal[3]<<" segundo(s)"<<endl;
    
    return 0;
}