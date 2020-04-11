#pragma once
#include "Circle.h"



class ball : public circle // Ďđîčçâîäíűé ęëŕńń - "Řŕđ" 
{
public:
    ball(double r) : // Ęîíńňđóęňîđ 
        circle(r); // ßâíűé âűçîâ ęîíńňđóęňîđŕ áŕçîâîăî ęëŕńńŕ 
   
    double area2(double r); // Ďĺđĺîďđĺäĺëĺííŕ˙ ôóíęöč˙
    
    void print(); // Ďĺđĺîďđĺäĺëĺííűé ěĺňîä print 
    
};


