#pragma once

//상위 클래스 Electronics
class Electronics
{
public:
	void use_electricity();
};

//하위 클래스 Computer, Washer
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