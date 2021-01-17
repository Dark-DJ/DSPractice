#include <stdio.h>
#include <stdlib.h>

#include "HashTable.h"

struct Student
{
    int age;
    float score;
    char name[25];
    char data[1024*10];
};

static void free_student(void* stu)
{
    free(stu);
}

// 顯示學生信息的函數
static void show_student(struct Student* p)
{
    printf("姓名:%s, 分數:%.2f\n", p->name, p->score);
}

int main()
{
    //新建一個HashTable實例
    HashTable* ht = hash_table_new();
    if (NULL == ht) {	
        return 1;
    }


    for (int i = 0; i < 100; i++) {
        struct Student * stu = (struct Student*)malloc(sizeof(struct Student));
        stu->score = 50.0f + rand() % 100;
        sprintf(stu->name, "學生%d", i);
        hash_table_put2(ht, stu->name, stu, free_student);
    }

    // 根据學生姓名查找學生架構體 
    for (int i = 0; i < 100; i++) {
        char name[25];
        sprintf(name, "學生%d", i);
        struct Student * stu = (struct Student*)hash_table_get(ht, name);
        show_student(stu);
    }

    hash_table_delete(ht);
    return 0;
}
