//mytime0.h    time class  before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time
{
public:
	Time();//�޲ι���
	Time(int h,int m=0);//�вι���//Ĭ�ϲ���Ҫд������
	void addMin(int m);//���Ӽ�
	void addHour(int h);//Сʱ��
	void reset(int h=0,int m=0);//����ʱ��//Ĭ�ϲ���Ҫд������
	Time sum(const Time & t);//ʱ�����
	void show() const;//չʾʱ��
private:
	int _hour;//Сʱ
	int _minute;//����
};
#endif