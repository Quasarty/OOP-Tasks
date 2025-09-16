//Автор: Кожевников Андрей
//Задача 6 https://ivtipm.github.io/Programming/Glava01/index01.htm#z6

#include <iostream> //Модуль ввода/вывода
#include <format>   //Модуль формата 
#include "MyUnit.hpp"

//Меняем пространство имен, чтобы не писать везде std::
using namespace std;


int main(){
    float a, b = 0; //< Переменные для катетов
    float c, s = 0;
    my_unit::Test_GetHypotenuse;
    my_unit::Test_GetSquare;
    //Ввод катетов
    cout << "Введите катеты прямоугольного треугольника: ";
    cin >> a >> b;

    //Вывод
    cout << format("Гипотенуза = {}\nПлощадь = {}", my_unit::GetHypotenuse(a, b), my_unit::GetSquare(a, b));

    return 0;
}