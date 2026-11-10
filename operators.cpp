// operators.cpp: определяет точку входа для приложения.
//

#include <memory>
#include "operators.h"
#include "include/point.hpp"
#include "include/smptr.hpp"
#include "include/array.hpp"

using namespace std;

int main()
{
	point p(1, 2);
	point p2(1, 2);
	oprs::array<point> arr_obj(8);

	smptr<point> p3(new point(1, 2));
	smptr<point> p4(new point(1, 2));

	arr_obj.add(p);
	arr_obj.add(p2);

	arr_obj[1].print();

	return 0;
}
