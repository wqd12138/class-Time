//useTime0.cpp using the first draft of the Time class
#include<iostream>
#include"mytime0.h"


int main()
{
	Time t1;
	t1.show();
	Time t2(5,42);
	t2.show();

	Time t3(1,58);
	t3.show();

	Time t4;
	t4 = t3.sum(t2);
	t4.show();

	system("pause");
	return 0;
}