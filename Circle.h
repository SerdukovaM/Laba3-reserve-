#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class circle // ������� ����� - "����" 
{
    double r; // �������� ������� r
public:
    circle(double r); // ����������� ��� ������������� ����� 
    
    area(double r); //������� ��� ���������� ������� �����
    
    virtual void print(); // ����� ��� ������ ����� (�����������) 
    
};

