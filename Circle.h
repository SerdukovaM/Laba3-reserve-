#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class circle // Базовый класс - "Круг" 
{
    double r; // Значение радиуса r
public:
    circle(double r); // Конструктор для инициализации полей 
    
    area(double r); //Функция для вычисления площади круга
    
    virtual void print(); // Метод для печати полей (виртуальный) 
    
};

