// FILE: quadratic_expression.h
// CLASS PROVIDED: quadratic_expression( part of the namespace of main_mccain_2P)
//
// CONSTRUCTORS for the quadratic_expression class
//
// MODIFIED MEMBER FUNCTIONS for the quadratic_expression class
//	void set_a(double value);
//		Postcondition: This functions sets the a coefficient to value. 
//
//	void set_b(double value);
//		Postcondition: This function sets the b coefficient to value.
//
//	void set_c(double value);
//		Postcondition: This function sets the c coefficient to value. 
//
// CONSTANT MEMBER FUNCTIONS for the quadratic_expression class
//	double get_a() const
//		Postcondition: This functions returns the value of coefficient a
//
//	double get_b() const
//		Postcondition: This function returns the value of coefficient b
//
//	double get_c() const
//		Postcondition: This function returns the value of coefficient c
//
//	double evaluate(double x) const
//		Postcondition: This function evaluates the function at value x, and
//		returns the value. 
//
//	int real_roots() const
//		Postcondition: This function returns the amount of real roots the quadratice 
//		expression has. If 3 is return, it means that there are unlimited roots.
//
//	std::string get_real_roots() const;
//		Postcondition: This function returns the real roots of the quadratic expression. 
// 
// VALUE SEMANTICS for the quadratic_expression class
//	Assignment and the copy constructor may be used with quadratic_expression objectss.

#include <string>
#include <iostream>

#ifndef MAIN_MCCAIN_QUADRATIC_EXPRESSION
#define MAIN_MCCAIN_QUADRATIC_EXPRESSION

namespace main_mccain_2P {
	class quadratic_expression
	{
	public: 
		// CONTSRUCTORS
		quadratic_expression(double a_value = 0.0, double b_value = 0.0, double c_value = 0.0);
		// MODIFIED MEMBER FUNCTIONS
		void set_a(double value);
		void set_b(double value);
		void set_c(double value);
		// CONSTANT MEMBER FUNCTIONS
		double get_a() const { return a; }
		double get_b() const { return b; }
		double get_c() const { return c; }
		double evaluate(double x) const;
		int real_roots() const;
		std::string get_real_roots() const;
		
	
	private:
		double a;
		double b;
		double c;
	};
	
	
}

#endif

