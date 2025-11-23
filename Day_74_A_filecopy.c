//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char srcname[256], dstname[256];
    FILE *src, *dst;
    int ch;

    printf("Enter source filename: ");
    if (scanf("%255s", srcname) != 1) return 1;
    printf("Enter destination filename: ");
    if (scanf("%255s", dstname) != 1) return 1;

    src = fopen(srcname, "rb");
    if (!src) {
        perror("Cannot open source file");
        return 1;
    }

    dst = fopen(dstname, "wb");
    if (!dst) {
        perror("Cannot open destination file");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dst) == EOF) {
            perror("Write error");
            fclose(src);
            fclose(dst);
            return 1;
        }
    }

    if (ferror(src)) {
        perror("Read error");
        fclose(src);
        fclose(dst);
        return 1;
    }

    fclose(src);
    fclose(dst);
    printf("Copy completed successfully.\n");
    return 0;
}
