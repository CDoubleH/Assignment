#pragma once

//���� Ŭ���� Electronics
class Electronics
{
public:
	void use_electricity();
};

//���� Ŭ���� Computer, Washer
class Computer : public Electronics
{
public:
	void Calculate();
};
class Washer : public Electronics
{
public:
	void Wash();
};