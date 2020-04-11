#include "Ball.h"


class ball : public circle // Производный класс - "Шар" 
{
public:
    ball(double r) : // Конструктор 
        circle(r) // Явный вызов конструктора базового класса 
    {
        this->r = r;
    }

    double area2(double r) // Переопределенная функция
    {
        circle::area(double r);

        return  (S * M_PI * r * 4 / 3);

    }

    void print() // Переопределенный метод print 
    {
        circle::print(); // Вызов в переопределенном методе метода  
                                   // базового класса 
        cout << "\nS(ball)" << S; // Печатаем площадь шара
    }
};


