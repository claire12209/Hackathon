#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;


class buttonArray {
private:
	sf::Sprite s[13][5];


public:
	buttonArray() {


	}
	void setSprites(sf::Texture &t) {
		int x = 1, y = 1;
		
		
		while (y <= 4) {
			while (x <= 8) {
			

				s[x][y].setTexture(t);
				s[x][y].setOrigin(sf::Vector2f(0, 0));
				s[x][y].setPosition(sf::Vector2f((210 * y) + 100, (75 * x) + 150));
				s[x][y].setScale(sf::Vector2f(0.15, 0.1));
				++x;
			

			}
			x = 1;
			++y;
		}
		



		


	}
	void printingSprites(sf::RenderWindow& w) {
		int x = 1, y= 1;
		while (y <= 4) {

			while (x <= 10) {
				w.draw(this->s[x][y]);
				++x;
			}
			x = 1;
			++y;
		}
		
			
		
			

	}
	void checkingForChanges(sf:: Texture &t, sf:: RectangleShape &r) {

		int x = 1, y = 1;
		while (y <= 4) {

			while (x <= 10) {
				if (this->s[x][y].getGlobalBounds().intersects(r.getGlobalBounds())) {
					this->s[x][y].setTexture(t);
					++x;
				}
				else {
					++x;
				}
			}
			x = 1;
			++y;
		}


	}



};