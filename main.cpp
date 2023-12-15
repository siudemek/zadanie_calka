#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double ksi[3]={-0.774597, 0, 0.774597};
    double w[3]={0.555556, 0.888889, 0.555556};
    double calka=0;
    cout <<setw(10) << "k" << setw(15) << "ksi[k]" << setw(15) << "w[k]" << endl<<endl;
    for (int i=0;i<3;i++)
    {
        int k=i+1;
        cout<<setw(10)<<k<<"."<<setw(15)<<ksi[i]<<setw(15)<<w[i]<<endl;
    }
    cout<<endl<<endl<<endl;
    
    for (int i=0;i<3;i++)
    {
        calka+=pow(ksi[i],2)*w[i];
    }
    cout<<"Calka wynosi "<<calka;
    return 0;
}
