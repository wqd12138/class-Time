//mytime0.cpp    implementing Time methods
#include<iostream>
#include"mytime0.h"

Time::Time()//�޲ι���
{
	_hour = _minute =0;
}
Time::Time(int h,int m)//�вι���
{
	this->_hour =h;
	this->_minute =m;
}
void Time::addMin(int m)//���Ӽ�
{
	this->_minute += m;
	//������ӳ���60 Сʱ��
	_hour += _minute/60;
	_minute %= 60;
}
void Time::addHour(int h)//Сʱ��
{
		_hour += h;
}

void Time::reset(int h,int m)//����ʱ��
{
	_hour = h;
	_minute = m;
}
Time Time::operator+(const Time & t)//ʱ�����
{
	Time sum;
	sum._minute = this->_minute +t._minute;
	sum._hour = this->_hour + t._hour + sum._minute/60;
	sum._minute %=60;
	return sum;//���ܷ���һ���ֲ�����������ʱ���������
}
Time Time::operator-(const Time & t)//ʱ�����
{
	Time diff;
	int sum1,sum2;
	sum1 =t._minute + t._hour*60;
	sum2 =this->_minute + this->_hour*60;
	diff._hour = (sum2 - sum1)/60;
	diff._minute = (sum2 - sum1)%60;

	return diff;
}
Time Time::operator*(double num)//ʱ�����
{
	Time mul;
	long sum;
	sum =_minute*num + _hour*60*num;
	mul._hour = sum/60;
	mul._minute = sum%60;

	return mul;
}
void Time::show() const//չʾʱ��
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