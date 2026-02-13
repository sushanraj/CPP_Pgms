#include <iostream>
using namespace std;

int FunctionAdd(int x,int y)
{
    return (x + y);
}

int main()
{
    int num1, num2,c;
    std::cout << "enter two values :" << endl;
    std::cin >> num1 >> num2;
    c=FunctionAdd(num1, num2);
    std::cout << "sum is :" << c << endl;
    return 0;
}