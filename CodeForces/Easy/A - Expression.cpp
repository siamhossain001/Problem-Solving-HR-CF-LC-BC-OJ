#include <iostream>
#include <vector>
#include <cmath>
#include<set>
#include<map>
#include<algorithm>
 
using namespace std;
 

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    int answer = a+b+c;

    answer =  max(answer,(a*b*c));
    answer = max(answer,((a+b)*c));
    answer = max(answer,(a*(b+c)));

    cout<<answer<<endl;
    return 0;
}