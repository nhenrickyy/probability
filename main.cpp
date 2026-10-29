#include <iostream>

double addition_rule_independent(double X, double Y) {
	return (X - Y) - (X * Y);
}

double addition_rule_dependent(double X, double Y, double Y_given_X) {
	return (X + Y) - (X * Y_given_X);
}

/** Main function */

int main() {
    double X = 0.5;
    double Y = 0.25;
    double Y_given_Y = 0.05;
    
    std::cout << "Independent P(X or Y = " << addition_rule_independent(X, Y)
              << std::endl;
    
    std::cout << "dependent P(A or B) = "
              << addition_rule_dependent(A, B, B_given_A) << std::endl;

    return 0;
}
