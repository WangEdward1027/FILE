//1.strcpy、strncpy、memcpy
//2.手动实现strcpy

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

//1.strcpy:仅能复制字符串 char*
//优点:strcpy会自动添加'\0'
//缺点:可能存在内存越界、内存重叠问题
void test(){
    char des[20] = {0};
    strcpy(des, "Hello");
    cout << des << endl;
}

//2.strncpy:仅能复制字符串 char*,有长度限制
//源字符串长度大于等于指定长度,不会自动添加'\0',需要手动添加
void test2(){
    char dest[10] = {0};
    int len = sizeof(dest);
    strncpy(dest, "Hello,World!", len-1);
    dest[len-1] = '\0';  //手动添加空字符
    cout << dest << endl; // Hello,Wor
}

//3.memcpy:可以复制任意内存 void*
void test3(){
    int des[20] = {0};
    int src[] = {1,2,3};
    int len = sizeof(src)/sizeof(src[0]);
    memcpy(des, src, sizeof(src));
    for(int i = 0; i < len; ++i){
        cout << des[i] << " ";
    }
    cout << endl;
}

//手动实现strcpy
char* mystrcpy(char* dest, const char* src){
    
    
    char *dest_copy = dest;  // 保留目标字符串的起始地址
    while ((*dest++ = *src++) != '\0') {
        // 将 src 指针所指向的字符复制到 dest 指针所指向的位置，
        // 然后同时递增两个指针，直到遇到 '\0' 结束复制
    }
    return dest_copy;  // 返回目标字符串的起始地址   
}

void test4(){
    char des[20] = {0};
    mystrcpy(des, "Hello");
    cout << des << endl;
}

int main()
{
    /* test(); */
    /* test2(); */
    /* test3(); */
    test4();
    return 0;
}
