#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace sf;
int f[19][19]
{};
sf::Color black_color(0,0,0);
sf::Color blue_color(0, 255, 255);
const float pixel_size = 53;
int main()
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
		Image code;
		code.loadFromFile("Debug/Code.png");
		//Sprite s1(code);
		//window.draw(s1);
		float p1=0;
		float p2=0;
		for (int i = 0; i < 19; ++i)
		{
			p1 = 0;
			for (int j = 0; j < 19; ++j)
			{
				int r = (int)code.getPixel(p1, p2).r;
				int g = (int)code.getPixel(p1, p2).g;
				int b = (int)code.getPixel(p1, p2).b;
				int a = (int)code.getPixel(p1, p2).a;
				if (r > 0 && r < 20)
					r = 0;
				if (g > 0 && g < 20)
					g = 0;
				if (b > 0 && b < 20)
					b = 0;

				if (r > 200 && r < 255)
					r = 255;
				if (g > 200 && g < 255)
					g = 255;
				if (b > 200 && b < 255)
					b = 255;
				if (Color(r,g,b) == black_color)
				{
					f[i][j] = 0;
				}
				else
				{
					f[i][j] = 1;
				}
				p1 += pixel_size;
			}
			p2 += pixel_size;
		}

		window.display();
	}
	return 0;
}