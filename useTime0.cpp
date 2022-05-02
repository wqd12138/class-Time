//useTime0.cpp using the first draft of the Time class
#include<iostream>
#include"mytime0.h"


int main()
{
	//Time t1;
	//t1.show();//0 hours 0 minutes
	//Time t2(5,42);
	//t2.show();//5 hours 42 minutes

	//Time t3(1,58);
	//t3.show();//1 hours 58 minutes

	//Time t4;
	//t4 = t2+t3;//没重载之前的t4 = t3.sum(t2);
	//
	//t4.show();//7 hours 40 minutes
	//t4 = t2+t3+t2;//运算符左边的对象是调用对象，右边对象是作为参数被传递的对象
	//t4.show();

	//Time a(t2);
	//a.show();

	//Time b;
	//b=a;
	//b.show();
	Time t1(2,12);
	Time t2(1,2);
	t1.show();
	t2.show();
	Time t3=t1 - t2;
	t3.show();
	Time t4=t1*5.6;//要求t1在前，5.6在后，因为重载运算符的顺序是这样的
	t4.show();
	Time t5=1.2*t1;//友元重载*
	t5.show();

	Time t6=1.5*t1*2.5;
	t6.show();

	/*int num =100;
	const int & num1 =num;
	num1 =200;
	cout<<num<endl;*/
	system("pause");
	return 0;
}