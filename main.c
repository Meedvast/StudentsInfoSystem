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
    system("color 0E");
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
    int posy=5;
    int option;
    SetPosition(POS_X3,posy);
    printf("ѧ���ɼ�����ϵͳ\n");
    for (int j = 0; j < 55; ++j) {
        printf("����");
    }
    SetPosition(POS_X1,++posy);
    printf("1.����ѧ����Ϣ");
    SetPosition(POS_X4,posy);
    printf("2.����ѧ���ɼ�");
    SetPosition(POS_X1,posy+=2);
    printf("3.ɾ��ѧ����Ϣ");
    SetPosition(POS_X4,posy);
    printf("4.��ѧ�Ų��Ҽ�¼");
    SetPosition(POS_X1,posy+=2);
    printf("5.���������Ҽ�¼");
    SetPosition(POS_X4,posy);
    printf("6.�޸�ѧ����Ϣ");
    SetPosition(POS_X1,posy+=2);
    printf("7.����ѧ���ɼ�");
    SetPosition(POS_X4,posy);
    printf("8.����γ̳ɼ�");
    SetPosition(POS_X1,posy+=2);
    printf("9.��ѧ������");
    SetPosition(POS_X4,posy);
    printf("10.����������");
    SetPosition(POS_X1,posy+=2);
    printf("11.���ܳɼ���������");
    SetPosition(POS_X4,posy);
    printf("12.���ܳɼ���������");
    SetPosition(POS_X1,posy+=2);
    printf("13.ѧ���ɼ�ͳ��");
    SetPosition(POS_X4,posy);
    printf("14.��ӡѧ����¼");
    SetPosition(POS_X1,posy+=2);
    printf("15.ѧ����¼����");
    SetPosition(POS_X4,posy);
    printf("16.�Ӵ��̶�ȡѧ����¼");
    SetPosition(POS_X1,posy+=2);
    printf("0.�Ƴ�");
    for (int i = 0; i < 2; ++i) {
        SetPosition(POS_X1,++posy);
        for (int j = 0; j < 55; ++j) {
            printf("����");
        }
    }
    SetPosition(POS_X1,++posy);
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
