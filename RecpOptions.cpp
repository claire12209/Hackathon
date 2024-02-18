#include "Buttons.h"



sf::Text Recipie_options(Linked_list dairy, Linked_list produce, Linked_list dry, Linked_list protien) {
	{


		sf::Font font;
		font.loadFromFile("Bonello-Regular.otf");
		sf::Text instructions;
		instructions.setFont(font);
		instructions.setOutlineColor(sf::Color::Black);
		instructions.setOutlineThickness(4);
		instructions.setPosition(500, 200);
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////DAIRY
		if (dairy.find("milk"))
		{
			if (dry.find("cereal"))
			{
				instructions.setString("recipe: make cereal with milk in a bowl\n");
				return instructions;
			}
			if (produce.isempty() == true && protien.isempty() == true && dry.isempty() == true)
			{
				instructions.setString("just milk? dang hope you have a glass");
				return instructions;
			}
			instructions.setString("a glass of milk");
			return instructions;
		}
		if (dairy.find("cheese"))
		{
			if (dry.find("bread"))
			{
				if (protien.find("lunchmeat"))
				{
					if (produce.find("lettuce") || produce.find("tomato"))
					{
						instructions.setString("recipe: a basic sandwich with lunchmeant\nrecommend: tomato and/or letuce\n");
						return instructions;
					}
					instructions.setString("meat and cheese sandwich");
					return instructions;
				}
				instructions.setString("Toast");
				return instructions;

			}
			if (dry.find("buns"))
			{
				instructions.setString("grilled with BUNS!!!");
				return instructions;
			}
			instructions.setString("CheeseSticks");
		}

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////PROTIEN
		if (protien.find("bacon"))
		{
			if (dry.find("bread"))
			{
				if (produce.find("lettuce") && produce.find("tomato"))
				{
					instructions.setString("recipe: a BLT(bacon, lettuce & tomato)\nrecommend: any sauce like mayo or musturd\n");
					return instructions;
				}
				instructions.setString("Toast And bacon");
				return instructions;
			}
			instructions.setString("Bacon Strips");
			return instructions;
		}

		if (protien.find("chicken"))
		{
			if (dairy.find("butter") && dry.find("rice"))
			{
				instructions.setString("recipe:buttered chicken & rice\n");
				return instructions;
			}
			if (dairy.find("butter") && dry.find("noodles"))
			{
				instructions.setString("recipe:buttered chicken & noodles\n");
				return instructions;
			}
			if (dry.find("buns"))
			{
				instructions.setString("recipe: a chicken burger\n recommend: some sauce like musturd or similar to that");
				return instructions;
			}
			if (dairy.find("butter") && (produce.find("onions") || produce.find("mushrooms") || produce.find("carrots")))
			{
				instructions.setString("recipe:sauteed chicken with veggies\n");
				return instructions;
			}
		}
		if (protien.find("beans"))
		{
			instructions.setString("baked beans\n");
			return instructions;
		}
		if (protien.find("fish"))
		{
			if (dairy.find("butter"))
			{
				instructions.setString("recipe: sauteed fish\n");
				if (produce.find("mushrooms"))
				{
					instructions.setString("recipe: sauteed fish with mushrooms\n");
					return instructions;
				}
				return instructions;
			}
		}
		if (protien.find("pork"))
		{
			instructions.setString("pork ribs");
			return instructions;
		}
		if (protien.find("tofu"))
		{
			if (dry.find("noodles"))
			{
				instructions.setString("recipe: noodles with tofu\n");
				return instructions;
			}
			instructions.setString("Tofu");
			return instructions;
		}
		if (protien.find("beef"))
		{
			if (dry.find("buns"))
			{
				instructions.setString("recipe: hamburger\n");
				return instructions;
			}
			if (dry.find("buns") && dairy.find("cheese"))
			{
				instructions.setString("recipe: american cheese burger\n");
				return instructions;
			}
			if (dry.find("buns") && dairy.find("cheese") && (produce.find("tomato") || produce.find("onions") || produce.find("lettuce")))
			{
				instructions.setString("recipe: american cheese burger with vegie toppings(mushrooms and/or onions)\n");
				return instructions;
			}
			if (dairy.find("heavy cream") && dry.find("noodles"))
			{
				instructions.setString("recipe: beef stroginof\n");
				return instructions;
			}
			if (produce.find("green beans") || produce.find("carrots") || produce.find("potatos"))
			{
				instructions.setString("beef stake with vegies on the side\n");
				return instructions;
			}
			instructions.setString("beef stake\n");
			//instructions.setString("beef ribs");
			return instructions;
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////DRY
		if (dry.find("noodles"))
		{
			instructions.setString("just noodles");
			if (protien.find("chicken"))
			{
				instructions.setString("chicken & noodles\n");
				return instructions;

			}
			instructions.setString("Butter Noodles");
			return instructions;

		}
		if (dry.find("nuts"))
		{
			instructions.setString("just nuts\n");
			return instructions;
		}
		instructions.setString("Error");
		return instructions;
	}
	
}