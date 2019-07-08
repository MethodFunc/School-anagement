#include "main.h"

enum main_select { TLIST = '1' ,TADD ,TDEL, TSCH, EXIT };

void main_menu()
{

	printf("[1]������  [2]����  [3]�л�  [4]����\n");
}

void admin_menu()
{
	int iCnum;
	unsigned int uiRecord = 0;
	Teach* Head = 0;

	for (;;)
	{
		
		printf("[1]������� [2]�������  [3]��������  [4]����ã��  [5]����\n");
		iCnum = _getch();

		switch (iCnum)
		{
		case TLIST:
			TeachPrint(Head);
			continue;

		case TADD:
			Head = InsTeach(Head, NewTeach());
			++uiRecord;
			continue;
			
		case TDEL:
			TeachDel(Head);
			continue;

		case TSCH:
			TeachSearch(Head);
			continue;

		case EXIT:
			break;
			
		default:
			system("cls");
			continue;
		}
		break;
	}
	LinkFree(Head);
}