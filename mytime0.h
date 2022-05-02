//mytime0.h    time class  before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_
#include<iostream>
class Time
{
public:
	Time();//�޲ι���
	Time(int h,int m=0);//�вι���//Ĭ�ϲ���Ҫд������
	//Time( t);
	void addMin(int m);//���Ӽ�
	void addHour(int h);//Сʱ��
	void reset(int h=0,int m=0);//����ʱ��//Ĭ�ϲ���Ҫд������
	Time operator+(const Time & t);//ʱ�����
	Time operator-(const Time & t);//��
	Time operator*(double);//��
	friend Time operator*(double num,Time &t)
	{
		return t*num;
	}//��
	friend std::ostream & operator<<(std::ostream &os,Time &t);
	void show() const;//չʾʱ��
private:
	int _hour;//Сʱ
	int _minute;//����
};

#endif