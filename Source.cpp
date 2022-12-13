#include <iostream>
#include <string>


int main() {
	std::string reply = " ";

	std::cout << "Is your verb in the present, past or future tense?" << std::endl;
	std::cin >> reply;

	while (reply != "present" && reply != "past" && reply != "future") {
		std::cout << "Is your verb in the present, past or future tense?" << std::endl;
		std::cin >> reply;

	}

	if (reply == "present") {
		std::cout << "Is this happening RIGHT NOW?" << std::endl;
		std::cin >> reply;
		while (reply != "yes" && reply != "no") {
			std::cout << "Is this happening RIGHT NOW?" << std::endl;
			std::cin >> reply;
		}
		if (reply == "yes") {
			std::cout << "Has this been happening in the past and the future is unknown?" << std::endl;
			std::cin >> reply;
			if (reply == "yes") {
				std::cout << "Use Present Perfect-Continuous" << std::endl;
			}
			else if (reply == "no") {
				std::cout << "Use Present Continuous" << std::endl;
			}
		}
		else if (reply == "no")
		{
			std::cout << "Is this a regular or routine activity?" << std::endl;
			std::cin >> reply;

			while (reply != "yes" && reply != "no") {
				std::cout << "Is this a regular activity?" << std::endl;
				std::cin >> reply;
			}
			if (reply == "yes") {
				std::cout << "Use Present Simple" << std::endl;
			}
			else if (reply == "no") {
				std::cout << "This is not in the present tense. Try again" << std::endl;
			}
		}
	}
	else if (reply == "past") {

		}
	else if (reply == "future") {

	}
}