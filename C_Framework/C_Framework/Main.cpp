// �����Բ��� �ۼ��� �ڵ忡�ٰ� ������ϴ� �����ð��� ���� ġ�⸸ �ϴ� ��ġ�� ȥ�� ���� ��ư� ���� ���̵� ��� ���⸸ �߳׿� ��


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // ���� �⺻ ��� standard infoot outfoot�� ���Ӹ�
#include <malloc.h>  // ���� �Ҵ��� �ϱ� ���� �ʿ��� ���
#include <string>    // 
#include <time.h>    // 


const int TYPE_PLAYER	= 1;  // const�� ��� ���� type_player ��°��� ��� 1 �̶�°��� �ǹ�
const int TYPE_ENEMY	= 2;  // const�� ��� ���� type_enemy ��°��� ��� 2 ��°��� �ǹ�




typedef struct tagInfo       // ���� ���̴� ���� �������� ��Ƴ��� INFO��� ����ü 
{
	char* Name;              // �г����̱� ������ ���� �ڷ����� char* �����͸� ���
	int HP;                  // ���� �ڷ��� int hp (ü��)
	int MP;                  // ���� �ڷ��� int mp (����)

	int EXP;                 // ���� �ڷ��� int exp (����ġ)

	float Att;               // �Ǽ� �ڷ��� float att (���ݷ�)
	float Def;               // �Ǽ� �ڷ��� float def (����) 

	int Level;               // ���� �ڷ��� int level (����)
	
}INFO;                       


typedef struct tagObject     // �̰� �� �𸣰ڽ��ϴ�... INFO ��� ����ü�� OBJECT��� �̸����� �ٲ��ذŶ�� ������ ��ϴٸ� �ƴѰ� �����ϴ�..������
{
	INFO Info;

}OBJECT;







void InitializeObject(OBJECT* _Obj, int ObjectType);     // initializeObject�� ���� �� �𸣰ڽ��ϴ�
char* SetName();                                         // �̰͵� �� �𸣰ڽ��ϴ�


int main(void)
{
	OBJECT* Player = (OBJECT*)malloc(sizeof(OBJECT));    // ���� �ִ� ����ü OBJECT�� �����ͷ� ����ϱ� ���� �����Ҵ�
	InitializeObject(Player, TYPE_PLAYER);

	OBJECT* Enemy = (OBJECT*)malloc(sizeof(OBJECT));;    // ���� �ִ� ����ü OBJECT�� �����ͷ� ����ϱ� ���� �����Ҵ�
	InitializeObject(Enemy, TYPE_ENEMY);

	while (true)                                         //while �� ���ǽ��� ture�� �Ǿ��ֱ⿡ �ݺ�����
	{
		// ** �ܼ�â�� ��� ����.
		system("cls");

		printf_s("\n[%s]\n", Player->Info.Name);         // �������� name�� ����ü ���ο� ���� �׸��� ���ڸ� ����ϴ� %s�� ���
 		printf_s("HP : %d\n", Player->Info.HP);          // ����ü ���� ������ HP�� ���� �� ���
		printf_s("MP : %d\n", Player->Info.MP);          // ����ü ���� ������ MP�� ���� �� ���
		printf_s("���ݷ� : %.2f\n", Player->Info.Att);   // �Ҽ��� 2�ڸ����� ǥ�õǴ� ���ݷ� float �Ǽ� , player ->info.att �� ����ü ���ο��� ������ �����ϱ�����
		printf_s("���� : %.2f\n", Player->Info.Def);   // �Ҽ��� 2�ڸ����� ǥ�õǴ� ���� float �Ǽ� , player ->info.def �� ����ü ���ο��� ������ �����ϱ�����
		printf_s("EXP : %d\n", Player->Info.EXP);        // ����ü ���� ������ EXP�� ���� �� ���
		printf_s("Level : %d\n\n", Player->Info.Level);  // ����ü ���� ������ level�� ���� �� ���

		printf_s("[%s]\n", Enemy->Info.Name);            // �������� name�� ����ü ���ο� ���� �׸��� ���ڸ� ����ϴ� %s�� ���
		printf_s("HP : %d\n", Enemy->Info.HP);           // ����ü ���� ������ HP�� ���� �� ���
		printf_s("MP : %d\n", Enemy->Info.MP);           // ����ü ���� ������ MP�� ���� �� ���
		printf_s("���ݷ� : %.2f\n", Enemy->Info.Att);    // �Ҽ��� 2�ڸ����� ǥ�õǴ� ���ݷ� float �Ǽ� , player ->info.att �� ����ü ���ο��� ������ �����ϱ�����
		printf_s("���� : %.2f\n", Enemy->Info.Def);    // �Ҽ��� 2�ڸ����� ǥ�õǴ� ���� float �Ǽ� , player ->info.def �� ����ü ���ο��� ������ �����ϱ�����
		printf_s("EXP : %d\n", Enemy->Info.EXP);         // ����ü ���� ������ EXP�� ���� �� ���
		printf_s("Level : %d\n\n", Enemy->Info.Level);   // ����ü ���� ������ level�� ���� �� ���

		int iChoice = 0;  // iChoice��� ������ ����
		printf_s("���Ϳ� �������ϴ�. �����Ͻðڽ��ϱ� ?\n1. ����\n2. ����\n�Է� : "); // 2���� ���� ���� ������ �� �Է¶� ���
		scanf_s("%d", &iChoice);  // iChoice ��� ������ �Է�


		switch (iChoice) //iChoice��� ������ � ���� ������ ���� switch��
		{
		case 1:                                                          // 1�� �Էµ� ��
			if (Player->Info.Att > Enemy->Info.Def)                      // ���ǹ� if �÷��̾��� ���ݷ��� ���� ���º��� Ŭ ��
			{
				Enemy->Info.HP -= Player->Info.Att - Enemy->Info.Def;    // �÷��̾��� ���ݷ��� ���� ���¸�ŭ ���ְ� �� ���� ���ݷ� ���� �� ü�¿� ���־��
			}
			else                                                         // �װ� �ƴ϶��?
				Enemy->Info.HP -= 1;                                     // �� ü�� 1��ŭ�� ��´�
			break;                                                       // break�� switch �� Ż��
		case 2:                                                          // 2�� �Էµ� ��
			printf_s("����ġ�°Ϳ� [����] �߽��ϴ�.\n");                 // ����ġ�°Ϳ� ���� �ߴٴ� ���� ���
			break;                                                       // break�� switch �� Ż��
		}
	}
	
	return 0;
}




void InitializeObject(OBJECT* _Obj, int ObjectType)  // �̰� �Ʒ��� �� �𸣰ڽ��ϴ٤�
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

	printf_s("�̸� �Է� : ");
	scanf("%s", Buffer);

	char* pName = (char*)malloc(strlen(Buffer) + 1);
	strcpy(pName, Buffer);

	return pName;
}
