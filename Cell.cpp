#include "Cell.h"

Cell::Cell(double l, double t, double r, double b):
	mLeft(l), mTop(t), mRight(r), mBottom(b){
}

CRect Cell::MakeDrawRect(double left, double bottom, double right, double top){
	CRect rect;
	//TODO: FIX
	GetClientRect.(&rect);
	int w = rect.Width();
	int h = rect.Height();

	// Make it so the BOTTOM left corner is 0,0:
	bottom = H - bottom;
	top = H - top;

	CRect drawRect((int)(w/W*left), (int)(h/H*bottom), (int)(w/W*right), (int)(h/H*top));
	return drawRect;
}

void Cell::Draw(CDC &dc) {
	dc.Rectangle(MakeDrawRect(mLeft, mTop, mRight, mBottom));


}

//bool isEmpty();

//bool isClicked(int x, int y);//In Pixel Coordinates
