#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int* gli;
void __attribute__((force_align_arg_pointer)) test(){
    *gli = *gli + 1;
    printf("hah:)");
}
void *
xcalloc (size_t x, size_t y)
{
  size_t sz;
  if (__builtin_mul_overflow (x, y, &sz))
    return NULL;
  void *ret = malloc (sz);
  if (ret) memset (ret, 0, sz);
  return ret;
}
