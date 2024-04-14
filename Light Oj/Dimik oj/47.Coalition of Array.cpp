#include <iostream>
#include<vector>
using namespace std;

int main() {
    int N1,N2,test;
    cin>>test;
    while(test--){

    cin>>N1;
    int array1[N1];
    for(int i=0;i<N1;i++)
    {
        cin>>array1[i];
    }

    cin>>N2;
    int array2[N2];
    for(int i=0;i<N2;i++)
    {
        cin>>array2[i];
    }
    
    vector<int> array3;
    int i=0,j=0,k=0;
    while(i<N1 && j<N2)
    {
        if(array1[i]<array2[j])
        {
            array3.push_back(array1[i]);
            i++;
        }
        else
        {
            array3.push_back(array2[j]);
            j++;
        }
    }
    while(i<N1)
    {
        array3.push_back(array1[i]);
        i++;
    }
    while(j<N2)
    {
        array3.push_back(array2[j]);
        j++;
    }

    for(int i=0;i<array3.size();i++)
    {
        if(i==array3.size()-1)
        {
            cout<<array3[i]<<endl;
        }
        else {
        cout<<array3[i]<<" ";
        }
    }
   }
    return 0;
}