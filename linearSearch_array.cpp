#include<iostream>
using namespace std;

bool search(int arr[],int size,int element){
    
    for(int i=0;i<size;i++){ 
        if(arr[i]==element){
            return true;
        }
        
    }
 return false;
}
int main(){
    int arr[10]={11,0,8,6,5,4,3,52,34,9};
    cout<<"Enter the elemnt to search in an array"<<endl;
    int element;
    cin>>element;
    bool result=search(arr,10,element);
    if(result){
        cout<<element<<" "<<"is present in array"<<endl;
     }
    else{
         cout<<element<<" "<<"is not present in array"<<endl;
    }
    }
