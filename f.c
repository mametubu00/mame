int main(void)
{
    int ossii,beeharu,ut;
    
    ossii=60;
    beeharu=20;
    ut=20;
    
    if(ossii==60)
    printf("オッシーは６０歳です\n");
    if(beeharu !=60)
    printf("ベエハルは６０歳ではありません\n");
    if(beeharu<20)
    printf("べエハルは２０歳未満です\n");
    if(ut>=20)
    printf("ゆうTは２０歳以上です\n");
    if(ossii>beeharu)
    printf("オッシーはべエハルの大先輩です\n");
    if(ossii>ut>beeharu)
    printf("べエハルがこの３人の中で最年少です\n");

    return 0;
}