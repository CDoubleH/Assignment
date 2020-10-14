#include "DynamicArray.h"
#include <stdexcept>

#include <iostream>
using namespace std;


void DynamicArray::checkValidIndex(int i) const
{
	if (i < 0 || mSize <= i)
	{
		throw std::out_of_range("The index is out of range.");
	}	
}

int DynamicArray::Size() const
{
	return mSize;
}

int DynamicArray::Capacity() const
{
	return mCapacity;
}

bool DynamicArray::operator==(const DynamicArray& other) const
{
	if (mSize != other.Size())
	{
		return false;
	} 

	for (int i = 0; i < mSize; i++)
	{
		if (mData[i] != other[i])
			return false;
	}

	return true;
}

double& DynamicArray::operator[](const int i) const
{
	checkValidIndex(i);
	return mData[i];
}


DynamicArray::DynamicArray()
	: mSize(0), mCapacity(10)
{
	mData = new double[mCapacity];
}

DynamicArray::DynamicArray(int sz, double val)
	: mSize(sz), mCapacity(2*sz)
{
	mData = new double[mCapacity];
	for (int i = 0;i < mSize;i++)
		mData[i] = val;
}

DynamicArray::DynamicArray(const DynamicArray& other)
	: mSize(other.mSize), mCapacity(other.mCapacity)
{
	mData = new double[mCapacity];
	for (int i = 0;i < mSize;i++)
		mData[i] = other.mData[i];
}

DynamicArray::~DynamicArray()
{
	if (mData)
		delete[] mData;
}

void DynamicArray::Reserve(int capacity)
{
	if (capacity <= 0)
	{
		throw std::out_of_range("The capacity should be greater than 0.");
	}

	if (mCapacity < capacity)
	{ 
		mCapacity = capacity;
		
		if (mData)  // if mData has a memory space for some elements
		{
			double* temp = new double[mCapacity];
			// You should copy the existing elements after allocating a new memory space.
			for (int i = 0;i < mSize;i++)
			{
				temp[i] = mData[i];
			}
			delete[] mData;
			mData = temp;
		}
		else {  // if mData has no memory space (mData == nullptr)
			mData = new double[mCapacity];
			// All you have to do is to allocate a new memory space.
		}
	}
	
}

void DynamicArray::Append(double data)
{
	// Reserve a memory space
	if (mCapacity == 0)
		Reserve(10);
	else if (mCapacity <= 2 * mSize)
		Reserve(2 * mCapacity);  // Reserve twice the existing capacity.

	mData[mSize++] = data;
}

void DynamicArray::Clear(bool bResizeCapacity)
{
	mSize = 0;
	if (bResizeCapacity)
	{
		mCapacity = 0;
		delete[] mData;
	}
}

int DynamicArray::Find(double data) const
{
	for (int i = 0;i <= mSize;i++)
	{
		if (mData[i] == data)
			return i;
	}
	return -1;
}


void DynamicArray::Reverse()
{
	int L = 0, R = mSize -1;
	for (int i = 0;i < mSize / 2;i++)
	{
		double temp = mData[L];
		mData[L] = mData[R];
		mData[R] = temp;
		L++;
		R--;
	}
}


void DynamicArray::Insert(int i, double data)
{
	if (mSize == 0 && i == 0) {
		Append(data);
		return;
	}

	checkValidIndex(i);  // Check the index;
	
	// Reserve a memory space
	// [!] Do not call Reserve() function to prevent redundant copy operations.
	if (mCapacity == 0)
		mCapacity = 10;
	else if (mCapacity <= 2 * mSize)
		mCapacity *= 2;  // Reserve twice the existing capacity.

	double* temp = new double[mCapacity];
	for (int a = 0, b = 0;a < mSize;a++)
	{
		if (a == i)
		{
			temp[i] = data;
			b = 1;
		}
		temp[i] = mData[i - b];
	}
	delete[] mData;
	mData = temp;
	
}

void DynamicArray::Remove(double data)
{
	auto i = Find(data);
	if (i < 0)
		return;

	for (int a = i;a < mSize-1;a++)
	{
		mData[a] = mData[a + 1];
	}
	mSize--;
}
