//4.14.2019 1:07PM Prijedor
//Nađa Popović

int LP1=3;
int LP2=4;
int LP3=5;
int LC1=6;
int LC2=7;
int LC3=8;

void setup() {
  // put your setup code here, to run once:
pinMode(LP1,OUTPUT);
pinMode(LP2,OUTPUT);
pinMode(LP3,OUTPUT);
pinMode(LC1,OUTPUT);
pinMode(LC2,OUTPUT);
pinMode(LC3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LP1,HIGH);
delay(1000);
digitalWrite(LP1,LOW);
digitalWrite(LP2,HIGH);
delay(1000);
digitalWrite(LP2,LOW);
digitalWrite(LP3,HIGH);
delay(1000);
digitalWrite(LP3,LOW);
digitalWrite(LC1,HIGH);
delay(1000);
digitalWrite(LC1,LOW);
digitalWrite(LC2,HIGH);
delay(1000);
digitalWrite(LC2,LOW);
digitalWrite(LC3,HIGH);
delay(1000);
digitalWrite(LC3,LOW);

digitalWrite(LP1,HIGH);
delay(3000);
digitalWrite(LP2,HIGH);
delay(2000);
digitalWrite(LP3,HIGH);
delay(1000);
digitalWrite(LP1,LOW);
digitalWrite(LP2,LOW);
digitalWrite(LP3,LOW);
delay(1000);
digitalWrite(LP1,HIGH);
digitalWrite(LP2,HIGH);
digitalWrite(LP3,HIGH);
delay(1000);
digitalWrite(LP1,LOW);
digitalWrite(LP2,LOW);
digitalWrite(LP3,LOW);
delay(1000);
digitalWrite(LP1,HIGH);
digitalWrite(LP2,HIGH);
digitalWrite(LP3,HIGH);
delay(1000);
digitalWrite(LP1,LOW);
delay(3000);
digitalWrite(LP2,LOW);
delay(2000);
digitalWrite(LP3,LOW);
delay(1000);

digitalWrite(LC1,HIGH);
delay(3000);
digitalWrite(LC2,HIGH);
delay(2000);
digitalWrite(LC3,HIGH);
delay(1000);
digitalWrite(LC1,LOW);
digitalWrite(LC2,LOW);
digitalWrite(LC3,LOW);
delay(1000);
digitalWrite(LC1,HIGH);
digitalWrite(LC2,HIGH);
digitalWrite(LC3,HIGH);
delay(1000);
digitalWrite(LC1,LOW);
digitalWrite(LC2,LOW);
digitalWrite(LC3,LOW);
delay(1000);
digitalWrite(LC1,HIGH);
digitalWrite(LC2,HIGH);
digitalWrite(LC3,HIGH);
delay(1000);
digitalWrite(LC1,LOW);
delay(3000);
digitalWrite(LC2,LOW);
delay(2000);
digitalWrite(LC3,LOW);
delay(1000);
}
