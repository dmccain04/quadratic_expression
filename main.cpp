#include <stdio.h>
#include <iostream>
#include "quadratic_expression.h"
using namespace std;
using main_mccain_2P::quadratic_expression;

int main(int argc, char **argv)
{
	quadratic_expression q1;
	cout << q1.get_real_roots() << endl;
	q1.set_a(1);
	q1.set_b(-2);
	q1.set_c(1);
	cout << q1.get_real_roots() << endl;
	q1.set_a(1);
	q1.set_b(-1);
	q1.set_c(-6);
	cout << "q1(x) = " << q1.get_a() << "x^2 + " << q1.get_b() << "x + " << q1.get_c() << endl;
	cout << q1.get_real_roots() << endl;
	q1.set_a(0);
	q1.set_b(0);
	q1.set_c(1);
	cout << q1.get_real_roots() << endl;
	quadratic_expression q2(q1);
	cout << q2.get_real_roots() << endl;
	q1.set_a(0);
	q1.set_b(-2);
	q1.set_c(1);
	cout << q1.get_real_roots() << endl;
	
	return 0;
}
