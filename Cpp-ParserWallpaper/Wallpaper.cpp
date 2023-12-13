#include "Wallpaper.h"

Wallpaper::Wallpaper()
{
	this->article = "";
	this->party = "";
	this->price = 0;
	this->quantity = 0;
}

Wallpaper::Wallpaper(std::string article, std::string party, int price, int quantity)
{
	this->article = article;
	this->party = party;
	this->price =price;
	this->quantity = quantity;
}

void Wallpaper::setArticle(std::string article)
{
	this->article = article;
}

void Wallpaper::setParty(std::string party)
{
	this->party = party;
}

void Wallpaper::setPrice(int price)
{
	this->price = price;
}

void Wallpaper::setQuantity(int quantity)
{
	this->quantity = quantity;
}

std::string Wallpaper::getArticle()
{
	return this->article;
}

std::string Wallpaper::getParty()
{
	return this->party;
}

int Wallpaper::getPrice()
{
	return this->price;
}

int Wallpaper::getQuantity()
{
	return this->quantity;
}
