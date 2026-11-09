#include <iostream>
using namespace std;
 
int main ()
{
   // 局部变量声明
   int a = 100;
 
   // 检查布尔条件
   if( a < 20 )
   {
       // 如果条件为真，则输出下面的语句
       cout << "a 小于 20" << endl;
   }
   else
   {
       // 如果条件为假，则输出下面的语句
       cout << "a 大于 20" << endl;
   }
   cout << "a 的值是 " << a << endl;
 
   return 0;
}

//一个 if 语句后可跟一个可选的 else if...else 语句，这可用于测试多种条件。

//当使用 if...else if...else 语句时，以下几点需要注意：

//一个 if 后可跟零个或一个 else，else 必须在所有 else if 之后。
//一个 if 后可跟零个或多个 else if，else if 必须在 else 之前。
//一旦某个 else if 匹配成功，其他的 else if 或 else 将不会被测试。
