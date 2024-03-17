#include <Windows.h>
#include <iostream>
#include <cmath>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   int count = 0;

   for (int i = 100; i <= 999; i++)
    {
        if (i % 10 == (i % 100) / 10 || i % 10 == i / 100 || (i % 100) / 10 == i / 100)
        {
            count += 1;
        }
    }

    std::cout << count;


    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        if (i % 10 != (i % 100) / 10 && i % 10 != i / 100 && (i % 100) / 10 != i / 100)
        {
            count += 1;
        }
    }

    std::cout << count;


    int num, n = 0, nn = 0, count, resultnum;

    std::cout << "Введите число: ";
    std::cin >> num;

    count = num;

    while (count > 1)
    {
        count = count / 10;
        n++;
    }

    while (n > 0)
    {
        nn = std::pow(10, n);
        resultnum = num / nn;

        if (resultnum != 3 && resultnum != 6)
        {
            std::cout << resultnum;
        }
        num = (num % nn);
        n--;
    }

    int a;

    std::cout << "Введите число: ";
    std::cin >> a;

    for (int i = 1; i <= std::sqrt(a); i++)
    {
        if (a % (i * i) == 0 && a % (i * i * i) != 0)
        {
            std::cout << i << " ";
        }
    }


    int a, a1, num, sum = 0;

    std::cout << "Введите число: ";
    std::cin >> a;
    a1 = a;

    while (a1 > 0)
    {
        num = a1 % 10;
        sum += num;
        a1 = a1 / 10;
    }

    if (sum * sum * sum == a * a)
    {
        std::cout << "Куб суммы чисел числа равен числу в квадрате";
    }
    else
    {
        std::cout << "Куб суммы чисел числа не равен числу в квадрате";
    }


    int num;

    std::cout << "Введите число: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            std::cout << i << " ";
        }
    }


    int num1, num2;

    std::cout << "Введите числа: ";
    std::cin >> num1 >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}