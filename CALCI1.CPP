#include<iostream.h>
#include<conio.h>
int main()
{
 char op;
 float num1, num2;
 cout<<"Enter operator(+, -, *, /): ";
 cin>>op;
 cout<<"Enter two operand: ";
 cin>>num1 >> num2;
 switch(op)
 {
  case '+':
  cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
  break;
  case '-':
  cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
  break;
  case '*':
  cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
  break;
  case '/':
  if(num2!=0)
  cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
  else
  cout<<"Error! Division by zero."<<endl;
  break;
  default:
  cout<<"Error operator is not correct"<<endl;
  break;
  }
 return 0;
}