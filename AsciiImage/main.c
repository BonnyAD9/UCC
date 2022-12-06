#define STB_IMAGE_IMPLEMENTATION//HHHH

#include/**/             <stdio.h>//HH
#include/**/             "stb_image.h"
#define uchr             unsigned/**/\
char//HHHHHH             HHHHHHHHHHHHH
#define at(x             ,y,w) (x*3+w\
*y*3)//HHHHH             HHHHHHHHHHHHH
#define gCr(             p) (" .:;+="\
"$#"[((int)p             *8+4)/256])//
#define   OW             60//HHHHHHHHH
int main(int c,char*s[]){if(c!=2)//HHH
return 1;//HHHHHHHHHHHHHHHHHHHHHHHHHHH
int w,h,n;uchr*i=stbi_load(s[1],&w,&h,
&n,3);int wa=w/OW,ha=wa*2;for(int y=0;
y<h;y+=ha){for(int x=0;x<w;x+=wa){//HH
putchar(gCr(             (i[at(x,y,w)]
+i[at(x,y,w)             +1]+i[at(x,y,
w)+2])/3));}             putchar('\n')
;}}//HHHHHHH             HHHHHHHHHHHHH
//HHHHHHHHHH             HHHHHHHHHHHHH
//HHHHHHHHHH             HHHHHHHHHHHHH
//HHHHHHHHHH             HHHHHHHHHHHHH
//HHHHHHHHHH             HHHHHHHHHHHHH
//HHHHHHHHHH             HHHHHHHHHHHHH
