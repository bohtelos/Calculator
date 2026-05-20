#include <iostream>

int main() {

	char op;
	int a, b;
	int result;

	bool valid = false;

	while (!valid) {
	
		std::cout << "Before everything, please enter two numbers: \n";
		std::cin >> a >> b;

		std::cout << "Please enter an operator: \n";
		std::cin >> op;

		switch(op) {
		
			case '+':
				result = a + b;
				std::cout << "The result is: " << result << "\n";
				valid = true;
				break;
			case '-':
				result = a - b;
				std::cout << "The result is: " << result << "\n";
				valid = true;
				break;
			case '*':
				result = a * b;
				std::cout << "The result is: " << result <<"\n";
				valid = true;
				break;
			case '/':
				if (b != 0) {
				
				result = a / b;
				std::cout << "The result is: " << result << "\n";
				valid = true;
				
				}

				else {
				
					std::cout << "Sorry, cannot divide by 0.\n";
				
				}
				break;

			default:
				std::cout << "Sorry, I did not recognize that character.\n";

				if (!valid) {

					std::cout << "Please try again.\n";

				}

		}
	
	}

	return 0;

}
