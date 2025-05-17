void motor_test()
{
   /*********ileri************/ 
    digitalWrite(solBin2,LOW);
    digitalWrite(solBin1,HIGH);
    
    digitalWrite(sagAin2,LOW);
    digitalWrite(sagAin1,HIGH);

    analogWrite(solmotorpwmpin,50);
    analogWrite(sagmotorpwmpin,50);
    delay(2000);
    analogWrite(solmotorpwmpin,100);
    analogWrite(sagmotorpwmpin,100);
    delay(2000);
    analogWrite(solmotorpwmpin,150);
    analogWrite(sagmotorpwmpin,150);
    delay(2000);
    analogWrite(solmotorpwmpin,200);
    analogWrite(sagmotorpwmpin,200);
    delay(2000);
    /*********dur************/ 
    digitalWrite(solBin2,LOW);
    digitalWrite(solBin1,LOW);
    
    digitalWrite(sagAin2,LOW);
    digitalWrite(sagAin1,LOW);

    analogWrite(solmotorpwmpin,250);
    analogWrite(sagmotorpwmpin,250);
    delay(2000);
    
    /*********geri************/ 
    digitalWrite(solBin2,HIGH);
    digitalWrite(solBin1,LOW);
    
    digitalWrite(sagAin2,HIGH);
    digitalWrite(sagAin1,LOW);

    analogWrite(solmotorpwmpin,50);
    analogWrite(sagmotorpwmpin,50);
    delay(2000);
    analogWrite(solmotorpwmpin,100);
    analogWrite(sagmotorpwmpin,100);
    delay(2000);
    analogWrite(solmotorpwmpin,150);
    analogWrite(sagmotorpwmpin,150);
    delay(2000);
    analogWrite(solmotorpwmpin,200);
    analogWrite(sagmotorpwmpin,200);
    delay(2000);

/*********dur************/ 
    digitalWrite(solBin2,LOW);
    digitalWrite(solBin1,LOW);
    
    digitalWrite(sagAin2,LOW);
    digitalWrite(sagAin1,LOW);

    analogWrite(solmotorpwmpin,250);
    analogWrite(sagmotorpwmpin,250);
    delay(2000);
}
