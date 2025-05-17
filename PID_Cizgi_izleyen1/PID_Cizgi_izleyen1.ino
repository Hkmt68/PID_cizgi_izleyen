#include <QTRSensors.h>
QTRSensors qtr;

#define min_hiz 100

#define sagAin2 10
#define sagAin1 9
#define sagmotorpwmpin 11
#define solBin2 7
#define solBin1 8
#define solmotorpwmpin 6

#define mz80_pin 12
#define LED 3
#define led_kalibre 2
#define buton 4

unsigned int pozisyon;
unsigned int sensors[8];

//float Kp=0.03; float Kd=0.5; float Ki=0.001;
float Kp=0.05; float Kd=1; float Ki=0;
int integral; int turev;
int sonhata=0; int hata=0;

int ekhiz=0; 

int sagmotorpwm=0; int solmotorpwm=0;
int zemin=1;
int t_say=0;
int pist_bolum=1;
int durak=0;
//int sag_encoder_yuzey=0; int sol_encoder_yuzey=0;
//int sag_encoder_say=0; int sol_encoder_say=0;
//int kutu_mesafe;
int engel_durum;
int duz_yol_durum=1;
int doksan_durum=0;
float ortalama_uzunluk=0;
float tur_carpani=5.024; // Yarıçap 1.6 ve formül 2*3.14*r/2 
int catal_durum=0;

void setup()
{
   qtr.setTypeAnalog();
   qtr.setSensorPins((const uint8_t[]){A0,A1,A2,A3,A4,A5,A6,A7}, 8);
   
    pinMode(sagAin2,OUTPUT);
    pinMode(sagAin1,OUTPUT);
    pinMode(solBin2,OUTPUT);
    pinMode(solBin2,OUTPUT);
    pinMode(sagmotorpwmpin,OUTPUT);
    pinMode(solmotorpwmpin,OUTPUT);
   
    pinMode(mz80_pin,INPUT);
    
    pinMode(LED,OUTPUT);
    pinMode(led_kalibre,OUTPUT);
    
        
    digitalWrite(led_kalibre, HIGH); // turn on Arduino's LED to indicate we are in calibration mode
    qtr_kalibrasyon();
    digitalWrite(led_kalibre, LOW); // turn off Arduino's LED to indicate we are through with calibration
    
    flashyap();
    
  //while(digitalRead(mz80_pin==LOW)){ motorkontrol(0,0);}
  Serial.begin(9600);
}

void loop()
{
  sensoroku();
  pid();
  motorkontrol(solmotorpwm,sagmotorpwm);

//    digitalWrite(solBin1,HIGH);
//    digitalWrite(solBin2,LOW);
//    analogWrite(solmotorpwmpin,50);
//    delay(1000);
//    
//    digitalWrite(sagAin1,HIGH);
//    digitalWrite(sagAin2,LOW);
//    analogWrite(sagmotorpwmpin,50);
//    delay(1000);
    
   //motor_test();
   //t_yol();
   
   //if(durak==0){ duz_yol(); doksan_durum=0; durak=1;}
   //if(durak==1 && doksan_durum==0){ doksan();}
   //if(durak==1 && doksan_durum==0){ duz_yol(); doksan_durum=0; durak=2;}
   //if(durak==2 && doksan_durum==0){ doksan(); dur();}
   //if(durak==2 && doksan_durum==0){ doksan_durum=0; durak=3;}
   //if(durak==3 && doksan_durum==0){ doksan();}
   //if(t_say==2){ dur();}

//                    uint16_t position = qtr.readLineBlack(sensors);
//                    for (uint8_t i = 0; i < 8; i++)
//                    {
//                      Serial.print(sensors[i]);
//                      Serial.print('\t');
//                    }
//                    Serial.println(position);
//                    delay(250);
}
