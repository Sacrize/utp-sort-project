#pragma once

class Quick
{
	enum direction { ASC, DESC };

private:
	void sort(int [], int, int);
	int partition(int [], int, int);

public:
	Quick(int [], int, direction = ASC);

};