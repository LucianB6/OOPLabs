#include <iostream>
#include "Canvas.h"

int main() {
    Canvas canvas(20, 10);

    canvas.DrawLine(1, 1, 18, 8, '+');
    canvas.Print();
    canvas.Clear();
    canvas.DrawRect(1, 3, 15, 7, '*');
    canvas.FillRect(1, 3, 15, 7, '*');
    canvas.Print();
    canvas.Clear();
    canvas.DrawCircle(10, 5, 3, '*');
    canvas.Print();
    canvas.FillCircle(10, 5, 3, '*');
    canvas.Print();

    return 0;
}
