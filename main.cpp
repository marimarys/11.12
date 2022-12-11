#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 600), "new", Style::Default);

    window.setVerticalSyncEnabled(true);

    CircleShape circle(25.f);
    circle.setPosition(375, 275);
    circle.setFillColor(Color::Blue);

    const float BAT_DY = 8.f;

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {


            if (Keyboard::isKeyPressed(Keyboard::W)) {
                circle.move(0.f, -BAT_DY);
            }
            if (Keyboard::isKeyPressed(Keyboard::S)) {
                circle.move(0.f, BAT_DY);
            }

            window.clear(Color::Yellow);
            window.draw(circle);
            window.display();
        }
    }
        return 0;
}
