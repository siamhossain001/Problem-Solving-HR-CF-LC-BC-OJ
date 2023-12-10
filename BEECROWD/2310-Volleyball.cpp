#include<iostream>
#include<iomanip>

using namespace std;

int main(){


   int test;
   cin>>test;
   
   float PEservice,PEblock,PEattack; // PE is percentage of service block and attack in a team
   
   int service,block,attack;
   int SUsevice,SUblock,SUattack;  //SU is successful service block and attack
    
   int playerService=0,playerBlock=0,playerAttack=0;
   int PSUservice=0,PSUblock=0,PSUattack=0;

   string playerName;

   while(test--){
     cin>>playerName;
     cin>>service>>block>>attack;
     cin>>SUsevice>>SUblock>>SUattack;

     playerService+=service;
     playerBlock+=block;
     playerAttack+=attack;  
     
     PSUservice+=SUsevice;
     PSUblock+=SUblock;
     PSUattack+=SUattack;
   } 
  PEservice = (static_cast<float>(PSUservice) / playerService) * 100.00; 
  PEblock = (static_cast<float>(PSUblock) / playerBlock) * 100.00;
  PEattack = (static_cast<float>(PSUattack) / playerAttack) * 100.00;


   cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<PEservice<<" %."<<endl;
   cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<PEblock<<" %."<<endl;
   cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<PEattack<<" %."<<endl;
   return 0;
}