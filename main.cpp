#include <bits/stdc++.h>
#include<math.h>
#define quit q
using namespace std;
double func(double n)
{
	double fact=1.0;
	for(double i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
double Mycalculator(char c,double a,double b)
{
	double result=0.0;
	if(c=='+')
	{
		result=a+b;
	}
	else if(c=='-')
	{
		result=a-b;
	}
	else if(c=='*')
	{
		result=a*b;
	}
	else if(c=='/')
	{
		result=a/b;
	}
	else if(c=='^')
	{
		result=powl(a,b);
	}
	else if(c=='&')
	{
		result=log10(a);
		result=log10(b);
	}
	else if(c=='%')
	{
		result=exp(a);
	}
	else if(c=='!')
	{
		result=func(a);
	}
	else
	{
		cout<<"Not found! Please try Again! "<<'\n';
		return 0;
	}
	return result;
}
int main()
{
    char c;
    double a,b=0.0;
	cout<<"Enter the operator(+ - * / ^ & % ! q for quit):"<<'\n';
    cin>>c;
    cout<<"Enter Two Numbers :"<<'\n';
    cout<<"Number 1 : ";
    cin>>a;
    cout<<"Number 2 : ";
    cin>>b;


    while(c!='q'){
	cout<<fixed<<setprecision(12)<<"result = "<<Mycalculator(c,a,b)<<'\n';
	cout<<"Enter the operator(+ - * / ^ & % ! q for quit):";
    cin>>c;
	cout<<"Enter Two Numbers :"<<'\n';
    cout<<"Number 1 : "<<'\n';
    cin>>a;
    cout<<"Number 2 : "<<'\n';
    cin>>b;

    }
    return 0;
}
