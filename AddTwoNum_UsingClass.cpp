#include <iostream>
using namespace std;


class addition
{
public:
	int add(int x,int y);
};

int main()
{
	int a, b;
	addition sum;
	sum.add(a,b);
	return 0;
}

int addition::add(int x,int y)
{
	std::cout << "enter two val :" << std::endl;
	std::cin >> x >>y;
	std::cout << "sum is :" << (x + y) << endl;
}