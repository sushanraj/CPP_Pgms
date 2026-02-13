#include <iostream>

using namespace std;

class multiplication
{
private:
    int result;
public: 
    int a, b;
    void data_in();
    void data_out();

    friend int multiply(multiplication& m);
};

int main()
{
    multiplication m;
    m.data_in();
    multiply(m);
    m.data_out();
    return 0;
}

void multiplication::data_in()
{
    std::cout << "enter two data:" << std::endl;
    std::cin >> a >> b;
}

int multiply(multiplication& m)
{
    m.result = m.a * m.b;
}

void multiplication::data_out()
{
    std::cout << "multiplied result is :" << result << std::endl;
}