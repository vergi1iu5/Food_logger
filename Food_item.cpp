#include <string>


class Food_item{

private:

	double base_weight;
	int fats, proteins, carbs;
	std::string name;

public:

	Food_item(std::string);
	Food_item(std::string, int, int, int, int);
	int get_fats(){return fats;}
	int get_proteins(){return proteins;}
	int get_carbs(){return carbs;}
	int calories(int);

};

Food_item::Food_item(std::string n){
	fats = 0;
	proteins = 0;
	carbs = 0;
	name = n;
}

Food_item::Food_item(std::string n, int bw, int f, int p, int c){

	base_weight = bw;
	fats = f;
	proteins = p;
	carbs = c;
	name = n;

}

int Food_item::calories(int amount){

	int calories = fats*8 + proteins*4 + carbs*4;

	double ratio = amount / base_weight; 

	return ratio * calories;
}

int main(){
	return 0;
}