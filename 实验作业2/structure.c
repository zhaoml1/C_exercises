#include <stdio.h>

struct books//声明一个结构体
{
    char title[50] ;
    char author [50];
    char subject [100];
};

int main()
{
    struct books s1 =
    {
        "语文课本",
        "国家教育局",
        "人文科学"
    };

    printf ("书本标题为：%s\n出版社为:%s\n科目为:%s\n",s1.title,s1.author,s1.subject);
    return 0;
}
