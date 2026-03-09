#include <iostream>
using namespace std;

int addition(int x, int y)
{
    return(x + y);
}

int main()
{
    int a, b;
    std::cout << "enter two values :" << std::endl;
    std::cin >> a >> b;
    int res = addition(a, b);
    std::cout << "addition result is :" << res << std::endl;

    int c = 5, d = 3;
    int res1 = c - d;
    std::cout << "subraction result is :" << res1 << endl;
    return 0;
}