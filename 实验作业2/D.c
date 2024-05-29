/*编写一个程序
通过输入学生的班级以及挂科数目
给学生的成绩进行打分
并将结果反馈出来*/
#include <stdio.h>  
#include <stdbool.h>  
  
bool getInput(int *class, int *failed_subject) {  
    printf("请输入你的班级(1-3) :\n");  
    if (scanf("%d", class) != 1 || (*class < 1 || *class > 3)) {  
        printf("输入无效，请重新输入。\n");  
        while (getchar() != '\n'); // 清除输入缓冲区  
        return false;  
    }  
    printf("请输入你不及格的科目的数目：\n");  
    if (scanf("%d", failed_subject) != 1) {  
        printf("输入无效，请重新输入。\n");  
        while (getchar() != '\n'); // 清除输入缓冲区  
        return false;  
    }  
    return true;  
}  
  
int main() {  
    int class, failed_subject;  
    bool keepRunning = true;  
  
    while (keepRunning) {  
        if (getInput(&class, &failed_subject)) {
            /*
            和原本的代码对比
            在进行switch语句之前，先进行了输入逻辑验证
            解决了潜在的输入缓冲区问题
            对于退出程序有一个明确的推出选项
            */       
            switch (class) {  
                case 1:  
                    if (failed_subject > 3) {  
                        printf("你没有任何成绩。\n");  
                    } else {  
                        printf("你每门科目获得了5分。\n");  
                    }  
                    break;  
                case 2:  
                    if (failed_subject > 2) {  
                        printf("你没有任何成绩。\n");  
                    } else {  
                        printf("你每门科目获得了4分。\n");  
                    }  
                    break;  
                case 3:  
                    if (failed_subject > 1) {  
                        printf("你没有任何成绩。\n");  
                    } else {  
                        printf("你每门科目获得了5分。\n");  
                    }  
                    break;  
                default:  
                    // 这部分逻辑不再需要，因为getInput已经处理了无效的输入  
                    break;  
            }  
        }  
        printf("您可以再按一次回车键退出程序。\n");  
        if (getchar() == '\n') {  
            keepRunning = false;  
        }  
    }  
    return 0;  
}