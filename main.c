#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define POS_X1 35
#define POS_X2 40
#define POS_X3 50
#define POS_X4 65
#define POS_Y 3
int Menu(void);
void SetPosition(int x,int y);
int main() {
    char ch;
    system("mode con cols=130 lines=60");
    system("color 0A");
    while (1)
    {
        system("cls");
        ch=Menu();
        switch (ch) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;
            case 14:
                break;
            case 15:
                break;
            case 16:
                break;
            case 0:
                break;
        }
    }
    return 0;
}
int Menu(void)
{
    int posy=13;
    int option;
    SetPosition(POS_X3,posy);
    printf("\t\t    ********************************************************\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t    *                   ѧ����Ϣ����ϵͳ                   *\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t    ********************************************************\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ������������������������������������������������������������������������������������������������������������������\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��       1. ����ѧ����Ϣ           2. ����ѧ���ɼ�       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��                                                       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��       3. ɾ��ѧ����Ϣ           4. ��ѧ�Ų��Ҽ�¼     ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��                                                       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��       5. ���������Ҽ�¼         6. �޸�ѧ����Ϣ       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��                                                       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��       7. ����ѧ���ɼ�           8. ����γ̳ɼ�       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��                                                       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��       9. ��ѧ������            10. ����������         ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��                                                       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��      11. ���ܳɼ���������      12. ���ܳɼ���������   ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��                                                       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��      13. ѧ���ɼ�ͳ��          14. ��ӡѧ����¼       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��                                                       ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ��      15. ѧ����¼����          16. �Ӵ��̶�ȡѧ����¼ ��\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ������������������������������������������������������������������������������������������������������������������\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ����ѡ��(0-6):");

    printf("��ѡ������Ҫ���еĲ���[0~16]:[  ]\b\b\b");
    scanf("%d",option);;
    return option;
}
void SetPosition(int x,int y)
{
    HANDLE hOut;
    COORD pos;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X=x;
    pos.Y=y;
    SetConsoleCursorPosition(hOut,pos);
}
