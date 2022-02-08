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
		

		RectangleShape wall(Vector2f(250,280));
		wall.setFillColor(Color(255, 69, 0));
		wall.setOutlineColor(Color(255, 0, 0));
		wall.setOutlineThickness(8);
		wall.setPosition(400, 250); 
		window.draw(wall);

		RectangleShape door(Vector2f(100, 200));
		door.setFillColor(Color(255, 160, 122));
		door.setOutlineColor(Color(0, 0, 255));
		door.setOutlineThickness(5);
		door.setPosition(410, 325);
		window.draw(door);

		RectangleShape window_1(Vector2f(100, 100));
		window_1.setFillColor(Color(255, 215, 0));
		window_1.setOutlineColor(Color(0, 0, 255));
		window_1.setOutlineThickness(5);
		window_1.setPosition(530, 325);
		window.draw(window_1);

		RectangleShape window_2(Vector2f(0, 100));
		window_2.setFillColor(Color(255, 215, 0));
		window_2.setOutlineColor(Color(0, 0, 255));
		window_2.setOutlineThickness(3);
		window_2.setPosition(580, 325);
		window.draw(window_2);

		RectangleShape window_3(Vector2f(100, 0));
		window_3.setFillColor(Color(255, 215, 0));
		window_3.setOutlineColor(Color(0, 0, 255));
		window_3.setOutlineThickness(3);
		window_3.setPosition(530, 375);
		window.draw(window_3);

		ConvexShape roof;
		roof.setPointCount(3);
		roof.setPoint(0, Vector2f(400, 250));
		roof.setPoint(1, Vector2f(525, 150));
		roof.setPoint(2, Vector2f(650, 250));
		roof.setFillColor(Color(255, 69, 0));
		roof.setOutlineColor(Color(255, 0, 0));
		roof.setOutlineThickness(10);
		

		CircleShape circle_window(30);
		circle_window.setFillColor(Color(255, 215, 0));
		circle_window.setOutlineColor(Color(0, 0, 255));
		circle_window.setOutlineThickness(8);
		circle_window.setPosition(490, 180);
		

		ConvexShape flag;
		flag.setPointCount(3);
		flag.setPoint(0, Vector2f(525, 100));
		flag.setPoint(1, Vector2f(525, 50));
		flag.setPoint(2, Vector2f(600, 80));
		flag.setOutlineColor(Color(0,0, 255));
		flag.setFillColor(Color(255, 255, 0));
		flag.setOutlineThickness(10);
		window.draw(flag);

		RectangleShape line(Vector2f(0,150));
		line.setOutlineColor(Color(0, 0, 255));
		line.setFillColor(Color(255, 255, 0));
		line.setOutlineThickness(5);
		line.setPosition(520, 30);
		window.draw(line);
		window.draw(roof);
		window.draw(circle_window);
		window.display();
	}
	return 0;
}