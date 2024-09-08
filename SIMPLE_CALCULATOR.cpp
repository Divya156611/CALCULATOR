#include<iostream>
using namespace std;
int main(){
 float a, b;
 int choice;
 cout<<"1.Addition\n2.substraction\n3.multiplication\n4.Division \n";
    cout<<"Enter your choice ::\n";
    cin>>choice;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    if(choice==1){
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<(a+b);
    }
     else if(choice==2){
        cout<<"Substraction of "<<a<<" and "<<b<<" is "<<(a-b);
    }
     else if(choice==3){
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<(a*b);
    }
    else if(choice==4){
       if(b!=0)
        cout<<"division of "<<a<<" and "<<b<<" is "<<(a/b);
        else
        cout<<"Number can not be divided by 0.";
        
    }
    else
    {
      cout<<"You've entered wrong choice !\n";
    }
    return 0;
}