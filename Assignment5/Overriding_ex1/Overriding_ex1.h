#pragma once
#include <iostream>
using namespace std;

//부모 클래스 Electronics
class Electronics
{
public:
	void use_electricity();
};

//자식 클래스 Computer, Washer
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