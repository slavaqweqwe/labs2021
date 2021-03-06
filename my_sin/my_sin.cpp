// my_sin.cpp: определяет точку входа для приложения.
//

#include "my_sin.h"
constexpr double twoPI = 6.2832;


double testspace::Sin(double arg) {

	double arg_in_two = arg * arg;
	double value_for_add = arg;
	double result  = arg;
	double degree = 1;

	while (value_for_add > 0.0001 || value_for_add < -0.0001) {
		
		degree += 2;
		value_for_add *= -1.0 * arg_in_two / (degree * (degree - 1));

		result += value_for_add;
	}
	return result;
}