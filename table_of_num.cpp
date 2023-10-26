#include<iostream>
using namespace std;
int main(){
    cout<<"Program to calculate table of any number upto to any number"<<endl;
     int num,val;
    cout<<"Enter number to find table"<<endl;
    cin>>num;
    cout<<"Enter value upto to which you want to find table"<<endl;
    cin>>val;
    for(int i=1;i<=val;i++){
        cout<<num<<"x"<<i<<"="<<num*1<<endl;
    }

}
