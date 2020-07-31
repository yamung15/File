#pragma warning (disable: 4996)//4996에러 방지
#include <stdio.h >
#include <stdlib.h >
#include <Windows.h >
#include <time.h >
#include <conio.h >
int main() {
	int com = 1;//컴퓨터 등급
	int comsel;//컴퓨터 구매여부
	int cost[7] = { 12000, 10000, 8000, 6500, 3000, 2000, 1200 };//음식 가격
	int home;//집 이동
	int help;//도움말
	int hgy[7] = { 100, 80, 65, 40, 30, 20, 15 };//음식 회복능력
	int hungry = 100;//허기
	char items[7][50] = { "소고기", "삼겹살", "치킨", "햄버거", "떡볶이", "만두", "라면" };//음식
	int league;//리그
	int mon = 1000000;//돈
	int outside;//외부 이동
	int pay = 0;//1차 돈 지불 
	int pay2;//2차 돈 지불
	char rank[9][100] = { "언더랭크", "브론즈", "실버", "골드", "플래티넘", "다이아", "마스터", "그랜드마스터", "랭커" };//랭크
	int rank2 = 0;//랭크 종류 결정
	int rb;//배치 및 경쟁
	int sub = 34;//구독자
	int tutorial;//튜토리얼
	int type;//음식 종류 결정
	int zirm;//컴퓨터 등급 2배 
	char name[10000];
	printf("게임을 로딩중입니다.\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다..\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다...\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다.\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다..\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다...\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다.\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다..\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다...\n"); Sleep(100);	system("cls");
	printf("게임을 로딩중입니다.\n"); Sleep(100);	system("cls");
	printf("좌측상단에만 나오니 유의 바랍니다"); Sleep(1000);	system("cls");
	printf("\n");
	printf("■■□★□□   □★□□☆□□■■\n"); Sleep(100);
	printf("■□□□   □☆□□□★□□☆□■\n"); Sleep(100);
	printf("□□☆□□   유튜버   □□ ★□□\n"); Sleep(100);
	printf("□□★□□★ 키우기  □□★□□☆\n"); Sleep(100);
	printf("■□□★□☆□□   □□★□□□■\n"); Sleep(100);
	printf("■■□□★□   □★□□☆□□■■\n\n"); Sleep(1000);
	printf("이름을 입력해 주세요 ");
	scanf("%s", &name);
	printf("\n튜토리얼을 진행하시겠습니까? [ 예 : 1 아니요 : 2 ]\n");
	scanf("%d", &tutorial); system("cls");//튜토리얼 여부 확인
	if (tutorial == 1) { //1이면 튜토리얼 시작
		printf("\n");
		printf("당신은 %s, 24세이며 직업은 얼마 안된 신입 스트리머이다.\n", name); Sleep(1500);
		printf("그의 꿈은 다이아 버튼을 얻는것이다..\n"); Sleep(1500); system("cls");
		printf("\n");
		printf("띵띵띵 굿모닝 띵띵띵 빠빠빠 빠빠 빠빠빠빰 굿모닝\n"); Sleep(1500);
		printf("%s : 저녁 9시.. 벌써 방송킬 시간이네.\n", name); Sleep(2000); system("cls");
		printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("■■■▩▩▩■■■■■■■▩▩■■■■■■■\n");
		printf("■                      ■                ■\n");
		printf("■         침실         ■     컴퓨터     ■\n");
		printf("▩          1           ■   업그레이드   ■\n");
		printf("■                      ■       4        ■\n");
		printf("■■■■■■■▤▤■■■■■■■■■■▤▤■\n");
		printf("■                                        ■\n");
		printf("■                                        ■\n");
		printf("■■■■■■■▤▤■■■■■■▤▤■      ■\n");
		printf("■                ■              ■      ■\n");
		printf("▩    스튜디오    ■    도움말    ■ 현관 ■\n");
		printf("■       2        ■      5       ■  3   ■\n");
		printf("■■■▩▩▩■■■■■■■■■▩▩■■▤■■\n");
		printf("\n2를 눌러 방송을 키세요\n");
		while (1) {
			scanf("%d", &home);//집이동 위치 확인
			if (home == 2) {//2면 녹화
				hungry -= 20;//허기 -50
				mon += sub * 1000;//돈 +구독자*1000
				sub += com * 13;//구독자 +컴퓨터 등급*13
				system("cls");
				printf("\n");
				printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
				printf("\n");
				printf("□■□☆□□   ★□□☆□■□■□\n"); Sleep(500);
				printf("■□□□   □☆□■□★□□☆□■\n"); Sleep(500);
				printf("□■☆□★    녹화중   □□★□□\n"); Sleep(500);
				printf("■□□★□☆□□   ■□★■□□■\n"); Sleep(500);
				printf("□■□□★□   □★☆□★□□■□\n"); Sleep(3000);
				break;
			}
			else {//2가 아니면 출력
				printf("아직 개방되지 않았습니다. 다시 입력해주세요\n");
			}
		}
		system("cls");
		printf("\n");
		printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("%s : 방송은 언제해도 피곤하네.. 냉장고에 먹을게 있나?\n", name); Sleep(1500);
		printf("덜컥\n"); Sleep(1500);
		printf("%S : 냉장고에 들어있는게 없네 장이라도 봐와야겠다\n", name); Sleep(2000); system("cls");
		printf("\n");
		printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("■■■▩▩▩■■■■■■■▩▩■■■■■■■\n");
		printf("■                      ■                ■\n");
		printf("■         침실         ■     컴퓨터     ■\n");
		printf("▩          1           ■   업그레이드   ■\n");
		printf("■                      ■       4        ■\n");
		printf("■■■■■■■▤▤■■■■■■■■■■▤▤■\n");
		printf("■                                        ■\n");
		printf("■                                        ■\n");
		printf("■■■■■■■▤▤■■■■■■▤▤■      ■\n");
		printf("■                ■              ■      ■\n");
		printf("▩    스튜디오    ■    도움말    ■ 현관 ■\n");
		printf("■       2        ■      5       ■  3   ■\n");
		printf("■■■▩▩▩■■■■■■■■■▩▩■■▤■■\n");
		printf("\n3를 눌러 밖으로 나가세요.\n");
		while (2) {
			scanf("%d", &home);//집이동 위치 확인
			if (home == 3) {
				system("cls");
				break;//3이면 탈출
			}
			else if (home == 2) {//2면 녹화거부
				printf("\n");
				printf("지금은 녹화가 불가합니다. 다시 입력해주세요\n");
			}
			else {//둘다 아니면 거부
				printf("\n");
				printf("아직 개방 또는 개발되지 않았습니다. 다시 입력해주세요\n");
			}
		}
		printf("\n");
		printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("       ■■■■■■■           ■■■■■■■           ■■■■■■■       \n");
		printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
		printf("       ■    집    ■           ■ 집더하기 ■           ■   배치   ■       \n");
		printf("       ■□  1   □■           ■□  2   □■           ■□  3   □■       \n");
		printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
		printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
		printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("■▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩■\n");
		while (3) {
			printf("\n2를 눌러 집더하기로 이동하여 소고기를 사오십시오\n");
			while (4) {
				scanf("%d", &outside);//외부이동 확인
				if (outside != 2) {//2 이외의 숫자는 거부
					printf("아직 개방 또는 개발되지 않았습니다. 다시 입력해주세요\n");
				}
				else {
					break;//아니면 탈출
				}
			}
			system("cls");
			while (5) {
				printf("\n");
				printf("허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", hungry, mon, sub, com, rank[rank2]);
				printf("\n");
				for (int i = 0; i < 7; i++) {
					printf("%d번 음료 : %s : %d원 : %d 회복", i + 1, items[i], cost[i], hgy[i]);//상품명 출력
					if (i == 0)
						printf("\t 2번 잘못넣으면 프로그램이 종료됩니다.");
					printf("\n");
				}
				printf("\n");
				printf("몇번 음식을 고르시겠습니까? \n");
				while (6) {
					scanf("%d", &type);//구매번호 확인
					if (type != 1) {//1이외이면 출력
						printf("아직 구매가 불가합니다. 다시 입력해주세요.\n");
					}
					else {
						break;
					}
				}
				type -= 1;//1이면 0번째가 출력되어야 때문에 -1
				printf("%d원입니다. 돈을 넣어주세요 \n", cost[type]);
				while (7) {
					scanf("%d", &pay);//1차 낸돈 확인
					if (mon >= pay) {
						break;//소지금이 지불한것보다 많으면 탈출
					}
					else {
						printf("소지중인 돈이 모자랍니다. 확인후 다시 넣어주세요.\n");
					}
				}
				if (pay >= cost[type]) {//낸돈이 상품가격보다 많거나 같을떄
					hungry += hgy[type];//허기에 음식회복량 만큼 추가
					mon -= cost[type];//소지금에서 음식 가격 빼기
					if (pay > cost[type]) {//많으면 잔돈까지 출력
						printf("여기 %s 나왔습니다. 잔돈 %d원입니다.\n", items[type], pay - cost[type]); Sleep(1000);
						break;
					}
					else if (pay == cost[type]) {//같으면 상품만 출력
						printf("여기 %s나왔습니다.\n", items[type]); Sleep(1000);
						break;
					}
				}
				else //부족한경우
					printf("%d원이 부족합니다. %d원을 넣어주세요\n", cost[type] - pay, cost[type] - pay);//부족한 비용 출력
				while (8) {
					scanf("%d", &pay2);//2차 낸돈 확인
					if (pay2 >= cost[type] - pay) {//낸돈이 많거나 같을경우
						hungry += hgy[type];//허기에 음식회복량 만큼 추가
						mon -= cost[type];//소지금에서 음식 가격 빼기
						if (pay2 > cost[type] - pay) {//낸돈이 원래 가격- 1차 낸돈과 많으면 출력
							printf("여기 %s 나왔습니다. 잔돈 %d원입니다.\n", items[type], pay2 + pay - cost[type]); Sleep(1000);
							break;
						}
						else if (pay2 == cost[type] - pay) {//낸돈이 원래 가격- 1차 낸돈과 같으면 출력
							printf("여기 %s나왔습니다.\n", items[type]); Sleep(1000);
							break;
						}
					}
					else
						return 0;
				}
				break;//탈출
			}
			break;//탈출
		}
		system("cls");		printf("\n");
		printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("이걸로 모든 튜토리얼이 끝났습니다. 지금부터 본게임에 들어가기전 간단히 설명드리겠습니다.\n"); Sleep(300);
		printf("나중에 도움말에서 다시 볼수 았습니다\n"); Sleep(300);
		printf("당신의 목표는 다이아버튼입니다. 다이아 버튼을 얻으면 게임은 종료됩니다.\n"); Sleep(300);
		printf("컴퓨터를 업그레이드 할시 한번 방송할떄 늘어나는 구독자의 수가 늘어납니다.\n"); Sleep(300);
		printf("방송후엔 허기가 늘어납니다. 허기가 0에 달할시 게임은 종료됩니다.\n"); Sleep(300);
		printf("모든건 키보드로 사용이 가능합니다. 랭커부터 리그 출전이 가능합니다. 참가비는 10만원입니다. 우승시 1000만원을 얻습니다.\n"); Sleep(300);
		printf("https://blog.naver.com/dereck77"); Sleep(10000); system("cls");
	}//tutorial end
	while (9) {
		if (hungry <= 0) {//허기가 0보다 같거나 낮으면 출력
			system("cls");
			printf(" 유튜버도 안먹으면 죽습니다. 아사하셨습니다."); Sleep(3000);
			return 0;//종료
		}
		else if (mon <= 0) {//돈이 0보다 같거나 낮으면 출력
			system("cls");
			printf("유튜버도 돈 없으면 안됩니다."); Sleep(3000);
			return 0;//종료
		}
		else if (sub >= 10000000) {//돈이 1000만보다 많거나 같으면 출력
			printf("다이아 버튼을 얻게 되었습니다!! 축하합니다!! 목적 달성으로 30초후 게임이 종료됩니다."); Sleep(30000);
			return 0;//종료
		}
		printf("\n");
		printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
		printf("\n");
		printf("■■■▩▩▩■■■■■■■▩▩■■■■■■■\n");
		printf("■                      ■                ■\n");
		printf("■         침실         ■     컴퓨터     ■\n");
		printf("▩          1           ■   업그레이드   ■\n");
		printf("■                      ■       4        ■\n");
		printf("■■■■■■■▤▤■■■■■■■■■■▤▤■\n");
		printf("■                                        ■\n");
		printf("■                                        ■\n");
		printf("■■■■■■■▤▤■■■■■■▤▤■      ■\n");
		printf("■                ■              ■      ■\n");
		printf("▩    스튜디오    ■    도움말    ■ 현관 ■\n");
		printf("■       2        ■      5       ■  3   ■\n");
		printf("■■■▩▩▩■■■■■■■■■▩▩■■▤■■\n");
		while (10) {
			scanf("%d", &home);
			if (home >= 6) {//6보다 많거나 같으면 출력
				printf("아직 개발되지 않았습니다. 다시 입력해주십시오");
			}
			else {
				break;//탈출
			}
		}
		if (home == 1) {//1이면 출력
			hungry = 100;//허기 100으로 설정
			system("cls");
			printf("\n");
			printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
			printf("\n");
			printf("□■□☆□□   ★□□☆□■□■□\n"); Sleep(500);
			printf("■□□□   □☆□■□★□□☆□■\n"); Sleep(500);
			printf("□■☆□★   자는중..  □□★□□\n"); Sleep(500);
			printf("■□□★□☆□□   ■□★■□□■\n"); Sleep(500);
			printf("□■□□★□   □★☆□★□□■□\n"); Sleep(3000);
			system("cls");
		}
		else if (home == 2) {//2이면 출력
			hungry -= 20;//허기 -50
			mon += sub * 1000;//돈 +구독자*1000
			sub += com * 13;//구독자 +컴퓨터 등급*13
			system("cls");
			printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
			printf("\n");
			printf("□■□☆□□   ★□□☆□■□■□\n"); Sleep(500);
			printf("■□□□   □☆□■□★□□☆□■\n"); Sleep(500);
			printf("□■☆□★    녹화중   □□★□□\n"); Sleep(500);
			printf("■□□★□☆□□   ■□★■□□■\n"); Sleep(500);
			printf("□■□□★□   □★☆□★□□■□\n"); Sleep(3000);
			system("cls");
		}
		else if (home == 3) {//3이면 출력
			system("cls");
			while (11) {
				if (hungry <= 0) {//허기가 0보다 같거나 낮으면 출력
					system("cls");
					printf(" 유튜버도 안먹으면 죽습니다. 아사하셨습니다."); Sleep(3000);
					return 0;//종료
				}
				else if (mon <= 0) {//돈이 0보다 같거나 낮으면 출력
					system("cls");
					printf("유튜버도 돈 없으면 안됩니다."); Sleep(3000);
					return 0;//종료
				}
				else if (sub >= 10000000) {//돈이 1000만보다 많거나 같으면 출력
					printf("다이아 버튼을 얻게 되었습니다!! 축하합니다!! 목적 달성으로 30초후 게임이 종료됩니다."); Sleep(30000);
					return 0;//종료
				}
				if (rank2 == 0) {//랭크가 언더랭크이면 출력
					printf("\n");
					printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
					printf("\n");
					printf("       ■■■■■■■           ■■■■■■■           ■■■■■■■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■    집    ■           ■ 집더하기 ■           ■   배치   ■       \n");
					printf("       ■□  1   □■           ■□  2   □■           ■□  3   □■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					printf("■▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩■\n");
					printf("\n이동할 위치를 선택해주십시오.\n");
				}
				else if (rank2 <= 7) {//그랜드 마스터이거나 그 밑 티어이면 출력
					printf("\n");
					printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
					printf("\n");
					printf("       ■■■■■■■           ■■■■■■■           ■■■■■■■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■    집    ■           ■ 집더하기 ■           ■  경쟁전  ■       \n");
					printf("       ■□  1   □■           ■□  2   □■           ■□  3   □■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					printf("■▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩■\n");
					printf("\n이동할 위치를 선택해주십시오.\n");
				}
				else if (rank2 == 8) {//랭커이면 출력
					printf("\n");
					printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
					printf("\n");
					printf("       ■■■■■■■           ■■■■■■■           ■■■■■■■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■    집    ■           ■ 집더하기 ■           ■   리그   ■       \n");
					printf("       ■□  1   □■           ■□  2   □■           ■□  3   □■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("       ■□□□□□■           ■□□□□□■           ■□□□□□■       \n");
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					printf("■▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩▩■\n");
					printf("\n이동할 위치를 선택해주십시오.\n");
				} while (12) {
					scanf("%d", &outside);
					if (outside >= 5) {//5이거나 더 많으면 출력
						printf("아직 개발되지 않았습니다. 다시 입력해주십시오"); Sleep(500);
					}
					else {
						break;//탈출
					}
				}
				if (outside == 1) {//1이면 출력
					system("cls");
					break;//탈출
				}
				else if (outside == 2) {
					while (13) {
						printf("\n");
						printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
						printf("\n");
						for (int i = 0; i < 7; i++) {
							printf("%d번 음료 : %s : %d원 : %d 회복", i + 1, items[i], cost[i], hgy[i]);//상품명 출력
							if (i == 0)
								printf("\t 2번 잘못넣으면 프로그램이 종료됩니다.");
							printf("\n");
						}
						printf("\n");
						printf("몇번 음식을 고르시겠습니까? \n");
						type -= 1;//1이면 0번째가 출력되어야 때문에 -1
						printf("%d원입니다. 돈을 넣어주세요 \n", cost[type]);
						while (14) {
							scanf("%d", &pay);//1차 낸돈 확인
							if (mon >= pay) {
								break;//소지금이 지불한것보다 많으면 탈출
							}
							else {
								printf("소지중인 돈이 모자랍니다. 확인후 다시 넣어주세요.\n");
							}
						}
						if (pay >= cost[type]) {//낸돈이 상품가격보다 많거나 같을떄
							hungry += hgy[type];//허기에 음식회복량 만큼 추가
							mon -= cost[type];//소지금에서 음식 가격 빼기
							if (pay > cost[type]) {//많으면 잔돈까지 출력
								printf("여기 %s 나왔습니다. 잔돈 %d원입니다.\n", items[type], pay - cost[type]); Sleep(1000);
								break;
							}
							else if (pay == cost[type]) {//같으면 상품만 출력
								printf("여기 %s나왔습니다.\n", items[type]); Sleep(1000);
								break;
							}
						}
						else //부족한경우
							printf("%d원이 부족합니다. %d원을 넣어주세요\n", cost[type] - pay, cost[type] - pay);//부족한 비용 출력
						while (15) {
							scanf("%d", &pay2);//2차 낸돈 확인
							if (pay2 >= cost[type] - pay) {//낸돈이 많거나 같을경우
								hungry += hgy[type];//허기에 음식회복량 만큼 추가
								mon -= cost[type];//소지금에서 음식 가격 빼기
								if (pay2 > cost[type] - pay) {//낸돈이 원래 가격- 1차 낸돈과 많으면 출력
									printf("여기 %s 나왔습니다. 잔돈 %d원입니다.\n", items[type], pay2 + pay - cost[type]); Sleep(1000);
									break;
								}
								else if (pay2 == cost[type] - pay) {//낸돈이 원래 가격- 1차 낸돈과 같으면 출력
									printf("여기 %s나왔습니다.\n", items[type]); Sleep(1000);
									break;
								}
							}
							else
								return 0;
						}
						break;//탈출
					}
				}
				else if (outside == 3) {//3이면 출력
					system("cls");
					if (rank2 == 0) {//언더랭크이면 출력
						hungry -= 25;//허기 -25
						srand(time(0));
						rb = rand() % 100 + 1;//랜덤함수
						if (rb == 1) {

							rank2 = 7;//7로 설정
							printf("당신의 티어는 %s 입니다.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 5) {//6로 설정
							rank2 = 6;
							printf("당신의 티어는 %s 입니다.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 20) {//5로 설정
							rank2 = 5;
							printf("당신의 티어는 %s 입니다.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 40) {//4로 설정
							rank2 = 4;
							printf("당신의 티어는 %s 입니다.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 60) {//3로 설정
							rank2 = 3;
							printf("당신의 티어는 %s 입니다.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 80) {//2로 설정
							rank2 = 2;
							printf("당신의 티어는 %s 입니다.", rank[rank2]); Sleep(3000); system("cls");
						}
						else if (rb <= 100) {//1로 설정
							rank2 = 1;
							printf("당신의 티어는 %s 입니다.", rank[rank2]); Sleep(3000); system("cls");
						}
					}
					else if (rank2 <= 7) {//7이거나 낮으면 출력
						hungry -= 20;//허기 -25
						srand(time(0));
						rb = rand() % 100 + 1;//랜덤함수
						if (rb <= 20) {//랜덤함수가 20 보다 낮거나 같으면 출력
							rank2 += 1;//랭크 1업
							printf("승급"); Sleep(3000); system("cls");
						}
						else if (rb <= 100) {//랜덤함수가 21 ~ 100이면 출력
							printf("승급실패"); Sleep(3000); system("cls");
						}
					}
					else if (rank2 == 8) {
						hungry -= 30;//허기 -75
						mon -= 100000;//돈 -10만
						srand(time(0));
						league = rand() % 100 + 1;//랜덤함수
						if (league <= 10) {//랜덤함수가 10이거나 낮으면 출력
							mon += 10000000;//돈 +1000만
							printf("리그에서 우승을 차지하였습니다. \n 상금으로 1000만원을 획득합니다."); Sleep(3000); system("cls");
						}
						else if (league <= 30) {//랜덤함수가 30이거나 낮으면 출력
							mon += 1000000;//돈 +100만
							printf("리그에서 준우승을 차지하였습니다. \n 상금으로 100만원을 획득합니다."); Sleep(3000); system("cls");
						}
						else {
							printf("입상하지 못했습니다."); Sleep(3000); system("cls");
						}
					}
				}
			}//현관(while)
		}
		else if (home == 4) {//4일경우 출력
			system("cls");
			printf("\n");				printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
			printf("컴퓨터 업그레이드 비용은 %d원입니다. \n업그레이드 : 1  나가기 : 2\n", com * 1200000);
			scanf("%d", &comsel);
			if (comsel != 1) {//1 이외의 숫자이면 출력
				system("cls");
			}
			else if (mon - com * 1200000 <= 0) {
				printf("돈이 부족합니다.");
			}else{//1이면 출력
				srand(time(0));
				zirm = rand() % 100 + 1;//랜덤함수
				if (zirm <= 3) {//랜덤함수가 3이거나 낮으면 출력
					system("cls");
					com += 2;//컴퓨터 등급 2업
					mon -= com * 1200000;//돈 -컴퓨터 등급*120만
					printf("지름신 강림!!! 한번 업그레이드 비용으로 2배의 효과를 얻었습니다.\n 컴퓨터 레벨이 2 올랐습니다. 지금 레벨은 %d 입니다.", com); Sleep(3000); system("cls");
				}
				else {
					system("cls");
					com += 1;//컴퓨터 등급 1업
					mon -= com * 1200000;//돈 -컴퓨터 등급*120만
					printf("컴퓨터 레벨이 1 올랐습니다. 지금 레벨은 %d 입니다.", com); Sleep(3000); system("cls");
				}
			}
		}
		else if (home == 5) {//5이면 출력
			while (16) {
				system("cls");
				printf("\n");
				printf("이름 : %s \n허기 : %d  돈 : %d  구독자 : %d  컴퓨터LV.%d  티어 : %s \n", name, hungry, mon, sub, com, rank[rank2]);
				printf("도움말\n");
				printf("구독자가 1000만명이 되면 다이아 버튼을 얻게 됩니다.\n");
				printf("허기 또는 돈이 0에 달하면 게임이 끝납니다.\n");
				printf("잠을 자게 되면 허기는 100으로 됩니다. \n");
				printf("방송을 하게되면 허기가 50 감소하지만 돈과 구독자를 얻을수 있습니다.\n");
				printf("컴퓨터를 업그레이드 하게 되면 한번 방송할때 늘어나는 구독자의 수가 증가합니다.\n");
				printf("현관을 선택하여 집을 선택하면 다시 돌아올수 있습니다.\n");
				printf("집더하기에선 허기를 줄일수 있는 물품들이 구비되어 있습니다.\n");
				printf("배치를 보게되면 일정 확률로 브론즈 실버 골드 플래티넘 다이아 마스터 그랜드 마스터중 티어가 정해집니다.\n");
				printf("경쟁전으로 승급을 할수 있으며 랭커가 되면 경쟁전은 더이상 볼수 없지만 리그에 참가가 가능합니다.\n");
				printf("리그에 참가시 10만원을 참가비로 내야하지만 우승시 1000만원, 준우승시 100만원을 얻게 됩니다.\n");
				printf("https://blog.naver.com/dereck77 \n");
				printf("이해 하셨다면 1을 눌러주세요\n");
				scanf("%d", &help);
				if (help == 1) {//1이면 출력
					system("cls");
					break;//탈출
				}
			}
		}
	}
}







