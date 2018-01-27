#pragma once

class Bubble
{
	enum direction { ASC, DESC };

private:
	void sortASC(int [], int);
	void sortDESC(int [], int);
	void swap(int [], int, int);

public:
	Bubble(int [], int, direction = ASC);


};