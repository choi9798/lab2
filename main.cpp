#include<iostream>
#include<fstream>
#include "bmi.h"
using namespace std;

int main()
{
	double h;
	int w;

	ifstream inFile("file.in", ios::in);
	ofstream outFile("file.out", ios::out);
	while(1)
	{
		inFile >> h >> w;
		if(h==0 && w==0)
		{
			return 0;
		}
		bmi BMI(h,w);
		outFile << BMI.getBMI();
		outFile << " " << BMI.getCate() << endl;
	}
	return 0;
}
