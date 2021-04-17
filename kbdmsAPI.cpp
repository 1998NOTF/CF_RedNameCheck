#include "cfred.h"

void fire(int fireDelay, int mouseDownTime,int afterDelay) {
	Sleep(fireDelay);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//����������
	Sleep(mouseDownTime);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//�ɿ�������
	Sleep(afterDelay);
}

void openScope(int fireDelay, int mouseDownTime, int afterDelay) {
	Sleep(fireDelay);
	mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);//����������
	Sleep(mouseDownTime);
	mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);//�ɿ�������
	Sleep(afterDelay);
}

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
){
	Sleep(fireDelay);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//����������
	Sleep(downTime);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//�ɿ�������
	Sleep(afterFireDelayTime);
	mouse_event(MOUSEEVENTF_WHEEL, 0, 0, 120, 0);//�������Ϲ�
	Sleep(afterRollUpTime);
	mouse_event(MOUSEEVENTF_WHEEL, 0, 0, -120, 0);//�������Ϲ�
	Sleep(afterDelay);
}

