//runoobAarray 是一个指向 &runoobAarray[0] 的指针，即数组 runoobAarray 的第一个元素的地址。
//因此，下面的程序片段把 p 赋值为 runoobAarray 的第一个元素的地址：
//double *p;
//double runoobAarray[10];

//p = runoobAarray;

//使用数组名作为常量指针是合法的，反之亦然。因此，*(runoobAarray + 4) 是一种访问 runoobAarray[4] 数据的合法方式。

//一旦把第一个元素的地址存储在 p 中，就可以使用 *p、*(p+1)、*(p+2) 等来访问数组元素。

#include <iostream>
using namespace std;
 
int main ()
{
   // 带有 5 个元素的双精度浮点型数组
   double runoobAarray[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
 
   p = runoobAarray;
 
   // 输出数组中每个元素的值
   cout << "使用指针的数组值 " << endl; 
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
   }
 
   cout << "使用 runoobAarray 作为地址的数组值 " << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(runoobAarray + " << i << ") : ";
       cout << *(runoobAarray + i) << endl;
   }
 
   return 0;
}

//把指针运算符 * 应用到 var 上是完全可以的，但修改 var 的值是非法的。这是因为 var 是一个指向数组开头的常量，不能作为左值。
//数组名++是非法的

//由于一个数组名对应一个指针常量，只要不改变数组的值，仍然可以用指针形式的表达式。
//例如，下面是一个有效的语句，把 var[2] 赋值为 500：

//*(var + 2) = 500;