#pragma once
#include <iostream>
using namespace std;

//�θ� Ŭ���� Electronics
class Electronics
{
public:
	void use_electricity();
};

//�ڽ� Ŭ���� Computer, Washer
class Computer : public Electronics
{
public:
	void use_electricity();
};
class Washer : public Electronics
{
public:
	void use_electricity();
};