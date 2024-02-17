#include "ProductList.h"

void food_conditions() {
	
	Linked_list dairy;
	Linked_list produce;
	Linked_list dry;
	Linked_list protien;
		if (dairy.isempty() == true)
		{
			if (produce.isempty() == true)
			{
				if (dry.isempty() == true)
				{
					if (protien.isempty() == true)
					{
						//no ingrdients where entered
						printf("all ingredient lists were empty");
					}
				}
				if (protien.isempty() == true)
				{
					if (dry.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (dry.isempty() == true)
			{
				if (produce.isempty() == true)
				{
					if (protien.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (protien.isempty() == true)
				{
					if (produce.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (protien.isempty() == true)
			{
				if (produce.isempty() == true)
				{
					if (dry.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (dry.isempty() == true)
				{
					if (produce.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
		}

		else if (produce.isempty() == true)
		{
			if (dairy.isempty() == true)
			{
				if (protien.isempty() == true)
				{
					if (dry.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (dry.isempty() == true)
				{
					if (protien.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (protien.isempty() == true)
			{
				if (dry.isempty() == true)
				{
					if (dairy.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (dairy.isempty() == true)
				{
					if (dry.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (dry.isempty() == true)
			{
				if (dairy.isempty() == true)
				{
					if (protien.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (protien.isempty() == true)
				{
					if (dairy.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
		}

		else if (dry.isempty() == true)
		{
			if (dairy.isempty() == true)
			{
				if (produce.isempty() == true)
				{
					if (protien.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (protien.isempty() == true)
				{
					if (produce.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (produce.isempty() == true)
			{
				if (dairy.isempty() == true)
				{
					if (protien.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}

				}
				if (protien.isempty() == true)
				{
					if (dairy.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (protien.isempty() == true)
			{
				if (dairy.isempty() == true)
				{
					if (produce.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (produce.isempty() == true)
				{
					if (dairy.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
		}

		else if (protien.isempty() == true)
		{
			if (dairy.isempty() == true)
			{
				if (produce.isempty() == true)
				{
					if (dry.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (dry.isempty() == true)
				{
					if (produce.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (produce.isempty() == true)
			{
				if (dairy.isempty() == true)
				{
					if (dry.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (dry.isempty() == true)
				{
					if (dairy.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
			if (dry.isempty() == true)
			{
				if (dairy.isempty() == true)
				{
					if (produce.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
				if (produce.isempty() == true)
				{
					if (dairy.isempty() == true)
					{
						printf("all ingredient lists were empty");
					}
				}
			}
		}


}