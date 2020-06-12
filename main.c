/*
2020_03_10 21700242 Sun-Been Moon
Numerical Analysis - HW1 - Solve non-linear Equations
*/

#include "basicHeader.h"
#include "UserDefine.h" 
#include "Sol_NonLinearEqns.h"

void main() {

	print_MethodOpt(&Method);

	RootFinding(Method);

	system("pause");

}
