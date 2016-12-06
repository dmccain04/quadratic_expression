// FILE: quadratic_expression.h
// CLASS PROVIDED: quadratic_expression( part of the namespace of main_mccain_2P)
//
// CONSTRUCTORS for the quadratic_expression class
//
// MODIFIED MEMBER FUNCTIONS for the quadratic_expression class
//
// CONSTANT MEMBER FUNCTIONS for the quadratic_expression class
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

