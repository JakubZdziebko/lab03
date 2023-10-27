#include <iostream>

int excercise1() {

}
int excercise2() {
	std::cout << "Excercise pending completion" << std::endl;
}
int excercise3() {
	std::cout << "Excercise pending completion" << std::endl;
}
int excercise4() {
	std::cout << "Excercise pending completion" << std::endl;
}
int excercise5() {
	std::cout << "Excercise pending completion" << std::endl;
}
int excercise6() {
	std::cout << "Excercise pending completion" << std::endl;
}


int main() {
	int excercise = 0;
	std::cout << "Choose excercise (type in a number from 1 to 6)" << std::endl;
	std::cin >> excercise;
	switch (excercise) {
	case 1:
		excercise1();
		break;
	case 2:
		excercise2();
		break;
	case 3:
		excercise3();
		break;
	case 4:
		excercise4();
		break;
	case 5:
		excercise5();
		break;
	case 6:
		excercise6();
		break;
	default:
		std::cout << "Invalid number or no excercise chosen." << std::endl;
	}
	return 0;
}
