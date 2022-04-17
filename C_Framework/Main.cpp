#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h> //동적할당 할 때 필요한 헤더파일
#include <string>
#include <time.h>

const int 


typedef struct tagInfo
{
	char* Name;
	int HP;
	int MP;

	int EXP;

	float Att;
	float Def;

	int Level;

}INFO;




typedef struct tagObject
{
	INFO Info;

	// Player 고유 정보를 추가
}OBJECT;

typedef struct tagEnemy
{
	INFO Info;

	// Enemy 고유 정보를 추가
}ENEMY;




int main(void)
{
	OBJECT Player;
	OBJECT Enemy;

	if (Player.Info.Att > Enemy.Info.Def)
		Enemy.Info.HP -= Player.Info.Att - Enemy.Info.Def;
	else
		Enemy.Info.HP -= 1;

	return 0;
}




void InitializeObject(OBJECT* _Obj, int Objtype)
{
	_Obj = (OBJECT*)malloc(sizeof(OBJECT));

	_Obj->Info.Att = 0;
	_Obj->Info.Def = 0;
	_Obj->Info.EXP = 0;
	_Obj->Info.HP = 0;
	_Obj->Info.MP = 0;
	_Obj->Info.Level = 0;

	switch (ObjectType)
	{
	case TYPE_PLAYER:
		_Obj.Info.Name = 0;
		break;
	case TYPE_ENEMY:
		_Obj.Info.Name = (char*)"";
		break;
	}
	
	//_Obj.Info.Name = 0;

}



char* SetName()
{
	char Buffer[128] = "";

	printf_s("이름 입력 : ");
	scanf_s("%s", Buffer)


	char* pName = (char*)malloc(strlen(Buffer) + 1);
	strcpy(pName)
}