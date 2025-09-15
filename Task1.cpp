//Автор: Кожевников Андрей
//Задача 6 https://ivtipm.github.io/Programming/Glava01/index01.htm#z6

#include <iostream> //Модуль ввода/вывода
#include <cmath>    //Математический модуль 
#include <format>   //Модуль формата 

//Меняем пространство имен, чтобы не писать везде std::
using namespace std;

/**
 * @brief Возвращает гипотенузу прямоугольного треугольника по его катетам
 * 
 * @param a первый катет
 * @param b второй катет
 */
float GetHypotenuse(float a, float b){
    return sqrt(a*a + b*b);
}

/**
 * @brief Возвращает площадь прямоугольного треугольника по его катетам
 * 
 * @param a первый катет
 * @param b второй катет
 */
float GetSquare(float a, float b){
    return a*b/2;
}

int main(){
    float a, b = 0; //< Переменные для катетов
    float c, s = 0;
    
    //Ввод катетов
    cout << "Введите катеты прямоугольного треугольника: ";
    cin >> a >> b;

    //Вывод
    cout << format("Гипотенуза = {}\nПлощадь = {}", GetHypotenuse(a, b), GetSquare(a, b));

    return 0;
}