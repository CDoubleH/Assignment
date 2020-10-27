#pragma once

//부모 클래스 AClass
class Aclass
{
private:
	int num;
public:
	Aclass();
	Aclass(int a);
	~Aclass();
};
//자식 클래스 BClass와 CClass
class Bclass : public Aclass
{
private:
	int num;
public:
	Bclass();
	Bclass(int b);
	~Bclass();
};

class Cclass : public Aclass
{
private:
	int num;
public:
	Cclass();
	Cclass(int c);
	~Cclass();
};