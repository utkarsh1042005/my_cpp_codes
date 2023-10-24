#include<iostream>
using namespace std;


float percentage(float s1,float s2,float s3,float s4,float s5){
    
    float total=s1+s2+s3+s4+s5;
    float per=(total/500)*100;
    return per;    
}

int main(){
    cout<<"Enter marks of 5 subjects"<<endl;
    float s1,s2,s3,s4,s5;
    cin>>s1>>s2>>s3>>s4>>s5;
   float per=percentage(s1,s2,s3,s4,s5);
   cout<<"Student has got "<<per<<" percentage and ";
   if(per>=85){
        cout<<"Student has got Distinction"<<endl;
    }
    else if(per>=75 && per<85){
        cout<<"Student has got A grade"<<endl;
    }
    else if(per>=65 && per<75){
        cout<<"Student has got B grade"<<endl;
    }
    else if(per>=35 && per<65){
        cout<<"Student has got C grade"<<endl;
    }
    else{

        cout<<"Student has Failed"<<endl;


}
}
