#include <stdio.h>

void main()
{
	while (1)
	{

		char ip[20] = { 0 };
		printf("입력값 : ");
		for (int i = 0; i < 20; i++)
		{
			scanf("%c", &ip[i]);
			if (ip[i] == 10)
			{
				ip[i] = 0;
				break;
			}
		}

		int c = 0;
		int ca = 0;

		int cal[16] = { 0 };

		for (int i = 0; i < 20; i++)
		{
			switch (ip[i])
			{
			case '0':	cal[c] = 0;	c++;	break;
			case '1':	cal[c] = 1;	c++;	break;
			case '2':	cal[c] = 2;	c++;	break;
			case '3':	cal[c] = 3;	c++;	break;
			case '4':	cal[c] = 4;	c++;	break;
			case '5':	cal[c] = 5;	c++;	break;
			case '6':	cal[c] = 6;	c++;	break;
			case '7':	cal[c] = 7;	c++;	break;
			case '8':	cal[c] = 8;	c++;	break;
			case '9':	cal[c] = 9;	c++;	break;
			case '-':
			case ' ':				break;
			case 0:	cal[c] = 0;		break;
			default:	cal[c] = 0;	ca++;	break;
			}
		}

		if (ca > 0)
		{
			printf("...개인정보가 아닙니다.\n");
		}
		else
		{
			if (c == 13)
			{
				int total = 0;
				for (int i = 0; i < 8; i++)
				{
					total += cal[i] * (i + 2);
				}
				for (int i = 8; i < 12; i++)
				{
					total += cal[i] * (i - 6);
				}

				int m = (11 - (total % 11)) % 10;

				if (m == cal[12])	// 13자리와의 비교
				{
					printf("...주민번호가 맞습니다.\n");
				}
				else printf("...개인정보가 아닙니다.\n");
			}

			else if (c == 16)
			{
				printf("...카드번호가 맞습니다.\n");
			}

			else
			{
				printf("...개인정보가 아닙니다.\n");
			}
		}
		printf("\n\n");
	}	// 
}