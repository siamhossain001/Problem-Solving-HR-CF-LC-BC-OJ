#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

bool isCheat(vector<int>&vots,int cheat){
  int condition;
  int players = vots.size();
  
  if(players%3==0){
       condition = (2.0/3)*players;
  }
  else {
    condition = ((2.0/3)*players)+1;
  }
  
  if(cheat>=condition){
    return true;
  }
  else {
    return false;

  }

}
int main(){
   
  int players,cheat;
  while(cin>>players){
    vector<int> vots(players);
     
    cheat = 0;
    for(int i=0;i<players;i++){
         cin>>vots[i];
         if(vots[i]==1)cheat++;
    }

    if(isCheat(vots,cheat)){
        cout<<"impeachment"<<endl;
    }
    else {
      cout<<"acusacao arquivada"<<endl;
    } 

  }
   return 0;
}