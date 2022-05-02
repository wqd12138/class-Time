//mytime0.cpp    implementing Time methods
#include<iostream>
#include"mytime0.h"

Time::Time()//无参构造
{
	_hour = _minute =0;
}
Time::Time(int h,int m)//有参构造
{
	this->_hour =h;
	this->_minute =m;
}
void Time::addMin(int m)//分钟加
{
	this->_minute += m;
	//如果分钟超过60 小时加
	_hour += _minute/60;
	_minute %= 60;
}
void Time::addHour(int h)//小时加
{
		_hour += h;
}

void Time::reset(int h,int m)//重设时分
{
	_hour = h;
	_minute = m;
}
Time Time::operator+(const Time & t)//时间相加
{
	Time sum;
	sum._minute = this->_minute +t._minute;
	sum._hour = this->_hour + t._hour + sum._minute/60;
	sum._minute %=60;
	return sum;//不能返回一个局部变量或者临时对象的引用
}
Time Time::operator-(const Time & t)//时间相加
{
	Time diff;
	int sum1,sum2;
	sum1 =t._minute + t._hour*60;
	sum2 =this->_minute + this->_hour*60;
	diff._hour = (sum2 - sum1)/60;
	diff._minute = (sum2 - sum1)%60;

	return diff;
}
Time Time::operator*(double num)//时间相加
{
	Time mul;
	long sum;
	sum =_minute*num + _hour*60*num;
	mul._hour = sum/60;
	mul._minute = sum%60;

	return mul;
}
void Time::show() const//展示时间
{
	std::cout<<_hour<<" hours "<<_minute<<" minutes"<<std::endl;
}
//Time operator*(double num,const Time & t)
//{
//	Time mul;
//	long sum;
//	sum =t._minute*num + t._hour*60*num;
//	mul._hour = sum/60;
//	mul._minute = sum%60;
//
//	return mul;
//}

Time operator*(double num,Time  t)
{

	return t*num;
}