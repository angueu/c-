#include<stdio.h>
void game() {

}
void meu() {
	printf("************************\n");
	printf("******* ��ʼ:1 *********\n");
	printf("******* �˳�:0 *********\n");
	printf("************************\n");
	int intum = 0;
	printf("������:>");
	scanf_s("%d", &intum);//�������һ�����Ρ�
	switch (intum) {
	case 1:
		printf("��ʼ��Ϸ\n");
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("�����������������\n");
		break;
	}
}
int main() {
	meu();
	return 0;
}