/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

// Завдання 1
void task1();

// Завдання 2
void task2();



int main() {
    int menu;
    cout << "Task number (1-3):";
    cin >> menu;
    
    switch (menu) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: cout << "Exit" << endl; break;
        default: cout << "Wrong task! (Only 1,2,3)" << endl;
    }
    
    system("pause");
    return 0;
}

// Завдання 1 реалізація
void task1() {
    int num1, num2, num3;
    cout << "************* Task 1 *****************" << endl;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    
    if (cin.fail()) {
        cout << "Wrong input!" << endl;
        return;
    }
    
    int positive_count = 0;
    int negative_count = 0;
    
    // Перевірка першого числа
    if (num1 > 0) positive_count++;
    else if (num1 < 0) negative_count++;
    
    // Перевірка другого числа
    if (num2 > 0) positive_count++;
    else if (num2 < 0) negative_count++;
    
    // Перевірка третього числа
    if (num3 > 0) positive_count++;
    else if (num3 < 0) negative_count++;
    
    cout << "Positive numbers: " << positive_count << endl;
    cout << "Negative numbers: " << negative_count << endl;
}

// Завдання 2 реалізація
void task2() {
    double x, y;
    cout << "************* Task 2 *****************" << endl;
    cout << "Enter coordinates (x y): ";
    cin >> x >> y;
    
    if (cin.fail()) {
        cout << "Wrong input!" << endl;
        return;
    }
    
    // Параметри фігури 
    double r1 = 2.0;  
    double r2 = 5.0;   
    double a = 3.0;   
    
    // Перевірка попадання в область
    bool in_outer_circle = (x*x + y*y) <= (r2*r2);
    bool in_left_circle = ((x + a)*(x + a) + y*y) <= (r1*r1);
    bool in_right_circle = ((x - a)*(x - a) + y*y) <= (r1*r1);
    
    // Умова: точка у великому колі, але поза малими колами
    if (in_outer_circle && !in_left_circle && !in_right_circle) {
        cout << "Point belongs to the area" << endl;
    } else {
        cout << "Point does NOT belong to the area" << endl;
    }
}