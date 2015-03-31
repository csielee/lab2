#include <iostream>
#include <string>
#include <fstream>
//#include <iomanop>
using namespace std;
#include "BMI.h"

int main()
{
    BMI b;
    ifstream fin("file.in",ios::in);
    if(!fin)
    {
        cout<<"open file error\n";
    }
    ofstream fout("file.out",ios::out);
    fout.setf(ios::left);
    fout.precision(4);
    double h,m;
    while(fin>>h>>m)
    {
        if(h==0)
            break;

        b.getdata(h,m);
        fout.width(6);
        fout<<b.getBMI()<<b.cate[b.getcate()]<<endl;
    }
    fin.close();
    fout.close();
    return 0;
}
