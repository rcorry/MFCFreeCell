#pragma once
#include <vector>
#include "pch.h"

const double W = 100;
const double H = 100;

class Cell {
public:
	Cell(double l, double t, double r, double b);
	void Draw(CDC &card);
	CRect MakeDrawRect(double left, double bottom, double right, double top);
	//bool isEmpty();
	//bool isClicked(int x, int y);//In Pixel Coordinates

private:
	//std::vector<int> mCards;
	double mLeft,mTop,mRight,mBottom;//In World Coordinates

};
