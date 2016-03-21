#include<iostream>
#include<fstream>
#include "BMI.h"
using namespace std;

int main()
{
	double h;
	int w;
	ifstream inFile("file.in", ios::in);
	ofstream outFile("file.out", ios::out);
	while((inFile >> h >> w) != EOF)
	{
		if(h==0 && w==0)
		{
			return 0;
		}
		BMI bmi(h,w);
		outFile << bmi.getBMI();
		outFile << " " << bmi.getCate();
	}
	return 0;
}
