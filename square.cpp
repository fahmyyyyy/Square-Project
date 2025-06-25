#include "square.h"
int square::counter =0;
bool square::iswelcomeshown=false;
square::square(float s):sidelength(s)
{
if(iswelcomeshown==false)
{
    cout<<"Welcome To Square Application"<<endl;
    iswelcomeshown=true;
}
diameter=sidelength*sqrt(2);
counter++;
perimeter=sidelength*4;
area=sidelength*sidelength;
}
square::square()
{
    if(!iswelcomeshown)
    {
        cout<<"Welcome To Square Application"<<endl;
        iswelcomeshown=true;
    }
    counter++;
}
void square::print_counter()
{
    cout<<counter<<endl;
}
void square::print_area()
{
    cout<<area<<endl;
}
void square::print_perimeter()
{
    cout<<perimeter<<endl;
}
void square::print_area(float s)
{
    cout<<s*s<<endl;
}
void square::print_perimeter(float s)
{
    cout<<s*4<<endl;
}
void square::set_diameter(float d)
{
    diameter=d;
    sidelength=diameter/sqrt(2);
}
void square::set_side(float s)
{
    sidelength=s;
    diameter=sidelength*sqrt(2);
}
float square::get_area()
{
    return area;
}
float square::get_area(float s)
{
    return s*s;
}
int square::get_counter()
{
    return counter;
}
float square::get_diameter()
{
    return diameter;
}
float square::get_perimeter(float s)
{
    return s*4;
}
float square::get_side()
{
    return sidelength;
}
square::~square()
{
    cout<<"Thanks For Using The Application"<<endl;
}
square square::operator ++()
{
    ++sidelength;
    return square(sidelength);
}
square square::operator ++(int)
{
    sidelength++;
    return square(sidelength);
}
square square::operator--()
{
    --sidelength;
    return square(sidelength);
}
square square::operator--(int)
{
    sidelength--;
    return square(sidelength);
}
square square::operator+(square a)
{
    float s=sidelength+a.sidelength;
    return square(s);
}
square square::operator-(square a)
{
    float s=sidelength-a.sidelength;
    return square(s);
}
void square::print_diameter(float s)
{
    cout<<s*sqrt(2)<<endl;
}
void square::print_diameter()
{
    cout<<diameter<<endl;
}