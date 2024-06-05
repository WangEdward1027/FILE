#include <stdio.h>
#include <fcntl.h>
#include <error.h>
#include <errno.h>
#include <sys/types.h>  
#include <sys/stat.h>
#include <unistd.h>

//stat、fstat 获取文件信息，如长度 st_size

void test1(){
    struct stat file_state;
    stat("./1.png", &file_state);
    printf("file size = %ld\n", file_state.st_size);
}

void test2(){
    int fd = open("./1.png",O_RDONLY);
    if(fd == -1)    error(1, errno, "open");
    struct stat st;
    fstat(fd, &st);
    printf("file size = %ld\n", st.st_size);
}

int main(void)
{
    test1();
    test2();
    return 0;
}
