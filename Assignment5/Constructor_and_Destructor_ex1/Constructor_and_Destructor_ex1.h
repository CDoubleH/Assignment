#pragma once

//�θ� Ŭ���� AClass
class Aclass
{
private:
	int num;
public:
	Aclass();
	Aclass(int a);
	~Aclass();
};
//�ڽ� Ŭ���� BClass�� CClass
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