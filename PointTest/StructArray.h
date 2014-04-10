//
//  Mode.h
//  PointTest
//
//  Created by wangbin on 14-4-10.
//  Copyright (c) 2014年 wangbin. All rights reserved.
//

#ifndef PointTest_Mode_h
#define PointTest_Mode_h

void method();

void structPrintf();

struct Students {
    char number[10] ;
    char name[10];
    float score[3];
};

void doStructPrintf(struct Students stu[2]);
#endif
