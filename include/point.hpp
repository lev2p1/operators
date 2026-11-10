#pragma once

class point {
	int x, y;
public:
	point() = default;
	point(int x, int y);
	int getX();
	int getY();

	bool equal(point& p) const;
	bool operator==(point p) const;
	bool operator<(point p) const;
	bool operator>(point p) const;
	bool operator<=(point p) const;
	bool operator>=(point p) const;

	void print() const {
		std::cout << "point(" << x << ", " << y << ")" << std::endl;
	}
};