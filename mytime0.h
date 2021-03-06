//mytime0.h    time class  before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_
#include<iostream>
class Time
{
public:
	Time();//无参构造
	Time(int h,int m=0);//有参构造//默认参数要写在声明
	//Time( t);
	void addMin(int m);//分钟加
	void addHour(int h);//小时加
	void reset(int h=0,int m=0);//重设时分//默认参数要写在声明
	Time operator+(const Time & t);//时间相加
	Time operator-(const Time & t);//减
	Time operator*(double);//乘
	friend Time operator*(double num,Time &t)
	{
		return t*num;
	}//乘
	friend std::ostream & operator<<(std::ostream &os,Time &t);
	void show() const;//展示时间
private:
	int _hour;//小时
	int _minute;//分钟
};

#endif