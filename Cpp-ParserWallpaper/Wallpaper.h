#pragma once
#include <string>

class Wallpaper
{
public:
	Wallpaper();
	Wallpaper(
		std::string article,
		std::string party,
		int price,
		int quantity
		);

	void setArticle(std::string article);
	void setParty(std::string party);
	void setPrice(int price);
	void setQuantity(int quantity);

	std::string getArticle();
	std::string getParty();
	int getPrice();
	int getQuantity();

private:
	std::string article;
	std::string party;
	int price;
	int quantity;
};

