#include<iostream>
#include<cmath>
using namespace std;
void menu(){
    cout<<"Menu"<<endl;
    cout<<"1. ADD"<<endl;
    cout<<"2. SUBRACT"<<endl;
    cout<<"3. MUTILPLY"<<endl;
    cout<<"4. DIVIDE"<<endl;
    cout<<"5. LOG"<<endl;
    cout<<"6. POWER"<<endl;
    cout<<"7. SINE"<<endl;
    cout<<"8. COSINE"<<endl;
    cout<<"9. TANGENT"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"Select an option : ";
}
int main()
{
    int choice;
    float a,b;
    while (true)
    {
        menu();
        cin>>choice;
    
    if(choice==0) break;
    switch (choice)
    {
    case 1:
        cout<<"Enter two numbers:";
        cin>>a>>b;
        cout<<"Addition of a and b : "<<a+b<<endl;
        break;
    case 2:
        cout<<"Enter two numbers:";
        cin>>a>>b;
        cout<<"Subtract of a and b : "<<a-b<<endl;
        break;
    case 3:
        cout<<"Enter two numbers:";
        cin>>a>>b;
        cout<<"Multiply of a and b : "<<a*b<<endl;
        break;
    case 4:
        cout<<"Enter two numbers:";
        cin>>a>>b;
        cout<<"Divide of a and b : "<<a/b<<endl;
        break;
    case 5:
        cout<<"Enter number:";
        cin>>a;
        cout<<"log of a : "<<log(a)<<endl;
        break;
    case 6:
        cout<<"Enter two number:";
        cin>>a>>b;
        cout<<"Power of a raise to b: "<<pow(a,b)<<endl;
        break;
    case 7:
        cout<<"Enter number:";
        cin>>a;
        cout<<"Sine of a : "<<sin(a)<<endl;
        break;
    case 8:
        cout<<"Enter number:";
        cin>>a;
        cout<<"Cosine of a : "<<cos(a)<<endl;
        break;
    case 9:
        cout<<"Enter number:";
        cin>>a;
        cout<<"Tangent of a : "<<tan(a)<<endl;
        break;
    
    default:
    cout<<"Invalid option"<<endl";
        break;
    }
    }
    return 1;
}   
