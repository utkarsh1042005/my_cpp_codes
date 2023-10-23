/*3. Accept three sides of a triangle and check whether it is an equilateral, isosceles or scalene triangle.

Note :

An equilateral triangle is a triangle in which all three sides are equal.

A scalene triangle is a triangle that has three unequal sides.
 
An isosceles triangle is a triangle with (at least) two equal sides.*/

#include<iostream>
using namespace std;

void check(int s1,int s2,int s3){
    if(s1==s2 && s2==s3 && s1==s3){
        cout<<"Triangle is equilateral triangle"<<endl;
}
    else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"Triangle is isosceles triangle"<<endl;
}
    else if(s1!=s2 && s2!=s3 && s1!=s3){
        cout<<"Triangle is scalene triangle"<<endl; 
    }
}

int main(){
    cout<<"Enter 3 sides of triangle to check it's type"<<endl;
    int side1,side2,side3;
    cin>>side1>>side2>>side3;
    check(side1,side2,side3);
}
