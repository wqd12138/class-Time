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
Time Time::sum(const Time & t)//ʱ�����
{
	Time sum;
	sum._minute = this->_minute +t._minute;
	sum._hour = this->_hour + t._hour + sum._minute/60;
	sum._minute %=60;
	return sum;//���ܷ���һ���ֲ�����������ʱ���������
}
void Time::show() const//չʾʱ��
{
	std::cout<<_hour<<" hours "<<_minute<<" minutes"<<std::endl;
}