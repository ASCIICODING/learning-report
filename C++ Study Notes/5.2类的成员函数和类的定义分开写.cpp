#include <iostream>
using namespace std;
class cRectangle
{
	public:
		int w,h;
		int area();//��Ա�������ڴ˴����� 
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
//cRectangle::˵������ĺ�����cRectangle��ĳ�Ա������������ͨ��������ô��һ��Ҫͨ�����󡢶����ָ����������ò��ܵ��� 
