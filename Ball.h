#pragma once
#include "Circle.h"



class ball : public circle // ����������� ����� - "���" 
{
public:
    ball(double r) : // ����������� 
        circle(r) // ����� ����� ������������ �������� ������ 
    {
        this->r = r;
    }

    area2(double r) // ���������������� �������
    {
        circle::area(double r);

        return S = M_PI * pow(r, 3) * 4 / 3;
    }

    void print() // ���������������� ����� print 
    {
        circle::print(); // ����� � ���������������� ������ ������  
                                   // �������� ������ 
        cout << "\nS(ball)" << S; // �������� ������� ����
    }
};


