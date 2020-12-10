#include <stdio.h>

int main(void)
{
    int suuti;
    scanf("%d", &suuti);

    // 苦しんで覚えるC言語では、ブロックなしの形を先に教えて、その後ブロック付きを覚えるようになっている。
    // ブロックありの形式のほうが見やすいけど、こっちが変形？
    if (suuti == 10)
    {
        printf("入力値は１０です\n");
    }
    else
    {
        printf("入力値は１０ではありません\n");
    }

    return 0;
}
