#include <iostream>
using namespace std;

int add ( int num1, int num2);
int substract (int num1, int num2);
int multiply ( int num1,   int num2);
int division (int num1,int num2);

int main ()
{
int num1, num2,  total, N,result;

cout<< "Enter the option :: \n 1. Add \n 2. Sub \n 3. Multi \n 4. Div \n" ;
cin>> N;

cout<< "Enter the value of num1::" ;
cin>> num1;
cout<< "Enter the value of num2::" ;
cin>> num2;

switch(N)
{

     case 1:
      result= add (num1, num2);
     break;
    case 2:
     result= substract (num1, num2);
     break;
    case 3:
     result= multiply (num1, num2);
    break;
    case 4:
    result = division (num1,num2);
    break;
    default:
    cout<<("Invalid Ouput");
}

   cout<<"The ans is : " <<result;

}


int add (int num1, int num2)
{
   return num1+num2;
}

int substract (int num1, int num2)
{
       return num1-num2;
}

int multiply (int num1, int num2)
{
       return num1*num2;
}

int division (int num1, int num2)

{

       return num1/num2;
}

