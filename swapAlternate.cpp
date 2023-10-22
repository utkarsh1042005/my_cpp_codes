#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for ( int i=0 ; i< size ;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
     if (i+1<size){
        swap(arr[i],arr[i+1]);
     }
    }
  
}

int main(){
 int even[8]={1,8,6,5,3,7,0,4};
 int odd[7]={7,11,8,66,5,10,3};

swapAlternate(even,8);
printArray(even,8);

cout<<endl;

swapAlternate(odd,7);
printArray(odd,7);

}
