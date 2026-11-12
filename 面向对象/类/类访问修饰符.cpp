//公有成员在程序中任何地方都能访问，无需通过成员函数读写



//私有成员对类外完全封闭，外部代码无法读取、修改或调用，派生类同样无权直接访问。只有类自身的成员函数与被授予友元权限的实体能够操作这些内容。
//类中若未使用任何访问说明符，成员默认为私有。
//实际操作中，一般在私有区域定义数据，在公有区域定义相关的函数，以便在类的外部也可以调用这些函数。
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
 
   private:
      double width;
};
 
// 成员函数定义
double Box::getWidth(void)//读取赋值后的私有成员变量
{
    return width ;
}
 
void Box::setWidth( double wid )//用成员函数设置宽度
{
    width = wid;
}
 
// 程序的主函数
int main( )
{
   Box box;
 
   // 不使用成员函数设置长度
   box.length = 10.0; // OK: 因为 length 是公有的
   cout << "Length of box : " << box.length <<endl;
 
   // 不使用成员函数设置宽度
   // box.width = 10.0; // Error: 因为 width 是私有的
   box.setWidth(10.0);  // 使用成员函数设置宽度
   cout << "Width of box : " << box.getWidth() <<endl;
 
   return 0;
}

//protected 的存在主要是为了继承。
//如果没有继承，它和 private 一样（外人不可见）
//如果有继承，子类（派生类）可以访问父类的 protected 成员，但不能访问 private 成员。
//  class SmallBox:Box    // SmallBox 是派生类
//定义一个子类时（如 class B : public A），冒号后面的 public 也是一种访问修饰符，它决定了父类的成员在子类中"表现"成什么样。
//Public 继承：父类的属性保持不变（最常用）。
//Private/Protected 继承：会收紧父类成员的权限，通常用于特殊的实现场景。