#pragma once

class Character
{
public:
	virtual void skill_1() = 0;
};

class Magician : public Character
{
public:
	void skill_1();
};

class Knight : public Character
{
public:
	void skill_1();
};