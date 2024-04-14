#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

#define loop(i,n) for(int i=0;i<int(n);i++)

using namespace std;

int main() {
    int N,i;
    int test;

    cin>>test;
    while(test--){
        cin>>N;
        vector<int> arr(N);
        vector<int> copy(N);

        loop(i,N){
            cin>>arr[i];
            copy[i] = arr[i];
        }

        sort(copy.begin(),copy.end());

        loop(i,N){
            if(arr[i]==copy[N-1]){
                cout<<arr[i]-copy[N-2]<<" ";
            }
            else {
                cout<<arr[i]-copy[N-1]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}