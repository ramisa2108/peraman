void start_func()
{
      iShowBMP(0,0,"menubar.bmp");
      iSetColor(198,198,221);
      iShowBMP(pointer_center[0][0]-20,pointer_center[0][1]-20,"menughost.bmp");
      iShowBMP(pointer_center[0][0]-20+17*20+10,pointer_center[0][1]-20,"menughost.bmp");
      iRectangle(8*20,20*20+10,15*20,4*20-10);
      iRectangle(8*20,16*20+10,15*20,4*20-10);
      iRectangle(8*20,11*20+10,15*20,4*20);
      iRectangle(8*20,7*20+10,15*20,4*20-10);
      iRectangle(8*20,3*20+10,15*20,4*20-10);
//      iSetColor(0,255,0);
//      int i;
//    for(i=0;i<=28;i++)
//    {
//        iLine(20*i,0,20*i,720);
//    }
//    for(i=0;i<=36;i++)
//    {
//        iLine(0,20*i,560,20*i);
//    }
//      iRectangle(12*20,15*20+10,15*20,4*20);
//      iRectangle(12*20,20*20,15*20,4*20);
//      iRectangle(1*20,9*20,15*20,4*20);
//      iRectangle(3*20,4*20,11*20,4*20);

}
void life_komse_func()
{

          iShowBMP(0,0,"losing life.bmp");

}

void game_over_func()
{
        iShowBMP(0,0,"GAMEOVER.bmp");
        iSetColor(  198, 198, 221);
        iShowBMP(pointer_center[1][0]-20,pointer_center[1][1]-20,"menughost.bmp");
        iShowBMP(pointer_center[1][0]-20+15*20-10,pointer_center[1][1]-20,"menughost.bmp");
        iText(9*20,22*20,"S C O R E  : ",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(17*20,22*20,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);

        iRectangle(8*20,15*20,12*20,3*20);
        iRectangle(8*20-5,15*20-5,12*20+10,3*20+10);
        iText(10*20,16*20,"N E W  G A M E ",GLUT_BITMAP_TIMES_ROMAN_24);
        iRectangle(8*20,10*20,12*20,3*20);
        iRectangle(8*20-5,10*20-5,12*20+10,3*20+10);
        iText(9*20,11*20,"H I G H  S C O R E S",GLUT_BITMAP_TIMES_ROMAN_24);
        iRectangle(8*20,5*20,12*20,3*20);
        iRectangle(8*20-5,5*20-5,12*20+10,3*20+10);
        iText(12*20,6*20," Q U I T",GLUT_BITMAP_TIMES_ROMAN_24);
}
void game_shesh_func()
{
    iShowBMP(0,0,"congrats.bmp");
    iSetColor(198,198,221);
    iShowBMP(pointer_center[2][0]-20,pointer_center[2][1]-20,"menughost.bmp");
//    iText(2*20,25*20,"C  O  N  G  R  A  T  U  L  A  T  I  O  N  S  !  !",GLUT_BITMAP_TIMES_ROMAN_24);
//    iSetColor( 240, 178, 122 );
    iRectangle(6*20,18*20,14*20,3*20);
//    iText(8*20,19*20,"H I G H  S C O R E S",GLUT_BITMAP_TIMES_ROMAN_24);
    iRectangle(8*20,13*20,10*20,3*20);
//    iText(11*20,14*20,"E X I T ",GLUT_BITMAP_TIMES_ROMAN_24);

}
void no_saved_game()
{
    iShowBMP(0,0,"nosaved.bmp");
//    iSetColor( 240, 178, 122 );
//    iText(6*20,19*20,"N O   S A V E D   G A M E S",GLUT_BITMAP_TIMES_ROMAN_24);
//    iText(3*20,15*20,"P R E S S   E N T E R   T O   R E T U R N",GLUT_BITMAP_TIMES_ROMAN_24);
    resume=0;
    start=1;
    return ;
}
void paused_game_func()
{
    iShowBMP(0,0,"pausegame.bmp");
    iSetColor(  198, 198, 221);
    iShowBMP(pointer_center[3][0]-20,pointer_center[3][1]-20,"menughost.bmp");
    iShowBMP(pointer_center[3][0]-20+18*20-10,pointer_center[3][1]-20,"menughost.bmp");
//    iText(8*20,26*20,"G A M E     P A U S E D",GLUT_BITMAP_TIMES_ROMAN_24);
    iRectangle(6*20,19*20+10,15*20,4*20-10);
    iRectangle(6*20+5,19*20+10+5,15*20-10,4*20-10-10);
//    iText(9*20,21*20,"N E W   G A M E",GLUT_BITMAP_TIMES_ROMAN_24);
    iRectangle(6*20,13*20+10,15*20,4*20-10);
    iRectangle(6*20+5,13*20+10+5,15*20-10,4*20-10-10);
//    iText(7*20+10,15*20,"S A V E  A N D  E X I T",GLUT_BITMAP_TIMES_ROMAN_24);
    iRectangle(6*20+5,7*20+10,14*20,4*20-10);
    iRectangle(6*20+5+5,7*20+10+5,14*20-10,4*20-10-10);
//    iText(12*20,9*20,"E X I T",GLUT_BITMAP_TIMES_ROMAN_24);

}
void convert(char *str,int num)
{
    int num_temp=num;
    int i,j=0;
    while(num_temp)
    {
        str[j]=num_temp%10+'0';
        num_temp/=10;
        j++;

    }
    if(j==0)
    {
        str[j]=str[j+1]='0';
        j+=2;
    }
    str[j]='\0';
    strrev(str);


}
void resume_game_func()
{
   // iShowBMP(0,0,"background.bmp");
    iShowBMP(pointer_center[4][0]-20,pointer_center[4][1]-10,"menughost.bmp");
    iText(8*20,29*20,"L O A D    G A M E S",GLUT_BITMAP_TIMES_ROMAN_24);
    iRectangle(2*20,6*20,23*20,22*20);
    FILE *saved;
    int i,j,k=0,sz;
    for(i=0;i<5;i++)
    {
        saved=fopen(filenames[i],"r");
        if(saved==NULL) continue;
        fseek(saved,0,SEEK_END);
        sz=ftell(saved);
       // printf("%d %d\n",i,sz);
        if(sz==0) continue;
        fseek(saved,0,SEEK_SET);
        fscanf(saved,"%d",&times[k].filenum);
        fscanf(saved,"%d",&times[k].day);
        fscanf(saved,"%d",&times[k].month);
        fscanf(saved,"%d",&times[k].year);
        fscanf(saved,"%d",&times[k].hour);
        fscanf(saved,"%d",&times[k].minute);
        fscanf(saved,"%d",&times[k].second);
        fscanf(saved,"%d",&mode);
    fscanf(saved,"%d",&last);
    fscanf(saved,"%d",&dir[0]);
    fscanf(saved,"%d",&dir[1]);
    fscanf(saved,"%d",&dir[2]);
    fscanf(saved,"%d",&dir[3]);
    fscanf(saved,"%d",&level);
    fscanf(saved,"%d",&lifes);
    fscanf(saved,"%d",&dots_eaten);
    fscanf(saved,"%d",&score);
    fscanf(saved,"%d",&firstfruit);
    fscanf(saved,"%d",&secondfruit);
    fscanf(saved,"%d",&energizer_ase[energizer[0][0]][energizer[0][1]]);
    fscanf(saved,"%d",&energizer_ase[energizer[1][0]][energizer[1][1]]);
    fscanf(saved,"%d",&energizer_ase[energizer[2][0]][energizer[2][1]]);
    fscanf(saved,"%d",&energizer_ase[energizer[3][0]][energizer[3][1]]);
    fscanf(saved,"%d",&changed);
    fscanf(saved,"%d",&scattered_steps);
    fscanf(saved,"%d",&chase_steps);
    fscanf(saved,"%d",&frightened_steps);
    fscanf(saved,"%d",&scattered);
    fscanf(saved,"%d",&chase);
    fscanf(saved,"%d",&frightened);
    int i,j;
    for(i=0; i<28; i++)
    {
        for(j=0; j<36; j++)
        {
            if(blocked[(i*20+10)][j*20+10]==0)
               {
                   fscanf(saved,"%d",&points[(i*20)+10][(j*20)+10]);
               }

        }
    }

    fscanf(saved,"%d",&pacman[0]);
    fscanf(saved,"%d",&pacman[1]);
    fscanf(saved,"%d",&pacmanlast[0]);
    fscanf(saved,"%d",&pacmanlast[1]);
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            fscanf(saved,"%d",&ghost[i][j]);
        }
    }
     for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            fscanf(saved,"%d",&ghost_last[i][j]);
        }
    }
    fscanf(saved,"%d",&t);
    fscanf(saved,"%s",times[k].names);
        k++;
        fclose(saved);


    }
    total_saved=k;
    if(total_saved==0)
    {
        resume=0;
        nosavedgame=1;
        no_saved_game();

    }
    int x=4*20,y=24*20,fnum;
    sort(times,times+k,compare);
    for(i=k-1;i>=0;i--)
    {
        iText(x,y,times[i].names,GLUT_BITMAP_TIMES_ROMAN_24);
        convert(time_sec,times[i].second);
        convert(time_min,times[i].minute);
        convert(time_hr,times[i].hour);
        convert(time_mon,times[i].month+1);
        convert(time_day,times[i].day);
        convert(time_yr,times[i].year+1900);
        x+=8*20;
        iText(x,y,time_day,GLUT_BITMAP_TIMES_ROMAN_24);
        x+=25;
        iText(x,y,"/",GLUT_BITMAP_TIMES_ROMAN_24);
        x+=10;
        iText(x,y,time_mon,GLUT_BITMAP_TIMES_ROMAN_24);
        x+=25;
        iText(x,y,"/",GLUT_BITMAP_TIMES_ROMAN_24);
        x+=10;
        iText(x,y,time_yr,GLUT_BITMAP_TIMES_ROMAN_24);
        x+=80;
        iText(x,y,time_hr,GLUT_BITMAP_TIMES_ROMAN_24);
        x+=25;
        iText(x,y,":",GLUT_BITMAP_TIMES_ROMAN_24);
        x+=10;
        iText(x,y,time_min,GLUT_BITMAP_TIMES_ROMAN_24);
        x+=25;
        iText(x,y,":",GLUT_BITMAP_TIMES_ROMAN_24);
        x+=10;
        iText(x,y,time_sec,GLUT_BITMAP_TIMES_ROMAN_24);
        y-=4*20;
        x=4*20;
    }




}
