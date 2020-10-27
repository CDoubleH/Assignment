#pragma once

class Pencil
{
public:
	void write();
};

class Student : public Pencil
{
public:
	void study();
};