#include <iostream>

int main()
{
    // в цикле от 1 до 100
    for (int num = 1; num <= 100; num += 1)
    {
        //  - если число кратно и 3, и 5, вывести FizzBuzz
        if ((num % 3 == 0) && (num % 5 == 0))
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (num % 3 == 0)
        {
            // выводим Fizz
            std::cout << "Fizz" << std::endl;
        }
        else if (num % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << num << std::endl;
        }
    }
}