#ifndef __ADVCIRCLE_H_ 
#define __ADVCIRCLE_H_

#include "MyPoint.h"

class AdvCircle
{
public:
	void setCircle(int _r, int _x0, int _y0);
	int judge(MyPoint &myp);

private:
	int r;
	int x0;
	int y0;
};

#endif