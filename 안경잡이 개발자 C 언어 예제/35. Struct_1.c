#include <stdio.h>
#include <stdlib.h>
struct stduent
{
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct stduent s;
    s.number = 20150001;
    strcpy(s.name, "홍길동");
    s.grade = 4.5;
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.lf\n", s.grade);
    return 0;
}

// 학번 : 20150001
// 이름 : 홍길동
// 학점 : 4.5
