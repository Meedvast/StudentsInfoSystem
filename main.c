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
    printf("\t\t    *                   学生信息管理系统                   *\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t    ********************************************************\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   ┌───────────────────────────────────────────────────────┐\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │       1. 输入学生信息           2. 增加学生成绩       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │                                                       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │       3. 删除学生信息           4. 按学号查找记录     │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │                                                       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │       5. 按姓名查找记录         6. 修改学生信息       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │                                                       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │       7. 计算学生成绩           8. 计算课程成绩       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │                                                       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │       9. 按学号排序            10. 按姓名排序         │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │                                                       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │      11. 按总成绩降序排序      12. 按总成绩降序排序   │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │                                                       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │      13. 学生成绩统计          14. 打印学生记录       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │                                                       │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   │      15. 学生记录存盘          16. 从磁盘读取学生记录 │\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   └───────────────────────────────────────────────────────┘\n");
    SetPosition(POS_X3,++posy);
    printf("\t\t   请您选择(0-6):");

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
