#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <cmath>

int main()
{

    constexpr int pointCount = 200;
    constexpr float moveRadius = 100;
    float speed = 1.f;
    sf::Clock clock;

    // Создаём окно с параметрами сглаживания
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Ellipse", sf::Style::Default, settings);

    //объявляем фигуру, которая будет выглядеть как эллипс
    sf::ConvexShape ellipse;
    ellipse.setFillColor(sf::Color(0xFF, 0x09, 0x80));
    sf::Vector2f positionEllipse = {400, 300};

    //иницилизируем вершины псевдо-элипса
    ellipse.setPointCount(pointCount);
    for (int pointNo = 0; pointNo < pointCount; ++pointNo)
    {
        float angle = float(2 * M_PI * pointNo) / float(pointCount);
        float radius = pointCount * sin(6 * angle);
        sf::Vector2f point = {
            radius * std::sin(angle),
            radius * std::cos(angle)};
        ellipse.setPoint(pointNo, point);
    }

    float angleMove = atan2(0, moveRadius);

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        float dt = clock.restart().asSeconds();
        angleMove += speed * dt;

        sf::Vector2f pointMove = {
            moveRadius * std::sin(angleMove),
            moveRadius * std::cos(angleMove)};

        ellipse.setPosition({positionEllipse + pointMove});

        window.clear();
        window.draw(ellipse);
        window.display();
    }
}