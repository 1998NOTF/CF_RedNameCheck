#pragma once
#include <stdio.h>
#include <windows.h>
#include <graphics.h>

typedef struct {
	COLORREF color;
	short x;
	short y;
}CHECKPOINT;

/*
��ʼ����Ļ��ɨ����
*/
HDC initHDC();

/*
��ʼ�����
checkPoint[]:����ʼ����CHECKPOINT���͵�����
checkPointNum:����ʼ���ļ�����
*/
void initCheckPoints(CHECKPOINT checkPoint[],int checkPointNum);

/*
	�ѻ�ǹ����
	fireDelay:�����ӳ�
	mouseDownTime:��갴��֮��ĵȴ�ʱ��
	afterdelay:������Щ������ĵȴ�ʱ��
*/
void openScope(int fireDelay, int mouseDownTime, int afterDelay);

/*
	��ͨǹе�Ŀ���
	fireDelay:��ǹ�ӳ�
	mouseDownTime:��갴��֮��ĵȴ�ʱ��
	afterdelay:������Щ������ĵȴ�ʱ��
*/
void fire(int fireDelay, int mouseDownTime, int afterDelay);

/*
	�ѻ�ǹ��ǹ����ǹ����
	int fireDelay:��ǹ�ӳ�
	int downTime,���������ĵȴ�ʱ��
	int afterFireDelayTime,�ɿ������ĵȴ�ʱ��,
	int afterRollUpTime,�����Ϲ���ĵȴ�ʱ��,
	int afterRollDownTime�����¹���ĵȴ�ʱ�䣬ͬʱҲ����ǹ��Ŀ����ȴ�ʱ��
	int afterDelay,������Щ������ĵȴ�ʱ��
*/
void fireAndSwitchGun(
	//��ǹ�ӳ�
	int fireDelay,
	//���������ĵȴ�ʱ��
	int downTime,
	//�ɿ������ĵȴ�ʱ��
	int afterFireDelayTime,
	//�����Ϲ���ĵȴ�ʱ��
	int afterRollUpTime,
	//������Щ������ĵȴ�ʱ��
	int afterDelay
);

/*
����������
����ͨ������ĸ���
*/
int checkinPoints(HDC hdc, CHECKPOINT checkPoint[], int checkPointNum);

/*
��鵱ǰ�Ƿ�Ϊ�ѻ�ǹ�Ŀ���״̬
*/
bool isSniperRifle(HDC hdc);
