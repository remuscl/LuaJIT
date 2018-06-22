#include<stdio.h>
extern int* gli;
void __attribute__((force_align_arg_pointer)) test(){
    *gli = *gli + 1;
    printf("hah:)");
}
