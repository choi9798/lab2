#include "bmi.h"
#include<iostream>

bmi::bmi(double hei, int wei)
{
	BMI = 0;
	height = hei/100;
	weight = wei;
}

double bmi::getBMI()
{
	BMI = weight/(height*height);
	return BMI;
}

string bmi::getCate()
{
	if(BMI<15)
		return "Very severely underweight";
	else if(BMI>=15 && BMI<16)
		return "Severely underweight";
	else if(BMI>=16 && BMI<18.5)
		return "Underweight";
	else if(BMI>=18.5 && BMI<25)
		return "Normal";
	else if(BMI>= 25 && BMI<30)
		return "Overweight";
	else if(BMI>= 30 && BMI<35)
		return "Obese Class I(Moderately obese)";
	else if(BMI >=35 && BMI<40)
		return "Obese Class II(Severely obese)";
	else if(BMI>=40)
		return "Obese Class III(Very severely obese)";		
}

