#include <iostream>
#include <string>
using namespace std;

class BMI{
    public:
    void getdata(double,double);
    double getBMI();
    int getcate();
    BMI();
    string cate[8];
    private:
    double height,mass,ans;
};

