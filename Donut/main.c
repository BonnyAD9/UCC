                          #include <stdio.h>
                   #include <math.h>//OOOOOOOOOOOOO
              #define PI 3.1415//OOOOOOOOOOOOOOOOOOOOOOO
           #define at(x, y) (x + y * (w + 1))//OOOOOOOOOOOO
        #define c cos//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
      #define s sin//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
    int main(){int w=60,h=30,ds =100,lot=100,x,y,wh=(w+1)*h;double
   x1,x2,y1,y2,z1,z2,za=0,ya=0,zb[wh],nx,ny,nz,d;char sb[wh];for(;1
  ;ya+=0.0035,za+=0.0031){for(int i=0;i<wh;++i){sb[i]=' ';zb[i]=lot;
  }for(int i=0;i<h;++i)sb[i*(w+1)+w]='\n';double ai=2*PI/ds,aj=ai,zg
 =0,wg=0;for(int i=0;i<ds;                 ++i,zg+=ai){for(int j=0;j<
 ds;++j,wg+=aj){x1=c(wg)                      /2;y1=0;z1=s(wg)/2;nx=x1
*c(zg);ny=x1*s(zg);nz=                         z1;x1+=1;x2=x1*c(zg)/3;
y2=x1*s(zg)/3;z2=z1/3;                          x1=x2*c(ya)-z2*s(ya);y1
=y2;z1=x2*s(ya)+z2*c(                           ya);x2=x1*c(za)-y1*s(za
);y2=x1*s(za)+y1*c(za                           );z2=z1+1;x1=nx*c(ya)-nz
*s(ya);y1=ny;z1=nx*s(                           ya)+nz*c(ya);nx=x1*c(za
)-y1*s(za);ny=x1*s(za)                         +y1*c(za);nz=z1;d=(2*z2+
 0.001);x1=x2/d;y1=y2/                         d;z1=(z2-1)/d;x=(x1+0.5
 )*w;y=(y1+0.5)*h;if(zb[                     at(x,y)]<z1)continue;nx=
  -ny/sqrt(nx*nx+ny*ny+nz*nz            );zb[at(x,y)]=z1;sb[at(x,y)]
   =" .:-=+*#%@@"[(int)((nx*0.5+0.5)*10)];}}fwrite("\x1b[0;0H",6,1,
    stdout);fwrite(sb,sizeof(sb),1,stdout);fflush(stdout);}}//OOOO
      //OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
        //OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
           //OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
              //OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
                   //OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
                          //OOOOOOOOOOOOOOO
