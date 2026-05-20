#include <iostream>
#include <iomanip>

int main() {

	char op;
	float a, b;
	float result;

	bool valid = false;

	while (!valid) {
	
		std::cout << "Before everything, please enter two numbers: \n";
		std::cin >> a >> b;

		std::cout << "Please enter an operator: \n";
		std::cin >> op;

		switch(op) {
		
			case '+':
				result = a + b;
				valid = true;
				break;
			case '-':
				result = a - b;
				valid = true;
				break;
			case '*':
				result = a * b;
				valid = true;
				break;
			case '/':
				if (b != 0) {
				
				result = a / b;
				valid = true;
				
				}

				else {
				
					std::cout << "Sorry, cannot divide by 0.\n";
				continue;
				}
				break;

			default:
				std::cout << "Sorry, I did not recognize that character.\n";

					std::cout << "Please try again.\n";
					continue;


		}

		if (valid) {
		std::cout << "The result is: " << std::fixed << std::setprecision(2) << result << "\n";
		}
	}

	return 0;

}
