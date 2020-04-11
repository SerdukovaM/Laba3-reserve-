#include "Circle.h"


class circle // Базовый класс - "Круг" 
{
    double r; // Значение радиуса r
public:
    circle(double r) // Конструктор для инициализации полей 
    {
        this->r = r;
    }
    double area(double r) //Функция для вычисления площади круга
    {
        return (M_PI * pow(r, 2));
    }
    virtual void print() // Метод для печати полей (виртуальный) 
    {
        cout << "\nr=" << r << "\nS=" << S; // Печатаем радиус и площадь круга
    }

};

