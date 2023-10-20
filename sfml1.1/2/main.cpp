#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{

    sf::RectangleShape G1;
    G1.setSize({20, 100});
    G1.setPosition({200, 120});
    G1.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape G2;
    G2.setSize({50, 20});
    G2.setPosition({220, 120});
    G2.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::ConvexShape A1;
    A1.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    A1.setPosition({330, 120});
    A1.setPointCount(5);
    A1.setPoint(0, {0, 0});
    A1.setPoint(1, {10, 20});
    A1.setPoint(2, {-20, 100});
    A1.setPoint(3, {-40, 100});

    sf::ConvexShape A2;
    A2.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    A2.setPosition({330, 120});
    A2.setPointCount(5);
    A2.setPoint(0, {0, 0});
    A2.setPoint(1, {20, 0});
    A2.setPoint(2, {60, 100});
    A2.setPoint(3, {40, 100});

    sf::RectangleShape A3;
    A3.setSize({60, 20});
    A3.setPosition({310, 180});
    A3.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape M1;
    M1.setSize({20, 100});
    M1.setPosition({420, 120});
    M1.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape M2;
    M2.setSize({62, 20});
    M2.setPosition({440, 120});
    M2.setRotation(45);
    M2.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape M3;
    M3.setSize({62, -20});
    M3.setPosition({500, 120});
    M3.setRotation(135);
    M3.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape M4;
    M4.setSize({20, 100});
    M4.setPosition({500, 120});
    M4.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Convex Shapes");
    window.clear();

    window.draw(G1);
    window.draw(G2);
    window.draw(A1);
    window.draw(A2);
    window.draw(A3);
    window.draw(M1);
    window.draw(M2);
    window.draw(M3);
    window.draw(M4);

    window.display(); //выводит на экран то, что было нарисовано

    sf::sleep(sf::seconds(5)); //Окно показывается, пока выполняется инструкция
}