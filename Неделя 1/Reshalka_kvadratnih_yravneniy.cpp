// Reshalka_kvadratnih_yravneniy.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    int a, b, c, d, h, g;

    setlocale(LC_ALL, "Russian");

    std::cout << "Введите коэффициент a: ";
    std::cin >> a;

    std::cout << "Введите коэффициент b: ";
    std::cin >> b;

    std::cout << "Введите коэффициент c: ";
    std::cin >> c;

    d = b * b - 4 * a * c;

    if (d < 0) {
        std::cout << "Уравнение, заданное данными коэффициентами, не имеет рациональных корней\n";
    }

    else if (d == 0) {
        h = - b / (2 * a);
        std::cout << "Уравнение, заданное данными коэффициентами, имеет единственный корень: " << h << "\n";
    }

    else {
        h = (- b - sqrt(d)) / (2 * a);
        g = (- b + sqrt(d)) / (2 * a);
        std::cout << "Уравнение, заданное данными коэффициентами, имеет 2 корня: " << h << " и " << g << "\n";
    }
 }

