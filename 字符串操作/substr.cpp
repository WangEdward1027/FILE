//substr的用法: string str2 = str1.substr(起始位置, 截取的子串长度)

#include <string.h>
#include <iostream> 
#include <string>
using std::cout;
using std::endl;
using std::string;

void test(){
    string str1 = "Hello,World!";
    string str2 = str1.substr(0,6); //从下标为0开始,提取长度为6
    string str3 = str1.substr(6,6); //从下标为6开始,提取长度为6
    cout << str2 << endl; //Hello,
    cout << str3 << endl; //World!
}

int main()
{
    test();   
    return 0;
}
