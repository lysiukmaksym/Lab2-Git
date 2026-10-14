#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    bool ellipse =
        (x - 3) * (x - 3) / 4 + (y - 1) * (y - 1) <= 1;     // Верхній еліпс
  
    bool circle1 =
        (x - 2) * (x - 2) + (y + 1) * (y + 1) <= 1;   // Ліве нижнє коло

    bool circle2 =
        (x - 4) * (x - 4) + (y + 1) * (y + 1) <= 1;     // Праве нижнє коло

    bool square1 =
        x >= 0 && x <= 1 && y >= 1 && y <= 2;     // Квадрати та прямокутник

    bool square2 =
        x >= 1 && x <= 2 && y >= 2 && y <= 3;

    bool square3 =
        x >= 4 && x <= 5 && y >= 2 && y <= 3;

    bool square4 =
        x >= 5 && x <= 6 && y >= 1 && y <= 2;

    bool square5 =
        x >= 0 && x <= 1 && y >= -2 && y <= -1;

    bool square6 =
        x >= 5 && x <= 6 && y >= -2 && y <= -1;

    bool rectangle =
        x >= 2 && x <= 4 && y >= -3 && y <= -2;

    if (ellipse || circle1 || circle2 ||
        square1 || square2 || square3 || square4 ||
        square5 || square6 || rectangle)
    {
        cout << "Point belongs to the marked area." << endl;
    }
    else
    {
        cout << "Point does not belong to the marked area." << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
} 

//Коментра додано під час виконання Лабораторної роботи №2 з системи контролю версій


