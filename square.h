#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include <cmath>
using namespace std;
class square
{
private :
static bool iswelcomeshown;
float sidelength;
float area;
float perimeter;
static int counter;
public:
void set_side(float s);
void set_diameter(float d);
static void print_diameter(float s);
void print_diameter(float s);
float get_side();
float get_diameter();
float get_area();
static float get_area(float s);
void print_area();
static void print_area(float s);
float get_perimeter();
static float get_perimeter(float s);
void print_perimeter();
static void print_perimeter(float s);
int get_counter();
void print_counter();
square();
square(float s);
~square();
square operator ++();
square operator ++ (int);
square operator --();
square operator -- (int);
square operator + (square a);
square operator - (square a);
};
#endif