#include "square.h"
#include <iostream>
using namespace std;

int main() {
    square s1(5);
    s1.print_area();
    s1.print_perimeter();
    s1.print_diameter();

    square s2;
    s2.set_side(3);
    s2.print_area();

    square s3 = s1 + s2;
    s3.print_area();

    cout << "Number of squares: ";
    s3.print_counter();

    return 0;
}
