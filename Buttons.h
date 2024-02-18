#include "ProductList.h"
#include <SFML/Graphics.hpp>


class buttons {
public:
	buttons() {
		this->n = 1;
		this->s = "NULL";
		this->b;

	}
	sf::RectangleShape getRectangle() {
		return this->b;
	}
	sf::Text singlebutton(int x, int y) {


		this->b.setFillColor(sf::Color::White); // color and size and other info
		b.setSize(sf::Vector2f(120, 25));

		b.setPosition(x, y);
		b.setOrigin(sf::Vector2f(0, 0)); // same origin
		sf::Font font;
		

		sf::Text t;
		t.setOrigin(0, 0);
		t.setCharacterSize(18);
		t.setPosition(x, y);
		t.setString(this->s);
		t.setFillColor(sf::Color::White);
		t.setFont(font);

		return t;
	


	}
	sf::FloatRect returningGlobalBounds(){
		return this->b.getGlobalBounds();
			
	}

	void setString(string s) {
		this->s = s;
	}
	int getint() {
		return this->n;
	}
	void setInt(int n) {
		this->n = n;
	}
	string returnString() {
		return this->s;
	}
	sf::RectangleShape returnRect() {
		return this->b;
	}


private:
	sf::RectangleShape b;
	string s;
	int n;

};
void pressingButtons();
sf::Text Recipie_options(Linked_list dairy, Linked_list produce, Linked_list dry, Linked_list protien);
