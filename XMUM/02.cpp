#include<iostream>

using std::cin;
using std::cout;
void circle(double raduis);
void ex4();
void covertToAsci();
void convertToEnglish();
void convertTamp();


int main()
{
    //int a,b,c;
/*  double a,b,c;
    cout<<"Input three integer : ";
    cin>>a>>b>>c;
    cout <<" the sum : "<<a+b+c<<'\n';
    cout <<" the product : "<<a*b*c<<'\n';
    cout <<" the avg : "<<(a+b+c)/3<<'\n';
*/ 
/*
    double raduis;
    cout<<"input the raduis : ";
    cin>>raduis;
    circle(raduis);
*/
   // ex4();
   //covertToAsci();
   //convertToEnglish();
   convertTamp();
    return 0;
}

void circle(double raduis)
{

    double area,circumference,diameter;
    area =raduis*raduis*2*3.14159;
    circumference=2*3.14159*raduis;
    diameter=2*raduis;
    cout<<area<<'\n';
    cout<<circumference<<'\n';
    cout<<diameter<<'\n';

}

void ex4()
{

    cout <<"Number Square Cube\n";
    for (int i= 0 ;i<6;i++)
    {
        cout <<i<<"         "<<i*i<<"     "<<i*i*i<<"\n";

    }



}


void covertToAsci()
{
    char ch;
    cout<<"write a character ";
    cin>>ch;
    cout<<"ASCI :"<<(int)ch<<'\n';
}

void convertToEnglish()
{
    double dist;
    cout<<"distance :";
    cin>>dist;
    cout <<dist*0.0245<<" inch\n";
    cout <<dist*0.0245*12<<" foot\n";
}
void convertTamp()
{
    double tamp;
    cout<<"tamp :";
    cin>>tamp;
    cout <<tamp*(9/5)+32<<" F\n";
}

