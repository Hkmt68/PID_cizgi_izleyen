void doksan() 
{
   if(doksan_durum==0)
   {
/************Siyah zemin sağa doksan derece*************************************/ 
if( zemin==1 && sensors[0]<300 && sensors[1]<300 && sensors[2]<300 && sensors[3]<300 && sensors[6]>700 && sensors[7]>700)
        {
             motorkontrol(-10,-50);  delay(10); // motora 10ms sert bir fren yaptırdık 
             while(1)
             { 
                sensoroku(); 
                if(sensors[0]>700 && sensors[1]>700) break;
             }
             while(1)
             {  
                sensoroku(); 
                motorkontrol(10,-50);
                if(sensors[0]<300 || sensors[1]<300){ ekhiz=0; doksan_durum=1; break;}
             }
        }
    
     
/************ Siyah zemin sola doksan derece**************************/
        if( zemin==1 && sensors[7]<300 && sensors[6]<300 && sensors[5]<300 && sensors[4]<300 && sensors[1]>700 && sensors[0]>700)
        {
              motorkontrol(-50,-10); delay(10); // motora 10ms sert bir fren yaptırdık 
              while(1)
              {
                  sensoroku();
                  if(sensors[7]>700 && sensors[6]>700){ break;}
              }

               while(1)
               {
                  sensoroku();
                  motorkontrol(-50,10);
                  if(sensors[7]<300 || sensors[6]<300){ekhiz=0; doksan_durum=1; break;}
                }
          }


/***************Beyaz zemin sağa doksan derece ******************************/
          if( zemin==0 && sensors[0]>700 && sensors[1]>700 && sensors[2]>700 && sensors[3]>700 && sensors[6]<300 && sensors[7]<300)
          {
              motorkontrol(-10,-50); delay(10);
               while(1)
               {
                  sensoroku();
                  if(sensors[0]<300 && sensors[1]<300){break;}
               }

               while(1)
               {
                  sensoroku();
                  motorkontrol(10,-50);
                  if(sensors[0]>700 || sensors[1]>700) {ekhiz=0; doksan_durum=1; break;}
               }
          }


/********************** Beyaz zemin sola doksan derece******************************/
        if( zemin==0 && sensors[7]>700 && sensors[6]>700 && sensors[5]>700 && sensors[4]>700 && sensors[1]<300 && sensors[0]<300)
         {
              motorkontrol(-50,-10); delay(10);
              while(1)
                 {
                    sensoroku();
                    if(sensors[7]>700 && sensors[6]>700){ break;}
                 }
               while(1)
               {
                  sensoroku();
                  motorkontrol(-50,10);
                  if(sensors[7]<300 || sensors[6]<300) {ekhiz=0; doksan_durum=1; break;}
                }
            }
      }
}  
