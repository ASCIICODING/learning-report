#include <iostream>
using namespace std;
class cRectangle
{
	public:
		int w,h;
		int area();//成员函数仅在此处声明 
		int perimeter();
		void init (int w_,int h_);
};

int cRectangle::area()
{
	return w*h;
}

int cRectangle::perimeter()
{
	return 2*(w+h);
}

int cRectangle::init(int w_,int h_)
{
	w = w_;
	h = h_;
}
//cRectangle::说明后面的函数是cRectangle类的成员函数，而非普通函数。那么，一定要通过对象、对象的指针或对象的引用才能调用 
