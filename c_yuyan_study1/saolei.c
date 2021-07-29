#include<stdio.h>
void game() {

}
void meu() {
	printf("************************\n");
	printf("******* 开始:1 *********\n");
	printf("******* 退出:0 *********\n");
	printf("************************\n");
	int intum = 0;
	printf("请输入:>");
	scanf_s("%d", &intum);//输入的是一个整形。
	switch (intum) {
	case 1:
		printf("开始游戏\n");
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
}
int main() {
	meu();
	return 0;
}