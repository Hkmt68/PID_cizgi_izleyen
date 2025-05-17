void motorkontrol(int solmotorpwm, int sagmotorpwm)
{
  if(solmotorpwm<0)
  {
    solmotorpwm=abs(solmotorpwm);
    digitalWrite(solBin1,LOW); // GERİ
    digitalWrite(solBin2,HIGH);
    analogWrite(solmotorpwmpin,solmotorpwm);
  }
  else
  {
    digitalWrite(solBin1,HIGH);  // İLERİ
    digitalWrite(solBin2,LOW);
    analogWrite(solmotorpwmpin,solmotorpwm);
  }

  if(sagmotorpwm<0)
  {
    sagmotorpwm=abs(sagmotorpwm);
    digitalWrite(sagAin1,LOW); // GERİ
    digitalWrite(sagAin2,HIGH);
    analogWrite(sagmotorpwmpin,sagmotorpwm);
  }
  else
  {
    digitalWrite(sagAin1,HIGH);  // İLERİ
    digitalWrite(sagAin2,LOW);
    analogWrite(sagmotorpwmpin,sagmotorpwm);
  }
}
