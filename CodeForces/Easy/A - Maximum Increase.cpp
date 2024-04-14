# include <cstdio>
# include <cstring>
# include <cmath>
# include <vector>
# include <stack>
# include <iostream>
# include <list>
#include<algorithm>

using namespace std;

#define loop(i,n) for(int i=0;i<int(n);i++)
int main(){
  int n;
  cin>>n;
  
  vector<int> arr(n);
  int i;
  
  loop(i,n){
      cin>>arr[i];
  }
  
  int max=0;
  
  int counter=1;
  loop(i,n){
     if(max<counter)max = counter;
     if((i+1)<n){
        if(arr[i]<arr[i+1]){
            counter++;
        }
        else{
            counter = 1;
        }
     }
 
  }

  cout<<max<<endl;

  return 0;
	
}
