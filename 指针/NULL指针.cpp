//在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为空指针。
//NULL 指针是一个定义在标准库中的值为零的常量。请看下面的程序：
#include <iostream>

using namespace std;

int main ()
{
   int  *ptr = NULL;

   cout << "ptr 的值是 " << ptr ;  //输出ptr的地址
 
   return 0;
}
