// FILE: quadratic_expression.cpp
// CLASS IMPLEMENTED: quadratic_expression (see quadratic_expression.h for documentation)

#include <iostream>
#include <string>
#include "quadratic_expression.h"
#include <math.h>

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
	
	double quadratic_expression::evaluate(double x) const{
		return (a*pow(x, 2.0) + b * x + c);
	}
	
	int quadratic_expression::real_roots() const{
		if (a == 0 && b == 0 && c == 0) {
			return 3;
		}
		else if (a == 0 && b == 0 && c != 0)  {
			return 0;
		}
		else if (a == 0 && b != 0) {
			return 1;
		}
		else if (a != 0 && (pow(b, 2.0) < 4*a*c)){
			return 0;
		} else if (a != 0 && (pow(b, 2.0) == 4 * a * c)){
			return 1;
		}
		else {
			return 2;
		}
	}
	
	std::string quadratic_expression::get_real_roots() const {
		int i = real_roots();
		if (i == 0) {
			return "There are no real roots!";
		} else if (i == 1) {
			if (a == 0 && b != 0) {
				double root = (- c)/b;
				return "The real root is " + std::to_string(root); 
			}
			else {
				double root = (-b)/(2*a);
				return "The real root is " + std::to_string(root);
			}
		} else if (i == 2) {
			double determinant = sqrt((pow(b, 2.0) - 4 * a * c));
			double root1 = (-b - determinant)/(2*a);
			double root2 = (-b + determinant)/(2*a);
			
			return "The real roots are " + std::to_string(root1) + " and " + std::to_string(root2);
		} else {
			return "Every number is a real root";
		}
		
	}
}
	
