#include <iostream>
#include <string>
using namespace std;
#include "BMI.h"
BMI::BMI()
{
    cate[0]="Very severely underweight";
    cate[1]="Severely underweight";
    cate[2]="Underweight";
    cate[3]="Normal";
    cate[4]="Overweight";
    cate[5]="Obese Class I(Moderately obese)";
    cate[6]="Obese Class II(Severely obese)";
    cate[7]="Obese ClaSS III(Very severely obese)";
}

void BMI::getdata(double a,double b)
{
    height=a;
    mass=b;
}

double BMI::getBMI()
{
    double h=height/100;
    ans=mass/(h*h);
    return ans;
}

int BMI::getcate()
{
    int i=0;
    if(ans<15)
        return i;
    
         i++;
    if(ans<16)
        return i;

        i++;
    if(ans<18.5)    
        return i;
    
         i++;
    if(ans<25)
        return i;
    
         i++;
    if(ans<30)
        return i;
    
         i++;
    if(ans<35)
        return i;
    
         i++;
    if(ans<40)
        return i;

        i++;
        
        return i;
}
