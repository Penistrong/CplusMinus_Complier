/*
* @Author:	Penistrong
* @Date:	2019-12-24 21:35:16
* @Last Modified by:	Penistrong
* @Last Modified time:	2019-12-24 21:35:16
* @Description: 生成目标代码
*/
#include "OC.h"

int initOCgenerator(){
    printf("初始化OC生成器\n");
    if((OC_out = fopen("./ObjectCode.asm", "w")) == NULL)
        return 0;
    initOCasm(OC_out);
}

//给ObjectCode.asm添加初始化的头部,诸如read与write函数
void initOCasm(FILE* file){
    fprintf(file,".data\n");
    fprintf(file,"_prompt: .asciiz \"Enter an integer:\"\n");
    fprintf(file,"_ret: .asciiz \"\\n\" \n");
    fprintf(file,".globl main \n");
    fprintf(file,".text \n");
    fprintf(file,"read: \n");
    fprintf(file,"\tli $v0, 4 \n");
    fprintf(file,"\tla $a0, _prompt \n");
    fprintf(file,"\tsyscall \n");
    fprintf(file,"\tli $v0, 5 \n");
    fprintf(file,"\tsyscall \n");
    fprintf(file,"\tjr $ra \n");
    fprintf(file,"write: \n");
    fprintf(file,"\tli $v0, 1 \n");
    fprintf(file,"\tsyscall\n");
    fprintf(file,"\tli $v0, 4 \n");
    fprintf(file,"\tla $a0, _ret \n");
    fprintf(file,"\tsyscall \n");
    fprintf(file,"\tmove $v0, $0 \n");
    fprintf(file,"\tjr $ra \n");
    fflush(file);
}

void generateOC(pTACnode tac_root){
    if(!initOCgenerator())
        return;
}