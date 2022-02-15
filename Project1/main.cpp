#include <SFML/Graphics.hpp>
using namespace sf;
class drawFigura
{
public:
	drawFigura(float x, float y, float width, float height,float rotation, float border, Color color, Color border_color,RenderWindow& window)
	{
		RectangleShape rec(Vector2f(width,height));
		rec.setPosition(Vector2f(x, y));
		rec.setRotation(rotation);
		rec.setOutlineThickness(border);
		rec.setOutlineColor(border_color);
		rec.setFillColor(color);
		window.draw(rec);
	}
	drawFigura(RenderWindow& window,float x, float y, float radius, int type,float rotation, float border, Color color, Color border_color)
	{
		CircleShape cir(radius, type);
		cir.setPosition(Vector2f(x, y));
		cir.setOutlineThickness(border);
		cir.setOutlineColor(border_color);
		cir.setFillColor(color);
		cir.setRotation(rotation);
		window.draw(cir);
	}

};
void main()
{
	RenderWindow window(VideoMode(1000, 1000), "SFML_Application");
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear(Color(255,255,255));
		drawFigura(500, 500, 200, 100, 0, 5, Color(159, 141, 117), Color(110, 108, 87), window);
		drawFigura(window, 500, 600, 20, 3, 0, 5, Color(86,69,53), Color(80, 62, 38));
		drawFigura(window, 660, 600, 20, 3, 0, 5, Color(86, 69, 53), Color(80, 62, 38));
		window.display();
	}
	
	 
}