 /******************************************************************************
  �� �� ��   : test.c
  �� �� ��   : ����
  ��    ��   : ������
  ��������   : ������ 2009��5��14��
  ����޸�   :
  ��������   : 
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : ������ 2009��5��14��
  ��������   : ���Զ�̬����
    �޸�����   : �����ļ�

******************************************************************************/
#ifndef __TEST_C__
#define __TEST_C__

//#pragma arm

//#pragma no_debug
#include "stdio.h"
#define NULL 0

int *p;
int da;
char d;
struct dada_
{
	int a;
	int b;
	};
	struct dada_ *ddadada;
	 
int  a_Num = 3;
short int  a_CntA = 0x6d;
char  a_char = 'T';
char  b_char = 'i';

int my_add(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    return (a+b);
}

int entrance(void)
{
	char destSting[100] = "dadadada";
#if 0
    //Dyl_Comm_Memset(destSting, '\0', sizeof(destSting));
//    Dyl_Comm_Wsprintf(destSting, "%c%c%c:2+%d = %d ", a_char, b_char, a_Num, a_CntA, a_Num, my_add(2,a_Num));
    DisplayPopup((char*)destSting, NULL, NULL, 2000, NULL);
    my_add(1,2);
    //Dyl_Comm_Trace_For_Test(0, "%s",destSting);
    a_CntA++;
#else
    
    //memset(destSting, '\0', 50);
   sprintf(destSting, "%c%c%c:2 + %d = %d", a_char, b_char, a_CntA, a_Num, my_add(2, a_Num));
    
    printf("%s",destSting);
    a_CntA++;
#endif

printf("%x %x %x %x\n",(int)p,(int)da,(int)d,(int)ddadada);
	return 0;
}
int main()
{return 0;}

#endif/*__TEST_C__*/

