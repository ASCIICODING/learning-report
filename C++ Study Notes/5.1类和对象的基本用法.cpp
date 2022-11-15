/*
写一个程序，输入矩形的长和宽，输出面积和周长
若用一个类来表示“矩形”这种东西，“抽象”的方法：
矩形的属性是长和宽，因此需要两个变量，分别表示长和宽
一个矩形的行为有设置长和宽、算面积、算周长等
这三种行为，可以各用一个函数来实现，他们都需要用长和宽这两个变量。
将长、宽两个变量和设置长宽、求面积、算周长三个函数“封装”在一起，就可以形成“矩形类”
长、宽成为该"矩形类"的"成员变量"，三个函数成为该类的"成员函数"。成员变量和成员函数统称为类的成员 
*/
#include <iostream>
using namespace std;

class cRectangle
{
	public:
		int w,h;
		int area ()
		{
			return w*h;
		}
		int perimeter ()
		{
			return 2*(w+h);
		}
		void init (int w_,int h_)
		{
			w = w_;
			h = h_;
		}
};//必须有分号 

void print (cRectangle &r)//引用传入对象 
{
	cout<<r.area()<<" "<<r.perimeter();
}

int main()
{
	int w,h;
	cRectangle r;//r是一个对象
	/*
	类定义出来的变量，也称为类的实例，就是我们所说的“对象”。
	C++中，类的名字就是用户自定义的类型的名字。可以像使用基本类型那样使用它。cRectangle就是一种用户自定义的类型。 
	对象的内存分配：和结构变量一样，对象所占用的内存空间大小，等于所有成员变量的大小之和。
	对象中的内存只包含成员变量，不包含成员函数，如sizeof (cRectangle)==8。
	每个对象各有自己的存储空间。一个对象的某个成员变量改变，不会影响到另一个对象。 
	*/ 
	/*
	和结构变量一样，对象之间可以用"="进行赋值，但是不能用"=="、"!="、">"、"<"、">="、"<="进行比较，除非这些运算符经过了"重载"。 
	*/
	cin>>w>>h;
	r.init(w,h);
	cout<<r.area()<<endl<<r.perimeter();
	//使用类的成员变量和成员函数 
	cRectangle  r1,r2;
	//用法一：对象名.成员名 
	r1.w = 5;
	r2.init(5,4);//init函数作用在r2上，即init函数执行期间访问的w和h是属于r2这个对象的，执行r2.init不会影响到r1 
	//用法二：指针->成员名
	cRectangle r3,r4;
	cRectangle *p1 = &r3;
	cRectangle *p2 = &r4;
	p1->w = 5;
	p2->init(5,4);//init作用在p2指向的对象上
	//用法三：引用名.成员名
	cRectangle r5;
	cRectangle &rr = r5;
	rr.w = 5;
	rr.init(5,4);//rr的值变了，r2的值也会变
	print (r5);  
	return 0;
}
