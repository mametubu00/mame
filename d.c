int main(void)
{
    int diff;
    char large;
    char small;
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c",&small);
    diff='a'-'A';
    large=small-diff;
    
    printf("大文字は%c　小文字は%c\n",large,small);
    

    return 0;
}