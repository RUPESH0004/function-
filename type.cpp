#include<iostream>
using namespace std;
//without return type without parameter 
void addition()
{
    int n1,n2,sum;
    cout<<"Please Enter the two no "<<endl;
    cin>>n1;
    cin>>n2;
    sum=n1+n2;
    cout<<"The sum of two no is :-"<<sum<<endl;

}
//without return type with parameter 
void subtraction(int a , int b)
{
 int result=a-b;
 cout<<"the subraction of two no is :-"<<result<<endl;
}
//with return type without parameter 
int multiplication()
{
    int n1,n2,result;
    cout<<"Please Enter the two no "<<endl;
    cin>>n1;
    cin>>n2;
    result=n1+n2;
    return result;
}
//with return type with parameter
int divide(int n1,int n2)
{
    int result = n1/n2;
    return result;
}
int main()
{
    addition();
    subtraction(5,6);
    int multi=multiplication();
    cout<<"the multiplication of two no is :-"<<multi<<endl;
    int Div=divide(8,4);
    cout<<"the multiplication of two no is :-"<<Div<<endl;
}