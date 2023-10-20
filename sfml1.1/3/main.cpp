#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::ConvexShape roof;
    roof.setFillColor(sf::Color(204, 0, 0));
    roof.setPosition({400, 140});
    roof.setPointCount(5);
    roof.setPoint(0, {0, 0});
    roof.setPoint(1, {100, 0});
    roof.setPoint(2, {200, 90});
    roof.setPoint(3, {-200, 90});
    roof.setPoint(4, {-100, 0});

    sf::RectangleShape house;
    house.setSize({320, 160});
    house.setPosition({240, 230});
    house.setFillColor(sf::Color(153, 76, 0));

    sf::RectangleShape door;
    door.setSize({60, -120});
    door.setPosition({280, 390});
    door.setFillColor(sf::Color(32, 32, 32));

    sf::CircleShape smoke1(15);
    smoke1.setPosition({470, 80});
    smoke1.setFillColor(sf::Color(192, 192, 192));

    sf::CircleShape smoke2(18);
    smoke2.setPosition({475, 55});
    smoke2.setFillColor(sf::Color(192, 192, 192));

    sf::CircleShape smoke3(20);
    smoke3.setPosition({490, 30});
    smoke3.setFillColor(sf::Color(192, 192, 192));

    sf::CircleShape smoke4(22);
    smoke4.setPosition({498, 8});
    smoke4.setFillColor(sf::Color(192, 192, 192));

    sf::RectangleShape pipe1;
    pipe1.setSize({30, 50});
    pipe1.setPosition({460, 135});
    pipe1.setFillColor(sf::Color(96, 96, 96));

    sf::RectangleShape pipe2;
    pipe2.setSize({50, -30});
    pipe2.setPosition({450, 135});
    pipe2.setFillColor(sf::Color(96, 96, 96));

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Convex Shapes");
    window.clear();
    window.draw(roof);
    window.draw(house);
    window.draw(door);
    window.draw(smoke1);
    window.draw(smoke2);
    window.draw(smoke3);
    window.draw(smoke4);
    window.draw(pipe1);
    window.draw(pipe2);

    window.display(); //выводит на экран то, что было нарисовано

    sf::sleep(sf::seconds(5)); //Окно показывается, пока выполняется инструкция
}