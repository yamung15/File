#pragma warning (disable: 4996)//4996���� ����
#include <stdio.h >
#include <stdlib.h >
#include <Windows.h >
#include <time.h >
#include <conio.h >
int main() {
	int com = 1;//��ǻ�� ���
	int comsel;//��ǻ�� ���ſ���
	int cost[7] = { 12000, 10000, 8000, 6500, 3000, 2000, 1200 };//���� ����
	int home;//�� �̵�
	int help;//����
	int hgy[7] = { 100, 80, 65, 40, 30, 20, 15 };//���� ȸ���ɷ�
	int hungry = 100;//���
	char items[7][50] = { "�Ұ��", "����", "ġŲ", "�ܹ���", "������", "����", "���" };//����
	int league;//����
	int mon = 1000000;//��
	int outside;//�ܺ� �̵�
	int pay = 0;//1�� �� ���� 
	int pay2;//2�� �� ����
	char rank[9][100] = { "�����ũ", "�����", "�ǹ�", "���", "�÷�Ƽ��", "���̾�", "������", "�׷��帶����", "��Ŀ" };//��ũ
	int rank2 = 0;//��ũ ���� ����
	int rb;//��ġ �� ����
	int sub = 34;//������
	int tutorial;//Ʃ�丮��
	int type;//���� ���� ����
	int zirm;//��ǻ�� ��� 2�� 
	char name[10000];
	printf("������ �ε����Դϴ�.\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�..\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�...\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�.\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�..\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�...\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�.\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�..\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�...\n"); Sleep(100);	system("cls");
	printf("������ �ε����Դϴ�.\n"); Sleep(100);	system("cls");
	printf("������ܿ��� ������ ���� �ٶ��ϴ�"); Sleep(1000);	system("cls");
	printf("\n");
	printf("����ڡ��   ��ڡ��١����\n"); Sleep(100);
	printf("�����   ��١���ڡ��١��\n"); Sleep(100);
	printf("���١��   ��Ʃ��   ��� �ڡ��\n"); Sleep(100);
	printf("���ڡ��� Ű���  ���ڡ���\n"); Sleep(100);
	printf("����ڡ�١��   ���ڡ����\n"); Sleep(100);
	printf("�����ڡ�   ��ڡ��١����\n\n"); Sleep(1000);
	printf("�̸��� �Է��� �ּ��� ");
	scanf("%s", &name);
	printf("\nƩ�丮���� �����Ͻðڽ��ϱ�? [ �� : 1 �ƴϿ� : 2 ]\n");
	scanf("%d", &tutorial); system("cls");//Ʃ�丮�� ���� Ȯ��
	if (tutorial == 1) { //1�̸� Ʃ�丮�� ����
		printf("\n");
		printf("����� %s, 24���̸� ������ �� �ȵ� ���� ��Ʈ�����̴�.\n", name); Sleep(1500);
		printf("���� ���� ���̾� ��ư�� ��°��̴�..\n"); Sleep(1500); system("cls");
		printf("\n");
		printf("���� �¸�� ���� ������ ���� �������� �¸��\n"); Sleep(1500);
		printf("%s : ���� 9��.. ���� ���ų �ð��̳�.\n", name); Sleep(2000); system("cls");
		printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("����̢̢̡�������̢̡�������\n");
		printf("��                      ��                ��\n");
		printf("��         ħ��         ��     ��ǻ��     ��\n");
		printf("��          1           ��   ���׷��̵�   ��\n");
		printf("��                      ��       4        ��\n");
		printf("��������Ǣǡ����������Ǣǡ�\n");
		printf("��                                        ��\n");
		printf("��                                        ��\n");
		printf("��������Ǣǡ������Ǣǡ�      ��\n");
		printf("��                ��              ��      ��\n");
		printf("��    ��Ʃ���    ��    ����    �� ���� ��\n");
		printf("��       2        ��      5       ��  3   ��\n");
		printf("����̢̢̡���������̢̡��ǡ��\n");
		printf("\n2�� ���� ����� Ű����\n");
		while (1) {
			scanf("%d", &home);//���̵� ��ġ Ȯ��
			if (home == 2) {//2�� ��ȭ
				hungry -= 20;//��� -50
				mon += sub * 1000;//�� +������*1000
				sub += com * 13;//������ +��ǻ�� ���*13
				system("cls");
				printf("\n");
				printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
				printf("\n");
				printf("����١��   �ڡ��١�����\n"); Sleep(500);
				printf("�����   ��١���ڡ��١��\n"); Sleep(500);
				printf("���١��    ��ȭ��   ���ڡ��\n"); Sleep(500);
				printf("����ڡ�١��   ���ڡ����\n"); Sleep(500);
				printf("�����ڡ�   ��ڡ١�ڡ����\n"); Sleep(3000);
				break;
			}
			else {//2�� �ƴϸ� ���
				printf("���� ������� �ʾҽ��ϴ�. �ٽ� �Է����ּ���\n");
			}
		}
		system("cls");
		printf("\n");
		printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("%s : ����� �����ص� �ǰ��ϳ�.. ����� ������ �ֳ�?\n", name); Sleep(1500);
		printf("����\n"); Sleep(1500);
		printf("%S : ����� ����ִ°� ���� ���̶� ���;߰ڴ�\n", name); Sleep(2000); system("cls");
		printf("\n");
		printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("����̢̢̡�������̢̡�������\n");
		printf("��                      ��                ��\n");
		printf("��         ħ��         ��     ��ǻ��     ��\n");
		printf("��          1           ��   ���׷��̵�   ��\n");
		printf("��                      ��       4        ��\n");
		printf("��������Ǣǡ����������Ǣǡ�\n");
		printf("��                                        ��\n");
		printf("��                                        ��\n");
		printf("��������Ǣǡ������Ǣǡ�      ��\n");
		printf("��                ��              ��      ��\n");
		printf("��    ��Ʃ���    ��    ����    �� ���� ��\n");
		printf("��       2        ��      5       ��  3   ��\n");
		printf("����̢̢̡���������̢̡��ǡ��\n");
		printf("\n3�� ���� ������ ��������.\n");
		while (2) {
			scanf("%d", &home);//���̵� ��ġ Ȯ��
			if (home == 3) {
				system("cls");
				break;//3�̸� Ż��
			}
			else if (home == 2) {//2�� ��ȭ�ź�
				printf("\n");
				printf("������ ��ȭ�� �Ұ��մϴ�. �ٽ� �Է����ּ���\n");
			}
			else {//�Ѵ� �ƴϸ� �ź�
				printf("\n");
				printf("���� ���� �Ǵ� ���ߵ��� �ʾҽ��ϴ�. �ٽ� �Է����ּ���\n");
			}
		}
		printf("\n");
		printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("       ��������           ��������           ��������       \n");
		printf("       ��������           ��������           ��������       \n");
		printf("       ��    ��    ��           �� �����ϱ� ��           ��   ��ġ   ��       \n");
		printf("       ���  1   ���           ���  2   ���           ���  3   ���       \n");
		printf("       ��������           ��������           ��������       \n");
		printf("       ��������           ��������           ��������       \n");
		printf("       ��������           ��������           ��������       \n");
		printf("����������������������������������������\n");
		printf("��̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̡�\n");
		while (3) {
			printf("\n2�� ���� �����ϱ�� �̵��Ͽ� �Ұ�⸦ ����ʽÿ�\n");
			while (4) {
				scanf("%d", &outside);//�ܺ��̵� Ȯ��
				if (outside != 2) {//2 �̿��� ���ڴ� �ź�
					printf("���� ���� �Ǵ� ���ߵ��� �ʾҽ��ϴ�. �ٽ� �Է����ּ���\n");
				}
				else {
					break;//�ƴϸ� Ż��
				}
			}
			system("cls");
			while (5) {
				printf("\n");
				printf("��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", hungry, mon, sub, com, rank[rank2]);
				printf("\n");
				for (int i = 0; i < 7; i++) {
					printf("%d�� ���� : %s : %d�� : %d ȸ��", i + 1, items[i], cost[i], hgy[i]);//��ǰ�� ���
					if (i == 0)
						printf("\t 2�� �߸������� ���α׷��� ����˴ϴ�.");
					printf("\n");
				}
				printf("\n");
				printf("��� ������ ���ðڽ��ϱ�? \n");
				while (6) {
					scanf("%d", &type);//���Ź�ȣ Ȯ��
					if (type != 1) {//1�̿��̸� ���
						printf("���� ���Ű� �Ұ��մϴ�. �ٽ� �Է����ּ���.\n");
					}
					else {
						break;
					}
				}
				type -= 1;//1�̸� 0��°�� ��µǾ�� ������ -1
				printf("%d���Դϴ�. ���� �־��ּ��� \n", cost[type]);
				while (7) {
					scanf("%d", &pay);//1�� ���� Ȯ��
					if (mon >= pay) {
						break;//�������� �����Ѱͺ��� ������ Ż��
					}
					else {
						printf("�������� ���� ���ڶ��ϴ�. Ȯ���� �ٽ� �־��ּ���.\n");
					}
				}
				if (pay >= cost[type]) {//������ ��ǰ���ݺ��� ���ų� ������
					hungry += hgy[type];//��⿡ ����ȸ���� ��ŭ �߰�
					mon -= cost[type];//�����ݿ��� ���� ���� ����
					if (pay > cost[type]) {//������ �ܵ����� ���
						printf("���� %s ���Խ��ϴ�. �ܵ� %d���Դϴ�.\n", items[type], pay - cost[type]); Sleep(1000);
						break;
					}
					else if (pay == cost[type]) {//������ ��ǰ�� ���
						printf("���� %s���Խ��ϴ�.\n", items[type]); Sleep(1000);
						break;
					}
				}
				else //�����Ѱ��
					printf("%d���� �����մϴ�. %d���� �־��ּ���\n", cost[type] - pay, cost[type] - pay);//������ ��� ���
				while (8) {
					scanf("%d", &pay2);//2�� ���� Ȯ��
					if (pay2 >= cost[type] - pay) {//������ ���ų� �������
						hungry += hgy[type];//��⿡ ����ȸ���� ��ŭ �߰�
						mon -= cost[type];//�����ݿ��� ���� ���� ����
						if (pay2 > cost[type] - pay) {//������ ���� ����- 1�� ������ ������ ���
							printf("���� %s ���Խ��ϴ�. �ܵ� %d���Դϴ�.\n", items[type], pay2 + pay - cost[type]); Sleep(1000);
							break;
						}
						else if (pay2 == cost[type] - pay) {//������ ���� ����- 1�� ������ ������ ���
							printf("���� %s���Խ��ϴ�.\n", items[type]); Sleep(1000);
							break;
						}
					}
					else
						return 0;
				}
				break;//Ż��
			}
			break;//Ż��
		}
		system("cls");		printf("\n");
		printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("�̰ɷ� ��� Ʃ�丮���� �������ϴ�. ���ݺ��� �����ӿ� ������ ������ ����帮�ڽ��ϴ�.\n"); Sleep(300);
		printf("���߿� ���򸻿��� �ٽ� ���� �ҽ��ϴ�\n"); Sleep(300);
		printf("����� ��ǥ�� ���̾ƹ�ư�Դϴ�. ���̾� ��ư�� ������ ������ ����˴ϴ�.\n"); Sleep(300);
		printf("��ǻ�͸� ���׷��̵� �ҽ� �ѹ� ����ҋ� �þ�� �������� ���� �þ�ϴ�.\n"); Sleep(300);
		printf("����Ŀ� ��Ⱑ �þ�ϴ�. ��Ⱑ 0�� ���ҽ� ������ ����˴ϴ�.\n"); Sleep(300);
		printf("���� Ű����� ����� �����մϴ�. ��Ŀ���� ���� ������ �����մϴ�. ������� 10�����Դϴ�. ��½� 1000������ ����ϴ�.\n"); Sleep(300);
		printf("https://blog.naver.com/dereck77"); Sleep(10000); system("cls");
	}//tutorial end
	while (9) {
		if (hungry <= 0) {//��Ⱑ 0���� ���ų� ������ ���
			system("cls");
			printf(" ��Ʃ���� �ȸ����� �׽��ϴ�. �ƻ��ϼ̽��ϴ�."); Sleep(3000);
			return 0;//����
		}
		else if (mon <= 0) {//���� 0���� ���ų� ������ ���
			system("cls");
			printf("��Ʃ���� �� ������ �ȵ˴ϴ�."); Sleep(3000);
			return 0;//����
		}
		else if (sub >= 10000000) {//���� 1000������ ���ų� ������ ���
			printf("���̾� ��ư�� ��� �Ǿ����ϴ�!! �����մϴ�!! ���� �޼����� 30���� ������ ����˴ϴ�."); Sleep(30000);
			return 0;//����
		}
		printf("\n");
		printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("����̢̢̡�������̢̡�������\n");
		printf("��                      ��                ��\n");
		printf("��         ħ��         ��     ��ǻ��     ��\n");
		printf("��          1           ��   ���׷��̵�   ��\n");
		printf("��                      ��       4        ��\n");
		printf("��������Ǣǡ����������Ǣǡ�\n");
		printf("��                                        ��\n");
		printf("��                                        ��\n");
		printf("��������Ǣǡ������Ǣǡ�      ��\n");
		printf("��                ��              ��      ��\n");
		printf("��    ��Ʃ���    ��    ����    �� ���� ��\n");
		printf("��       2        ��      5       ��  3   ��\n");
		printf("����̢̢̡���������̢̡��ǡ��\n");
		while (10) {
			scanf("%d", &home);
			if (home >= 6) {//6���� ���ų� ������ ���
				printf("���� ���ߵ��� �ʾҽ��ϴ�. �ٽ� �Է����ֽʽÿ�");
			}
			else {
				break;//Ż��
			}
		}
		if (home == 1) {//1�̸� ���
			hungry = 100;//��� 100���� ����
			system("cls");
			printf("\n");
			printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
			printf("\n");
			printf("����١��   �ڡ��١�����\n"); Sleep(500);
			printf("�����   ��١���ڡ��١��\n"); Sleep(500);
			printf("���١��   �ڴ���..  ���ڡ��\n"); Sleep(500);
			printf("����ڡ�١��   ���ڡ����\n"); Sleep(500);
			printf("�����ڡ�   ��ڡ١�ڡ����\n"); Sleep(3000);
			system("cls");
		}
		else if (home == 2) {//2�̸� ���
			hungry -= 20;//��� -50
			mon += sub * 1000;//�� +������*1000
			sub += com * 13;//������ +��ǻ�� ���*13
			system("cls");
			printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
			printf("\n");
			printf("����١��   �ڡ��١�����\n"); Sleep(500);
			printf("�����   ��١���ڡ��١��\n"); Sleep(500);
			printf("���١��    ��ȭ��   ���ڡ��\n"); Sleep(500);
			printf("����ڡ�١��   ���ڡ����\n"); Sleep(500);
			printf("�����ڡ�   ��ڡ١�ڡ����\n"); Sleep(3000);
			system("cls");
		}
		else if (home == 3) {//3�̸� ���
			system("cls");
			while (11) {
				if (hungry <= 0) {//��Ⱑ 0���� ���ų� ������ ���
					system("cls");
					printf(" ��Ʃ���� �ȸ����� �׽��ϴ�. �ƻ��ϼ̽��ϴ�."); Sleep(3000);
					return 0;//����
				}
				else if (mon <= 0) {//���� 0���� ���ų� ������ ���
					system("cls");
					printf("��Ʃ���� �� ������ �ȵ˴ϴ�."); Sleep(3000);
					return 0;//����
				}
				else if (sub >= 10000000) {//���� 1000������ ���ų� ������ ���
					printf("���̾� ��ư�� ��� �Ǿ����ϴ�!! �����մϴ�!! ���� �޼����� 30���� ������ ����˴ϴ�."); Sleep(30000);
					return 0;//����
				}
				if (rank2 == 0) {//��ũ�� �����ũ�̸� ���
					printf("\n");
					printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
					printf("\n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��    ��    ��           �� �����ϱ� ��           ��   ��ġ   ��       \n");
					printf("       ���  1   ���           ���  2   ���           ���  3   ���       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("����������������������������������������\n");
					printf("��̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̡�\n");
					printf("\n�̵��� ��ġ�� �������ֽʽÿ�.\n");
				}
				else if (rank2 <= 7) {//�׷��� �������̰ų� �� �� Ƽ���̸� ���
					printf("\n");
					printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
					printf("\n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��    ��    ��           �� �����ϱ� ��           ��  ������  ��       \n");
					printf("       ���  1   ���           ���  2   ���           ���  3   ���       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("����������������������������������������\n");
					printf("��̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̡�\n");
					printf("\n�̵��� ��ġ�� �������ֽʽÿ�.\n");
				}
				else if (rank2 == 8) {//��Ŀ�̸� ���
					printf("\n");
					printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
					printf("\n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��    ��    ��           �� �����ϱ� ��           ��   ����   ��       \n");
					printf("       ���  1   ���           ���  2   ���           ���  3   ���       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("       ��������           ��������           ��������       \n");
					printf("����������������������������������������\n");
					printf("��̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̡�\n");
					printf("\n�̵��� ��ġ�� �������ֽʽÿ�.\n");
				} while (12) {
					scanf("%d", &outside);
					if (outside >= 5) {//5�̰ų� �� ������ ���
						printf("���� ���ߵ��� �ʾҽ��ϴ�. �ٽ� �Է����ֽʽÿ�"); Sleep(500);
					}
					else {
						break;//Ż��
					}
				}
				if (outside == 1) {//1�̸� ���
					system("cls");
					break;//Ż��
				}
				else if (outside == 2) {
					while (13) {
						printf("\n");
						printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
						printf("\n");
						for (int i = 0; i < 7; i++) {
							printf("%d�� ���� : %s : %d�� : %d ȸ��", i + 1, items[i], cost[i], hgy[i]);//��ǰ�� ���
							if (i == 0)
								printf("\t 2�� �߸������� ���α׷��� ����˴ϴ�.");
							printf("\n");
						}
						printf("\n");
						printf("��� ������ ���ðڽ��ϱ�? \n");
						type -= 1;//1�̸� 0��°�� ��µǾ�� ������ -1
						printf("%d���Դϴ�. ���� �־��ּ��� \n", cost[type]);
						while (14) {
							scanf("%d", &pay);//1�� ���� Ȯ��
							if (mon >= pay) {
								break;//�������� �����Ѱͺ��� ������ Ż��
							}
							else {
								printf("�������� ���� ���ڶ��ϴ�. Ȯ���� �ٽ� �־��ּ���.\n");
							}
						}
						if (pay >= cost[type]) {//������ ��ǰ���ݺ��� ���ų� ������
							hungry += hgy[type];//��⿡ ����ȸ���� ��ŭ �߰�
							mon -= cost[type];//�����ݿ��� ���� ���� ����
							if (pay > cost[type]) {//������ �ܵ����� ���
								printf("���� %s ���Խ��ϴ�. �ܵ� %d���Դϴ�.\n", items[type], pay - cost[type]); Sleep(1000);
								break;
							}
							else if (pay == cost[type]) {//������ ��ǰ�� ���
								printf("���� %s���Խ��ϴ�.\n", items[type]); Sleep(1000);
								break;
							}
						}
						else //�����Ѱ��
							printf("%d���� �����մϴ�. %d���� �־��ּ���\n", cost[type] - pay, cost[type] - pay);//������ ��� ���
						while (15) {
							scanf("%d", &pay2);//2�� ���� Ȯ��
							if (pay2 >= cost[type] - pay) {//������ ���ų� �������
								hungry += hgy[type];//��⿡ ����ȸ���� ��ŭ �߰�
								mon -= cost[type];//�����ݿ��� ���� ���� ����
								if (pay2 > cost[type] - pay) {//������ ���� ����- 1�� ������ ������ ���
									printf("���� %s ���Խ��ϴ�. �ܵ� %d���Դϴ�.\n", items[type], pay2 + pay - cost[type]); Sleep(1000);
									break;
								}
								else if (pay2 == cost[type] - pay) {//������ ���� ����- 1�� ������ ������ ���
									printf("���� %s���Խ��ϴ�.\n", items[type]); Sleep(1000);
									break;
								}
							}
							else
								return 0;
						}
						break;//Ż��
					}
				}
				else if (outside == 3) {//3�̸� ���
					system("cls");
					if (rank2 == 0) {//�����ũ�̸� ���
						hungry -= 25;//��� -25
						srand(time(0));
						rb = rand() % 100 + 1;//�����Լ�
						if (rb == 1) {

							rank2 = 7;//7�� ����
							printf("����� Ƽ��� %s �Դϴ�.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 5) {//6�� ����
							rank2 = 6;
							printf("����� Ƽ��� %s �Դϴ�.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 20) {//5�� ����
							rank2 = 5;
							printf("����� Ƽ��� %s �Դϴ�.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 40) {//4�� ����
							rank2 = 4;
							printf("����� Ƽ��� %s �Դϴ�.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 60) {//3�� ����
							rank2 = 3;
							printf("����� Ƽ��� %s �Դϴ�.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 80) {//2�� ����
							rank2 = 2;
							printf("����� Ƽ��� %s �Դϴ�.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 100) {//1�� ����
							rank2 = 1;
							printf("����� Ƽ��� %s �Դϴ�.", rank[rank2]); Sleep(3000); system("cls");
						}
					}
					else if (rank2 <= 7) {//7�̰ų� ������ ���
						hungry -= 20;//��� -25
						srand(time(0));
						rb = rand() % 100 + 1;//�����Լ�
						if (rb <= 20) {//�����Լ��� 20 ���� ���ų� ������ ���
							rank2 += 1;//��ũ 1��
							printf("�±�"); Sleep(3000); system("cls");
						}
						else if (rb <= 100) {//�����Լ��� 21 ~ 100�̸� ���
							printf("�±޽���"); Sleep(3000); system("cls");
						}
					}
					else if (rank2 == 8) {
						hungry -= 30;//��� -75
						mon -= 100000;//�� -10��
						srand(time(0));
						league = rand() % 100 + 1;//�����Լ�
						if (league <= 10) {//�����Լ��� 10�̰ų� ������ ���
							mon += 10000000;//�� +1000��
							printf("���׿��� ����� �����Ͽ����ϴ�. \n ������� 1000������ ȹ���մϴ�."); Sleep(3000); system("cls");
						}
						else if (league <= 30) {//�����Լ��� 30�̰ų� ������ ���
							mon += 1000000;//�� +100��
							printf("���׿��� �ؿ���� �����Ͽ����ϴ�. \n ������� 100������ ȹ���մϴ�."); Sleep(3000); system("cls");
						}
						else {
							printf("�Ի����� ���߽��ϴ�."); Sleep(3000); system("cls");
						}
					}
				}
			}//����(while)
		}
		else if (home == 4) {//4�ϰ�� ���
			system("cls");
			printf("\n");				printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
			printf("��ǻ�� ���׷��̵� ����� %d���Դϴ�. \n���׷��̵� : 1  ������ : 2\n", com * 1200000);
			scanf("%d", &comsel);
			if (comsel != 1) {//1 �̿��� �����̸� ���
				system("cls");
			}
			else if (mon - com * 1200000 <= 0) {
				printf("���� �����մϴ�.");
			}else{//1�̸� ���
				srand(time(0));
				zirm = rand() % 100 + 1;//�����Լ�
				if (zirm <= 3) {//�����Լ��� 3�̰ų� ������ ���
					system("cls");
					com += 2;//��ǻ�� ��� 2��
					mon -= com * 1200000;//�� -��ǻ�� ���*120��
					printf("������ ����!!! �ѹ� ���׷��̵� ������� 2���� ȿ���� ������ϴ�.\n ��ǻ�� ������ 2 �ö����ϴ�. ���� ������ %d �Դϴ�.", com); Sleep(3000); system("cls");
				}
				else {
					system("cls");
					com += 1;//��ǻ�� ��� 1��
					mon -= com * 1200000;//�� -��ǻ�� ���*120��
					printf("��ǻ�� ������ 1 �ö����ϴ�. ���� ������ %d �Դϴ�.", com); Sleep(3000); system("cls");
				}
			}
		}
		else if (home == 5) {//5�̸� ���
			while (16) {
				system("cls");
				printf("\n");
				printf("�̸� : %s \n��� : %d  �� : %d  ������ : %d  ��ǻ��LV.%d  Ƽ�� : %s \n", name, hungry, mon, sub, com, rank[rank2]);
				printf("����\n");
				printf("�����ڰ� 1000������ �Ǹ� ���̾� ��ư�� ��� �˴ϴ�.\n");
				printf("��� �Ǵ� ���� 0�� ���ϸ� ������ �����ϴ�.\n");
				printf("���� �ڰ� �Ǹ� ���� 100���� �˴ϴ�. \n");
				printf("����� �ϰԵǸ� ��Ⱑ 50 ���������� ���� �����ڸ� ������ �ֽ��ϴ�.\n");
				printf("��ǻ�͸� ���׷��̵� �ϰ� �Ǹ� �ѹ� ����Ҷ� �þ�� �������� ���� �����մϴ�.\n");
				printf("������ �����Ͽ� ���� �����ϸ� �ٽ� ���ƿü� �ֽ��ϴ�.\n");
				printf("�����ϱ⿡�� ��⸦ ���ϼ� �ִ� ��ǰ���� ����Ǿ� �ֽ��ϴ�.\n");
				printf("��ġ�� ���ԵǸ� ���� Ȯ���� ����� �ǹ� ��� �÷�Ƽ�� ���̾� ������ �׷��� �������� Ƽ� �������ϴ�.\n");
				printf("���������� �±��� �Ҽ� ������ ��Ŀ�� �Ǹ� �������� ���̻� ���� ������ ���׿� ������ �����մϴ�.\n");
				printf("���׿� ������ 10������ ������� ���������� ��½� 1000����, �ؿ�½� 100������ ��� �˴ϴ�.\n");
				printf("https://blog.naver.com/dereck77 \n");
				printf("���� �ϼ̴ٸ� 1�� �����ּ���\n");
				scanf("%d", &help);
				if (help == 1) {//1�̸� ���
					system("cls");
					break;//Ż��
				}
			}
		}
	}
}







