#include "Header.hpp"
#include "Functions.hpp"

int main(void)
{
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////DAIRY
	if (dairy.string == "milk")
	{
		if (dry.string == "cereal")
		{
			printf("recipe: make cereal with milk in a bowl\n");
			return 0;
		}
		if (produce.isempty() == true, protein.isempty() == true, dry.isempty() == true)
		{
			printf("just milk? dang hope you have a glass");
			return 0;
		}
		printf("a glass of milk");
	}
	if (dairy.string == "cheese")
	{
		if (dry.string == "bread")
		{
			if (protein.string == "lunchmeat")
			{
				if (produce.string == "letuce" || produce.string == "tomato")
				{
					printf("recipe: a basic sandwich with lunchmeant\nrecommend: tomato and/or letuce\n");
				}
				printf("meat and cheese samwich");
			}
		}
		if (dry.sring == "buns")
		{
			printf("grilled with BUNS!!!");
		}
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////PROTIEN
	if (protein.string == "bacon")
	{
		if (dry.string == "bread")
		{
			if (produce.string == "letuce" && produce.string == "tomato")
			{
				printf("recipe: a BLT(bacon, lettuce & tomato)\nrecommend: any sauce like mayo or musturd\n");
			}
		}
	}
	if (protein.string == "chicken")
	{
		if (dairy.string == "butter" && dry.string == "rice")
		{
			printf("recipe:buttered chicken & rice\n");
		}
		if (dairy.string == "butter" && dry.string == "noodles")
		{
			printf("recipe:buttered chicken & noodles\n");
		}
		if (dry.string == "buns")
		{
			printf("recipe: a chicken burger\n recommend: some sauce like musturd or similar to that");
		}
		ifif(dairy.string == "butter" && (produce.string == "onions" || produce.string == "mushrooms" || produce.string == "carrots"))
		{
			printf("recipe:sauteed chicken with veggies\n");
		}
	}
	if (protein.string == "beans")
	{
		printf("baked beans\n")
	}
	if (protein.string == "fish")
	{
		if (dairy.string == "butter")
		{
			printf("recipe: sauteed fish\n");
			if (produce.string == "mushrooms")
			{
				printf("recipe: sauteed fish with mushrooms\n");
			}
		}
	}
	if (protein.string == "pork")
	{
		printf("pork ribs");
	}
	if (protein.string == "tofu")
	{
		if (dry.string == "noodles")
		{
			printf("recipe: noodles with tofu\n");
		}
	}
	if (protein.string == "beef")
	{
		if(dry.string == "buns")
		{
			printf("recipe: hamburger\n");
		}
		if (dry.string == "buns" && dairy.string == "cheese")
		{
			printf("recipe: american cheese burger\n");
		}
		if (dry.string == "buns" && dairy.string == "cheese" && (produce.string == "tomato" || produce.string == "onions" || produce.string == "lettuce"))
		{
			printf("recipe: american cheese burger with vegie toppings(mushrooms and/or onions)\n");
		}
		if (dairy.string == "hearvy cream" && dry.string == "noodles")
		{
			printf("recipe: beef stroginof\n");
		}
		if (produce.string == "green beans" || produce.string == "carrots" || produce.string == "potatos")
		{
			printf("beef stake with vegies on the side\n");
		}
		printf("beef stake\n");
		printf("beef ribs");
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////DRY
	if (dry.string == "noodles")
	{
		printf("just noodles");
		if (protein.string == "chicken")
		{
			printf("chicken & noodles\n");

		}
		
	}
	if (dry.string == "nuts")
	{
		printf("just nuts\n");
	}

	return 0;
}