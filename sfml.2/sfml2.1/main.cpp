#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

int main()
{
    constexpr float BALL_SIZE = 40;
    float speedX = 100.f;
    float prevTime = 0;
    sf::Vector2f position = {10, 350};

    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Wave Moving Ball");
    sf::Clock clock;

    sf::CircleShape ball(BALL_SIZE);
    ball.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

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

        constexpr float amplitudeY = 80.f;
        constexpr float periopY = 2;

        const float time = clock.getElapsedTime().asSeconds(); //текущее время
        const float wavePhase = time * float(2 * M_PI);
        float dt = time - prevTime;
        const float x = x + speedX * dt;
        const float y = amplitudeY * std::sin(wavePhase / periopY);
        const sf::Vector2f offset = {x, y};
        prevTime = time;

        sf::Vector2f positionBall = position;
        positionBall += offset;

        if ((positionBall.x + 2 * BALL_SIZE >= WINDOW_WIDTH) && (speedX > 0))
        {
            speedX = -speedX;
        }
        if ((positionBall.x < 0) && (speedX < 0))
        {
            speedX = -speedX;
        }

        ball.setPosition(position + offset);

        window.clear();
        window.draw(ball);
        window.display();
    }
}