// Calculator

#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float division(float a,float b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}
int main()
{
    int choice;
    float a,b;
    do
    {
       cout<<endl;
       cout<<"Press 1 for +"<<endl;
       cout<<"Press 2 for -"<<endl;
       cout<<"Press 3 for *"<<endl;
       cout<<"Press 4 for /"<<endl;
       cout<<"Press 5 for %"<<endl;
       cout<<"Press 0 for the exit"<<endl;
       cout<<endl;
       cout<<"Enter your choice: ";
       cin>>choice;

       switch(choice)
       {
            case 1:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the Second number: ";
                cin>>b;

                cout<<"Addition of "<<a<<" and "<<b<<" is "<<add(a,b)<<endl;
                break;
            case 2:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the Second number: ";
                cin>>b;

                cout<<"Substraction of "<<a<<" and "<<b<<" is "<<sub(a,b)<<endl;
                break;
            case 3:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the Second number: ";
                cin>>b;

                a>0 && b>0
                        ?cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<mul(a,b)<<endl
                        :cout<<"Multiplication is not done with 0 Please enter above 0"<<endl;
                break;
            case 4:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the Second number: ";
                cin>>b;

                a>0 && b>0
                        ?cout<<"Division of "<<a<<" and "<<b<<" is "<<division(a,b)<<endl
                        :cout<<"Division is not done with 0 Please enter above 0"<<endl;
                break;
            case 5:
                cout<<"Enter the first number: ";
                cin>>a;
                cout<<"Enter the Second number: ";
                cin>>b;

                a>0 && b>0
                        ?cout<<"Module of "<<a<<" and "<<b<<" is "<<mod(a,b)<<endl
                        :cout<<"Moduler is not done with 0 Please enter above 0"<<endl;
                break;
            case 0:
                cout<<"Exit Calculator";
                break;
            default:
                cout<<"Wrong Choice!";
                break;
       }
    } while (choice!=0);
    
    return 0;
}