#include "pch.h"
#include "Paddle.h"


Paddle::Paddle()
{
	Paddle_Pict.loadFromFile("C:\Users\Анастасия\Desktop\Arcanoid_project\paddle.png");
	Paddle1.setTexture(Paddle_Pict);
	Paddle1.setPosition(300, 580);
}



Paddle::~Paddle()
{
}