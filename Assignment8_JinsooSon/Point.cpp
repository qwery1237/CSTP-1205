#include "Point.h"

Point::Point() {
	x = 0;
	y = 0;

}
Point::Point(int x, int y) {
	Set(x, y);
}
Point::Point(Point const& src) {
	x = src.x;
	y = src.y;
}
int Point::GetX() {
	return x;
}

int Point::GetY() {
	return y;
}

void Point::Set(int x, int y) {
	if (x < -100) x = -100;
	if (y < -100) y = -100;
	if (x > 100) x = 100;
	if (y > 100) y = 100;
	this->x = x;
	this->y = y;
}

void Point::SetX(int x) {
	if (x < -100) x = -100;
	if (x > 100) x = 100;
	this->x = x;
}
void Point::SetY(int y) {
	if (y < -100) y = -100;
	if (y > 100) y = 100;
	this->y = y;
}