//strcpy和memcpy

#include <string.h>
#include <iostream> 
using std::cout;
using std::endl;

//1.strcpy:仅能复制字符串 char*
void test(){
    char des[20] = {0};
    strcpy(des, "Hello");
    cout << des << endl;
}

//2.memcpy:可以复制任意内存 void*
void test2(){
    int des[20] = {0};
    int src[] = {1,2,3};
    int len = sizeof(src)/sizeof(src[0]);
    memcpy(des, src, sizeof(src));
    for(int i = 0; i < len; ++i){
        cout << des[i] << " ";
    }
    cout << endl;
}

int main()
{
    test();   
    test2();   
    return 0;
}
