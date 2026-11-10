#include "../include/point.hpp"

point::point(int x, int y) : x(x), y(y) {}

int point::getX() { return x; }
int point::getY() { return y; }

bool point::equal(point& p) const {
	return (x == p.x && y == p.y);
}

bool point::operator==(point p) const {
	return equal(p);
}

bool point::operator<(point p) const {
	if (x < p.x) {
		return true;
	}
	if (x > p.x) {
		return false;
	}
	return y < p.y;
}

bool point::operator>(point p) const
{
	return !(*this < p) && !(*this == p);
}

bool point::operator<=(point p) const
{
	return !(*this > p);
}

bool point::operator>=(point p) const
{
	return !(*this < p);
}