#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::ConvexShape triangle;                        //класс выпуклые фигуры
    triangle.setFillColor(sf::Color(0xFF, 0x80, 0)); // установить цвет заливки
    triangle.setPosition({200, 120});                // установить позицию в центре фигуры
    triangle.setPointCount(3);                       // установить количество точек
    triangle.setPoint(0, {50, -20});                 //заданная точка
    triangle.setPoint(1, {50, 20});                  //заданная точка
    triangle.setPoint(2, {-100, 0});                 //заданная точка

    sf::ConvexShape trapeze;
    trapeze.setFillColor(sf::Color(0xFF, 0, 0xFF)); // установить цвет заливки
    trapeze.setPosition({400, 300});                // установить позицию
    trapeze.setPointCount(4);                       // установить количество точек
    trapeze.setPoint(0, {-90, 0});                  //заданная точка
    trapeze.setPoint(1, {+90, 0});                  //заданная точка
    trapeze.setPoint(2, {+120, 60});                //заданная точка
    trapeze.setPoint(3, {-120, 60});                //заданная точка

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Convex Shapes"); //объявляет переменную window, которая имеет тип “графическое окно”, размеры 800x600 px и незамысловатый заголовок “.....”.
    window.clear();                                                      // очистка экрана
    window.draw(triangle);                                               // рисовать треугольник
    window.draw(trapeze);                                                // рисовать трапецию
    window.display();                                                    //выводит на экран то, что было нарисовано

    sf::sleep(sf::seconds(5)); //Окно показывается, пока выполняется инструкция
}