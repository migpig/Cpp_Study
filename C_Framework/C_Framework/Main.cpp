// 선생님께서 작성한 코드에다가 남겼습니다 수업시간에 따라 치기만 하다 놓치고 혼자 쓰기 어렵고 따로 아이디어가 없어서 보기만 했네요 ㅠ


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // 제일 기본 헤더 standard infoot outfoot의 줄임말
#include <malloc.h>  // 동적 할당을 하기 위해 필요한 헤더
#include <string>    // 
#include <time.h>    // 


const int TYPE_PLAYER	= 1;  // const는 상수 선언 type_player 라는것이 상수 1 이라는것을 의미
const int TYPE_ENEMY	= 2;  // const는 상수 선언 type_enemy 라는것이 상수 2 라는것을 의미




typedef struct tagInfo       // 자주 쓰이는 스텟 변수들을 모아놓은 INFO라는 구조체 
{
	char* Name;              // 닉네임이기 때문에 문자 자료형인 char* 포인터를 사용
	int HP;                  // 정수 자료형 int hp (체력)
	int MP;                  // 정수 자료형 int mp (마나)

	int EXP;                 // 정수 자료형 int exp (경험치)

	float Att;               // 실수 자료형 float att (공격력)
	float Def;               // 실수 자료형 float def (방어력) 

	int Level;               // 정수 자료형 int level (레벨)
	
}INFO;                       


typedef struct tagObject     // 이건 잘 모르겠습니다... INFO 라는 구조체를 OBJECT라는 이름으로 바꿔준거라고 생각이 듭니다만 아닌것 같습니다..ㅋㅋㅋ
{
	INFO Info;

}OBJECT;







void InitializeObject(OBJECT* _Obj, int ObjectType);     // initializeObject가 뭔지 잘 모르겠습니다
char* SetName();                                         // 이것도 잘 모르겠습니다


int main(void)
{
	OBJECT* Player = (OBJECT*)malloc(sizeof(OBJECT));    // 위에 있는 구조체 OBJECT를 포인터로 사용하기 위한 동적할당
	InitializeObject(Player, TYPE_PLAYER);

	OBJECT* Enemy = (OBJECT*)malloc(sizeof(OBJECT));;    // 위에 있는 구조체 OBJECT를 포인터로 사용하기 위한 동적할당
	InitializeObject(Enemy, TYPE_ENEMY);

	while (true)                                         //while 문 조건식이 ture로 되어있기에 반복실행
	{
		// ** 콘솔창을 모두 지움.
		system("cls");

		printf_s("\n[%s]\n", Player->Info.Name);         // 문자형인 name을 구조체 내부에 접근 그리고 문자를 출력하는 %s로 출력
 		printf_s("HP : %d\n", Player->Info.HP);          // 구조체 내부 정수형 HP에 접근 후 출력
		printf_s("MP : %d\n", Player->Info.MP);          // 구조체 내부 정수형 MP에 접근 후 출력
		printf_s("공격력 : %.2f\n", Player->Info.Att);   // 소숫점 2자리까지 표시되는 공격력 float 실수 , player ->info.att 는 구조체 내부에서 변수에 접근하기위함
		printf_s("방어력 : %.2f\n", Player->Info.Def);   // 소숫점 2자리까지 표시되는 방어력 float 실수 , player ->info.def 는 구조체 내부에서 변수에 접근하기위함
		printf_s("EXP : %d\n", Player->Info.EXP);        // 구조체 내부 정수형 EXP에 접근 후 출력
		printf_s("Level : %d\n\n", Player->Info.Level);  // 구조체 내부 정수형 level에 접근 후 출력

		printf_s("[%s]\n", Enemy->Info.Name);            // 문자형인 name을 구조체 내부에 접근 그리고 문자를 출력하는 %s로 출력
		printf_s("HP : %d\n", Enemy->Info.HP);           // 구조체 내부 정수형 HP에 접근 후 출력
		printf_s("MP : %d\n", Enemy->Info.MP);           // 구조체 내부 정수형 MP에 접근 후 출력
		printf_s("공격력 : %.2f\n", Enemy->Info.Att);    // 소숫점 2자리까지 표시되는 공격력 float 실수 , player ->info.att 는 구조체 내부에서 변수에 접근하기위함
		printf_s("방어력 : %.2f\n", Enemy->Info.Def);    // 소숫점 2자리까지 표시되는 방어력 float 실수 , player ->info.def 는 구조체 내부에서 변수에 접근하기위함
		printf_s("EXP : %d\n", Enemy->Info.EXP);         // 구조체 내부 정수형 EXP에 접근 후 출력
		printf_s("Level : %d\n\n", Enemy->Info.Level);   // 구조체 내부 정수형 level에 접근 후 출력

		int iChoice = 0;  // iChoice라는 정수형 변수
		printf_s("몬스터와 만났습니다. 공격하시겠습니까 ?\n1. 공격\n2. 도망\n입력 : "); // 2가지 공격 도망 선택지 와 입력란 출력
		scanf_s("%d", &iChoice);  // iChoice 라는 변수에 입력


		switch (iChoice) //iChoice라는 변수에 어떤 값이 들어갈지에 대한 switch문
		{
		case 1:                                                          // 1이 입력될 시
			if (Player->Info.Att > Enemy->Info.Def)                      // 조건문 if 플레이어의 공격력이 적의 방어력보다 클 때
			{
				Enemy->Info.HP -= Player->Info.Att - Enemy->Info.Def;    // 플레이어의 공격력을 적의 방어력만큼 빼주고 그 남은 공격력 값을 적 체력에 빼주어라
			}
			else                                                         // 그게 아니라면?
				Enemy->Info.HP -= 1;                                     // 적 체력 1만큼만 깎는다
			break;                                                       // break로 switch 문 탈출
		case 2:                                                          // 2가 입력될 시
			printf_s("도망치는것에 [성공] 했습니다.\n");                 // 도망치는것에 성공 했다는 글이 출력
			break;                                                       // break로 switch 문 탈출
		}
	}
	
	return 0;
}




void InitializeObject(OBJECT* _Obj, int ObjectType)  // 이것 아래는 잘 모르겠습니다ㅠ
{
	switch (ObjectType)
	{
	case TYPE_PLAYER:
		_Obj->Info.Name = SetName();

		_Obj->Info.Att = 10;
		_Obj->Info.Def = 10;
		_Obj->Info.EXP = 0;
		_Obj->Info.HP = 100;
		_Obj->Info.MP = 10;
		_Obj->Info.Level = 1;
		break;
	case TYPE_ENEMY:
		_Obj->Info.Name = (char*)"Enemy";

		_Obj->Info.Att = 5;
		_Obj->Info.Def = 15;
		_Obj->Info.EXP = 0;
		_Obj->Info.HP = 30;
		_Obj->Info.MP = 5;
		_Obj->Info.Level = 1;
		break;
	}
}

char* SetName()
{
	char Buffer[128] = "";

	printf_s("이름 입력 : ");
	scanf("%s", Buffer);

	char* pName = (char*)malloc(strlen(Buffer) + 1);
	strcpy(pName, Buffer);

	return pName;
}
