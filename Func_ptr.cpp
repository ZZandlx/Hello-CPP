/*
函数指针：
    函数地址：函数二进制代码的起始地址
    获取函数地址：直接使用函数名（不加括号）
                 一旦加了括号就表示函数返回值
    声明函数指针：
            1、指定函数指针指向的类型，就是函数返回值的类型
            2、函数参数列表不变，函数名变为指针
            dopuble (*p)(int a,int b);
        声明技巧：先写函数原型，然后再将函数名替换为指针

    使用函数指针
            直接将函数名字赋值给相应的指针即可，需要保证指针的类型和函数的返回值类型相同
            函数指针p 和 *p 等价，使用时可以互换
   函数指针数组：
            int （*p[]）（int a,int b）;
            []的优先级高于*，表明p是一个数组，数组内容是一些列指针 指针指向的类型是int型         

*/
#include<iostream>
using namespace std;
int func1(int temp1,int temp2){
    return temp1*temp2;
}
int func2(int temp1,int temp2){
    return temp1 / temp2;
}
int main(){
    //声明函数指针：将函数名变为指针并用括号包含
    int (*fun)(int x,int y);
    //函数指针赋值：直接将函数名或者函数名取地址赋值给指针
    fun = func1;
    fun = &func1;
    //使用函数指针：把指针当作函数使用即可
    cout << fun(15,5) <<endl;
    fun = func2;
    cout << (*fun)(15,5) << endl;
    //cout << sizeof(func1) << endl;
    cout << sizeof(&func1) << endl;
    return 0;
}















