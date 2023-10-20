#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Rsctangles and circle sfml1.1");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({120, 340});
    //shape1.setRotation(75);
    shape1.setPosition({200, 120});
    shape1.setFillColor(sf::Color(128, 128, 128));
    window.draw(shape1);

    sf::CircleShape shape2(50);
    shape2.setPosition({210, 130});
    shape2.setFillColor(sf::Color(0xFF, 0, 0));
    window.draw(shape2);

    sf::CircleShape shape3(50);
    shape3.setPosition({210, 240});
    shape3.setFillColor(sf::Color(0xFF, 0xFF, 0));
    window.draw(shape3);

    sf::CircleShape shape4(50);
    shape4.setPosition({210, 350});
    shape4.setFillColor(sf::Color(0, 0xFF, 0));
    window.draw(shape4);

    window.display();
    sf::sleep(sf::seconds(5));
}