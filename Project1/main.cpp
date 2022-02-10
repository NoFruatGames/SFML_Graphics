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
		for (int i = 0; i < 19; ++i)
		{
			for (int j = 0; j < 19; ++j)
			{
				int r = (int)code.getPixel(j * pixel_size, i * pixel_size).r;
				int g = (int)code.getPixel(j * pixel_size, i * pixel_size).g;
				int b = (int)code.getPixel(j * pixel_size, i * pixel_size).b;
				int a = (int)code.getPixel(j * pixel_size, i * pixel_size).a;
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
			}
		}

		window.display();
	}
	return 0;
}