/* usage: cc ansi-colors.c && ./a.out */

#include <stdio.h>

int main()
{
    /* 前景色・太字・背景色 */

    printf("\e[39m");
    printf("%s", "前景色がデフォルト");
    printf("\e[39m");
    printf("\t");
    printf("\e[1m");
    printf("\e[39m");
    printf("%s", "前景色がデフォルトの太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t");
    printf("\e[49m");
    printf("%s", "背景色がデフォルト");
    printf("\e[49m");
    printf("\n");

    printf("\e[30m");
    printf("%s", "前景色が黒");
    printf("\e[39m");
    printf("\t\t");
    printf("\e[1m");
    printf("\e[30m");
    printf("%s", "前景色が黒の太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[40m");
    printf("%s", "背景色が黒");
    printf("\e[49m");
    printf("\n");

    printf("\e[31m");
    printf("%s", "前景色が赤");
    printf("\e[39m");
    printf("\t\t");
    printf("\e[1m");
    printf("\e[31m");
    printf("%s", "前景色が赤の太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[41m");
    printf("%s", "背景色が赤");
    printf("\e[49m");
    printf("\n");

    printf("\e[32m");
    printf("%s", "前景色が緑");
    printf("\e[39m");
    printf("\t\t");
    printf("\e[1m");
    printf("\e[32m");
    printf("%s", "前景色が緑の太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[42m");
    printf("%s", "背景色が緑");
    printf("\e[49m");
    printf("\n");

    printf("\e[33m");
    printf("%s", "前景色が黄");
    printf("\e[39m");
    printf("\t\t");
    printf("\e[1m");
    printf("\e[33m");
    printf("%s", "前景色が黄の太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[43m");
    printf("%s", "背景色が黄");
    printf("\e[49m");
    printf("\n");

    printf("\e[34m");
    printf("%s", "前景色が青");
    printf("\e[39m");
    printf("\t\t");
    printf("\e[1m");
    printf("\e[34m");
    printf("%s", "前景色が青の太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[44m");
    printf("%s", "背景色が青");
    printf("\e[49m");
    printf("\n");

    printf("\e[35m");
    printf("%s", "前景色がマゼンタ");
    printf("\e[39m");
    printf("\t");
    printf("\e[1m");
    printf("\e[35m");
    printf("%s", "前景色がマゼンタの太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[45m");
    printf("%s", "背景色がマゼンタ");
    printf("\e[49m");
    printf("\n");

    printf("\e[36m");
    printf("%s", "前景色がシアン");
    printf("\e[39m");
    printf("\t\t");
    printf("\e[1m");
    printf("\e[36m");
    printf("%s", "前景色がシアンの太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[46m");
    printf("%s", "背景色がシアン");
    printf("\e[49m");
    printf("\n");

    printf("\e[37m");
    printf("%s", "前景色が白");
    printf("\e[39m");
    printf("\t\t");
    printf("\e[1m");
    printf("\e[37m");
    printf("%s", "前景色が白の太字");
    printf("\e[39m");
    printf("\e[0m");
    printf("\t\t");
    printf("\e[47m");
    printf("%s", "背景色が白");
    printf("\e[49m");
    printf("\n");

    printf("\n");


    /* その他 */

    printf("\e[7m");
    printf("%s", "文字色と背景色の反転");
    printf("\e[0m");
    printf("\t");

    printf("\e[5m");
    printf("%s", "ブリンク");
    printf("\e[0m");
    printf("\t\t\t");

    printf("\e[6m");
    printf("%s", "高速ブリンク");
    printf("\e[0m");
    printf("\n");

    printf("\e[2m");
    printf("%s", "薄く表示");
    printf("\e[0m");
    printf("\t\t");

    printf("\e[3m");
    printf("%s", "イタリック");
    printf("\e[0m");
    printf("\t\t\t");

    printf("\e[4m");
    printf("%s", "アンダーライン");
    printf("\e[0m");
    printf("\n");

    return 0;
}

/* ref.
    ANSI エスケープシーケンス チートシート
    https://qiita.com/PruneMazui/items/8a023347772620025ad6
 */

/* vim: set et sw=4 sts=4 : */
