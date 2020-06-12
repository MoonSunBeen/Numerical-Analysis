/*
2020_03_10 21700242 Sun-Been Moon
Numerical Analysis - HW1-2 
*/

#include "basicHeader.h"
#include "UserDefine.h" 
#include "Sol_NonLinearEqns.h"
#include "Sol_TranserFunc.h"
#include "Linear_Algebra.h"

void main() {

	/*******************************
	HW1 - solving NonLinear Equation 
	pow(x, 3.0) - 3.0 * x + 1.0;
	*******************************/

	print_MethodOpt(&Method);

	RootFinding(Method);

	/*****************************
	HW1-2 - problem 1
	*****************************/

	print_GoOpt();

	calculate_feq();

	/*****************************
	HW1-2 - problem 2
	*****************************/
	
	Find_GPS(NEWTONRAPHON);

	system("pause");

}
