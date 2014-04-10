//
//  Mode.c
//  PointTest
//
//  Created by wangbin on 14-4-10.
//  Copyright (c) 2014年 wangbin. All rights reserved.
//

#include <stdio.h>
#include "StructArray.h"

void method()
{
    printf("aha \n");
}

void structPrintf()
{
    struct Students stu[2];
    for (int i = 0; i < 2; i++) {
        printf("input student %d info please.\n",i+1);
        printf("number:");
        scanf("%s",stu[i].number);
        printf("name:");
        scanf("%s",stu[i].name);
        
        for (int j = 0; j < 3; j++) {
            printf("score %d:",j+1);
            scanf("%f",&stu[i].score[j]);
        }
        printf("\n");
    }
    doStructPrintf(stu);
}

void doStructPrintf(struct Students stu[2]){
    printf("output student info number,name,score1,score2,score3.\n");
    for (int i = 0; i < 2; i++) {
        printf("%-6s,%-6s\n",stu[i].number,stu[i].name);
        for (int j = 0; j < 3; j++) {
            printf(" %-8f",stu[i].score[j]);
        }
        printf("\n");
    }
}