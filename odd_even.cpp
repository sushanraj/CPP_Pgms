#include <iostream>
using namespace std;
int main()
{
	int num;
	std::cout << "enter the num :" << endl;
	std::cin >> num;

	(num % 2 == 0) ?  std::cout<<"yes its a even" :std::cout<< "No its odd";
	return 0;
}