#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
    int n=0;float sum=0,sd=0;
    ifstream source;
    string textline;
    source.open("score.txt");
    while (getline(source,textline))
	{
        n++;
        sum+=atof(textline.c_str());
        
	}
    source.close();
    cout << "Number of data = "<<n;
    cout << setprecision(3);
    sum=sum/n;
    cout << "\nMean = "<<sum;
    source.open("score.txt");
    while (getline(source,textline))
	{
        sd=sd+pow(atof(textline.c_str())-sum,2);
	}
    source.close();
    cout << "\nStandard deviation = "<< sqrt(sd/n);
}