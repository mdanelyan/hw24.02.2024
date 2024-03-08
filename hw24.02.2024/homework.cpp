#include <iostream>
#include <functional>
#include <iomanip>

//Функторы



class FormulaSpeed {
public:
    void operator()(double distance, double time) {
        double result = distance / time;
        std::cout << std::fixed << std::showpoint;
        std::cout << std::setprecision(digit) << result << std::endl;
    }
    FormulaSpeed(int dig)
    {
       digit = dig;
    }

    int getdig() {
        return digit;
    }
    int setdig(int dig) {
        digit = dig;
    }
    
private:
    int digit;
};

class FormulaCurrentYield {
public:
public:
    void operator()(double priceincrease, double dividendpaid, double currentprice) {
        double result = (priceincrease+ dividendpaid)/currentprice;
        std::cout << std::fixed << std::showpoint;
        std::cout << std::setprecision(digit) << result << std::endl;
    }


    FormulaCurrentYield(int dig)
    {
        digit = dig;
    }

    int getdig() {
        return digit;
    }
    int setdig(int dig) {
        digit = dig;
    }

private:
    int digit;
};


int main()
{
    FormulaSpeed Speed(1);
    Speed(120, 4.34);
    FormulaCurrentYield Yield(2);
    Yield(20, 10, 130);

}