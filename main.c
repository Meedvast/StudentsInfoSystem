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
    printf("学生成绩管理系统\n");
    for (int j = 0; j < 55; ++j) {
        printf("——");
    }
    SetPosition(POS_X1,++posy);
    printf("1.输入学生信息");
    SetPosition(POS_X4,posy);
    printf("2.增加学生成绩");
    SetPosition(POS_X1,posy+=2);
    printf("3.删除学生信息");
    SetPosition(POS_X4,posy);
    printf("4.按学号查找记录");
    SetPosition(POS_X1,posy+=2);
    printf("5.按姓名查找记录");
    SetPosition(POS_X4,posy);
    printf("6.修改学生信息");
    SetPosition(POS_X1,posy+=2);
    printf("7.计算学生成绩");
    SetPosition(POS_X4,posy);
    printf("8.计算课程成绩");
    SetPosition(POS_X1,posy+=2);
    printf("9.按学号排序");
    SetPosition(POS_X4,posy);
    printf("10.按姓名排序");
    SetPosition(POS_X1,posy+=2);
    printf("11.按总成绩降序排序");
    SetPosition(POS_X4,posy);
    printf("12.按总成绩升序排序");
    SetPosition(POS_X1,posy+=2);
    printf("13.学生成绩统计");
    SetPosition(POS_X4,posy);
    printf("14.打印学生记录");
    SetPosition(POS_X1,posy+=2);
    printf("15.学生记录存盘");
    SetPosition(POS_X4,posy);
    printf("16.从磁盘读取学生记录");
    SetPosition(POS_X1,posy+=2);
    printf("0.推出");
    for (int i = 0; i < 2; ++i) {
        SetPosition(POS_X1,++posy);
        for (int j = 0; j < 55; ++j) {
            printf("——");
        }
    }
    SetPosition(POS_X1,++posy);
    printf("请选择你想要进行的操作[0~16]:[  ]\b\b\b");
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
