#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class circle // Áŕçîâűé ęëŕńń - "Ęđóă" 
{
    double r; // Çíŕ÷ĺíčĺ đŕäčóńŕ r
public:
    circle(double r); // Ęîíńňđóęňîđ äë˙ číčöčŕëčçŕöčč ďîëĺé 
    
    double area(double r); //Ôóíęöč˙ äë˙ âű÷čńëĺíč˙ ďëîůŕäč ęđóăŕ
    
    virtual void print(); // Ěĺňîä äë˙ ďĺ÷ŕňč ďîëĺé (âčđňóŕëüíűé) 
    
};

