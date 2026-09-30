#include<iostream>
using namespace std;
class calculate
{
public:
int num1,num2;
calculate(int a,int b)
{
num1=a;
num2=b;
}
void operator++()
{
--num1;
--num2;
}
};
int main()
{
calculate c(10,4);
++c;
cout<<"after operation num1="<<c.num1<<endl;
cout<<"after operation num2="<<c.num2<<endl;
return 0;
}


