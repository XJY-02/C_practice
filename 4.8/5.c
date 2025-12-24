#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float FileSize, DownloadSpeed;
    printf("请输入文件大小（MB）和下载速度（Mb/s）：");
    while (scanf("%f%f", &FileSize, &DownloadSpeed) != 2) {
        printf("无效输入");
        while (getchar() != '\n') {
            ;
        }
    }
    float time = (FileSize * pow(2, 20) * 8) / (DownloadSpeed * 1e6);
    printf(
        "At %.2f megabits per second, a file of %.2f megabytes\n"
        "downloads in %.2f seconds.",
        DownloadSpeed, FileSize, time);

    return 0;
}