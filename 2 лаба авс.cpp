#include <iostream>

using namespace std;

int main() {
    float a, b;
    
    // Ввод двух чисел
    cout << "Введите первое число (a): ";
    cin >> a;
    cout << "Введите второе число (b): ";
    cin >> b;
    
    // Вычитание
    float result = a - b;
    
    // Вывод результата
    cout << "Результат (a - b): " << result << endl;
    
    return 0;
}