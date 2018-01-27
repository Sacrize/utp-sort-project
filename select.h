#pragma once

class Select
{
	enum direction { ASC, DESC };

private:
	void sortMin(int [], int);
	void sortMax(int [], int);

public:
	Select(int [], int, direction = ASC);


};