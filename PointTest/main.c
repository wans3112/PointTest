//
//  main.c
//  PointTest
//
//  Created by wangbin on 14-3-27.
//  Copyright (c) 2014年 wangbin. All rights reserved.
//
//参考网址:http://blog.chinaunix.net/uid-22889411-id-59688.html

#include <stdio.h>
#include "Mode.h"

//void Exchg1(int x, int y)
//{
//    int tmp;
//    tmp=x;
//    x=y;
//    y=tmp;
//    printf ("x=%d,y=%d\n",x,y);
//}


void Exchg2(int *px, int *py)
{
    int tmp=*px;
    *px=*py;
    *py=tmp;
    printf("*px=%d,*py=%d\n",*px,*py);
}

void find(char array[],char t,char **pi)
{
    for (int i = 0; *(array+i)!=0; i++) {
        if (*(array+i) == t) {
//            printf("find char point:%d>>\n",array+i);
            *pi=array+i;
            break;
        }else if(*(array+i) == 0){
//            printf("not find char >>\n");
            *pi=0;
            break;
        }
    }
}

void doFind()
{
    char array[]={"wansgjkllfjskl/0"};
    char tag='f';
    char *p=0;
    find(array,tag,&p);
    if (p == 0) {
        printf("没找到\n");
    }else{
        printf("找到了 p value:%d\n",*p);
    }

}

//函数声明
void logChar(int);
void doLogChar();
//定义一个函数指针类型，该函数类型必须为:只有一个int型参数，及无返回值。
typedef void (* PM)(int);
//声明一个“PM”类型的全局变量pm
PM pm;
//将函数指针当作参数传递给函数
void methodNamePointWithParameter(PM,int);
void doMethodNamePointWithParameter();

int main(int argc, const char * argv[])
{
    
//    doFind();
//    doLogChar();
    
//    doMethodNamePointWithParameter();
    
    method();
    return 0;
}

void logChar(int l)
{
    printf("log message:%d\n",l);
}

void doLogChar()
{
    pm=logChar;//此处 pm=&logChar 也一样，即:pm为函数指针，函数名logChar代表函数首地址（函数的指针）,而 &logChar 为取函数的指针。两种效果一样。
    
    (*pm)(3); //此处pm(3)调用函数也一样， 为统一起见，pm函数指针变量也可以pm（10）的形式来调用。
    
}

//参数pM的类型为PM（函数指针型）
void methodNamePointWithParameter(PM pM,int para)
{
    pM(para);
}

void doMethodNamePointWithParameter()
{
    pm=logChar;
    methodNamePointWithParameter(pm, 521);
}
