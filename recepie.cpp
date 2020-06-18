#include <Food_item>
#include <string>


class recepie
{
private:
	
	Food_item * ingredients[];
	int * amounts;
	int num_ingredients;

public:
	recepie(int, std::string);
	recepie(Food_item[], int[]);
	~recepie();

	void file_input(std::string, Food_item[]);
	int calories();
	
};

recepie::recepie(int num, std::string inFile){

	ingredients = new Food_item[num];
	file_input(inFile, ingredients, amounts);
	
}

recepie::recepie(Food_item foods[], int amounts[]){

	ingredients = &foods;
	amounts = &amounts;

}

int recepie::calories(){

	int result = 0;

	for(int i = 0; i < num_ingredients; i++){

		result += result + ingredients[i].calories(amounts[i]);

	}

	return result;

}