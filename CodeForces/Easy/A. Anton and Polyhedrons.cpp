#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>
#include <map>

using namespace std;

int main() {
    
    map<string,int> values;
    values["Tetrahedron"]=4;
    values["Cube"]=6;
    values["Octahedron"]=8;
    values["Dodecahedron"]=12;
    values["Icosahedron"]=20;

    int n,total=0;
    cin>>n;

    string input;

    while(n--){
        cin>>input;
        total+=values[input];
    }
    
    cout<<total<<endl;
    return 0;
}
