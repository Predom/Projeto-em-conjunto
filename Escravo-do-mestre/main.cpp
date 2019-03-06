#include <sfml\Graphics.hpp>

using namespace sf;

int main () {

    RenderWindow w;

    w.create(VideoMode(750, 400), "Window");

    while (w.isOpen()){

        float j = 0;

        for (float i = 0; i <= 800; i+=0.1){

            Event e;

            while (w.pollEvent(e)){

                switch (e.type) {

                case Event::Closed: w.close(); break;

                default: break;

                }
            }

            if (i > 350) j+=0.02;

            w.clear(Color::White);

            CircleShape c (10-j+i/10);

                c.setPosition(i, 190-i/10);

                c.setFillColor(Color(255-i/3, 255-i/3, 0+i/3));

            w.draw(c);

            w.display();

        }

    }

return 0;

}
