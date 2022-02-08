#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(800, 600), "SFML_Application");
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear(Color(255,255,255));


		RectangleShape c3(Vector2f(660, 500));
		c3.setFillColor(Color(0, 0, 0));
		c3.setOutlineThickness(10);
		c3.setOutlineColor(Color(255, 255, 0));
		c3.move(60, 60);
		window.draw(c3);

		CircleShape c1(200,20);
		c1.setFillColor(Color(0, 0, 0));
		c1.setOutlineThickness(20);
		c1.setOutlineColor(Color(255, 255, 0));
		c1.move(200, 100);
		window.draw(c1);

		CircleShape c2(100, 4);
		c2.setFillColor(Color(0, 0, 0));
		c2.setOutlineThickness(10);
		c2.setOutlineColor(Color(255, 255, 0));
		c2.move(400, 160);
		c2.rotate(45);
		window.draw(c2);

		ConvexShape c4;
		c4.setPointCount(5);
		c4.setPoint(0, Vector2f(300, 400));
		c4.setPoint(3, Vector2f(300, 340));
		c4.setPoint(4, Vector2f(320, 380));
		c4.setPoint(1, Vector2f(370, 370));
		c4.setPoint(2, Vector2f(400, 400));
		c4.setFillColor(Color(0, 0, 0));
		c4.setOutlineThickness(10);
		c4.setOutlineColor(Color(255, 255, 0));
		window.draw(c4);
		window.display();
	}
	return 0;
}