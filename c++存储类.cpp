//static
//用于定义具有静态存储期的变量或函数，生命周期贯穿程序运行期。
//在文件内部或全局作用域，static具有内部链接，只能在定义他们的文件中访问。
//使用 static 修饰局部变量可以在函数调用之间保持局部变量的值
#include <iostream>
 
// 函数声明 
void func(void);
 
static int count = 10; /* 全局变量 */
 
int main()
{
    while(count--)//后置递减，先判断真假后执行count=count-1,循环内count比外部小1
    {
       func();
    }
    return 0;
}
// 函数定义
void func( void )
{
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "变量 i 为 " << i ;
    std::cout << " , 变量 count 为 " << count << std::endl;
}




//extern
//用于声明具有外部链接的变量或函数，可以在多个文件之间共享。
//在一个文件中使用extern声明另一个文件中定义的全局变量或函数，可以实现跨文件共享。
//auto
//auto f = 3.14
//auto s("hello world")
