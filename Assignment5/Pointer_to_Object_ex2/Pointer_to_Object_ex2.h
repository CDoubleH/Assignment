#pragma once
class Animal
{
public:
	void Eat();
};

class Bird : public Animal
{
public:
	void Fly();
};

class Eagle : public Bird
{
public:
	void Hunt();
};