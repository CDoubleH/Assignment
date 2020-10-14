#pragma once

class DynamicArray
{
private:	
	int mCapacity;
	int mSize;
	double* mData;

	void checkValidIndex(int i) const;

public:
	DynamicArray();  // Default Constructor
	DynamicArray(int sz, double val = 0.0);
	DynamicArray(const DynamicArray& other);  // Copy Constructor
	~DynamicArray();  // Destructor

	int Size() const;
	int Capacity() const;	
	void Reserve(int capacity);

	void Append(double data);
	void Clear(bool bResizeCapacity = false);
		
	int Find(double data) const;
	void Reverse();

	void Insert(int i, double data);
	void Remove(double data);

	double& operator[](const int i) const;
	bool operator==(const DynamicArray& other) const;
};

