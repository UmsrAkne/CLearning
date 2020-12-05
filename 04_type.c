# include <stdio.h>

int main(void){

    printf("%d\n", 2.0);
    // %d は整数を表示するためのものなので、実数を正しく表示することはできない

    printf("%f\n", 2.0);
    // 実数を表示するには %f を使用する。
    
    printf("%d\n", (int)(1.05 * 360));
    // 実数を整数にキャスト

    return 0;
}