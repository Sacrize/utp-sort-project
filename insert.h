#pragma once

class Insert
{
	enum direction { ASC, DESC };

private:
	void sort(int[], int);

public:
	Insert(int[], int, direction = ASC);

};