#include <iostream>

int excercise1() {
	int N = 0;
	std::cout<<"Input number: ";
	std::cin>>N;
	for(int i = 0; i<N; i++){
	    std::cout<<"*";
	}
	std::cout<<std::endl;
	return 0;
}
int excercise2() {
	int N = 0;
	std::cout<<"Input number: ";
	std::cin>>N;
	for(int i = 0; i<N; i++){
	    if(i%2==0){
	        std::cout<<"*";
	    }else{
	        std::cout<<".";
	    }
	}
	std::cout<<std::endl;
	return 0;
}
int excercise3() {
	int R = 0;
	int C = 0;
	std::cout<<"Input number of rows: ";
	std::cin>>R;
	std::cout<<"Input number of columns: ";
	std::cin>>C;
	for(int i = 0; i<R; i++){
	    for(int j = 0; j<C; j++){
	        if(i%2==0){
	            std::cout<<"X";
	        }else{
	            std::cout<<".";
	        }
	    }
	    std::cout<<std::endl;
	}
	std::cout<<std::endl;
	return 0;
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
