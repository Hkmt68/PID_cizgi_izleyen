void dur()
{
    digitalWrite(solBin2,LOW);
    digitalWrite(solBin1,LOW);
    analogWrite(solmotorpwmpin,254);

    digitalWrite(sagAin2,LOW);
    digitalWrite(sagAin1,LOW);
    analogWrite(sagmotorpwmpin,254);
}
