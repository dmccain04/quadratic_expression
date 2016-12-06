// FILE: quadratic_expression.cpp
// CLASS IMPLEMENTED: quadratic_expression (see quadratic_expression.h for documentation)

#include <iostream>
#include <string>
#include "quadratic_expression.h"

namespace main_mccain_2P {
	
	quadratic_expression::quadratic_expression(double a_value, double b_value, double c_value){
		a = a_value;
		b = b_value;
		c = c_value;
	}
	
	void quadratic_expression::set_a(double value) {
		a = value;
	}
	
	void quadratic_expression::set_b(double value) {
		b = value;
	}
	
	void quadratic_expression::set_c(double value) {
		c = value;
	}
	
	
}