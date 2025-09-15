//Автор: Андрей Кожевников
//Модуль для решения задач

#include <cmath>

#pragma once

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