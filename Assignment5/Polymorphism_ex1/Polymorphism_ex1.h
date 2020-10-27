#pragma once

class Animal
{
public:
	virtual void Eat();
};

class Bird : public Animal
{
public:
	void Eat();
};