/*1.Write a cpp program to calculate vote percentage if there are 3 nominess and 10 voters*/

 #include<iostream>
 using namespace std;
 int main(){

    cout<<"To enter your vote select one of the candidate"<<endl;
    cout<<"1.Utkarsh (BJP)"<<endl;
    cout<<"2.Viraj   (UPA)"<<endl;
    cout<<"3.Sarthak (NCP)"<<endl;
    int vote[10];
    float vote_utk=0;
    float vote_vir=0;
    float vote_sar=0;
    for(int i=0;i<10;i++)
    {
      cout<<"Enter Your vote"<<endl;   
      cin>>vote[i];
      if(vote[i]==1) {
        vote_utk++;
      }
      else if(vote[i]==2)
       {
        vote_vir++;
       }
       else if(vote[i]==3)
       {
        vote_sar++;
       }  
    }
    
     float vote_per_utk=(vote_utk/10)*100;
     float vote_per_vir=(vote_vir/10)*100;
     float vote_per_sar=(vote_sar/10)*100; 
     cout<<"Vote Percentage of Utkarsh is"<<" "<<vote_per_utk<<endl;
     cout<<"Vote Percentage of Viraj is"<<" "<<vote_per_vir<<endl;
     cout<<"Vote Percentage of Sarthak is"<<" "<<vote_per_sar<<endl;



 }
  
