#include "Circle.h"


class circle // ������� ����� - "����" 
{
    double r; // �������� ������� r
public:
    circle(double r) // ����������� ��� ������������� ����� 
    {
        this->r = r;
    }
    area(double r) //������� ��� ���������� ������� �����
    {
        return (M_PI * pow(r, 2));
    }
    virtual void print() // ����� ��� ������ ����� (�����������) 
    {
        cout << "\nr=" << r << "\nS=" << S; // �������� ������ � ������� �����
    }

};

