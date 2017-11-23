int pinArray[] = {2, 3, 5, 6, 7, 9, 11, 12};
int count = 0;
int timer = 60;

void setup(){
 for (count=0;count<8;count++) {
 pinMode(pinArray[count], OUTPUT);
 }
pinMode(4, OUTPUT); //zluta svetla
pinMode(8, OUTPUT); //cervene zadni svetlo
pinMode(10, OUTPUT); //cervene zadni svetlo
}

void loop() {
 for (count=0;count<7;count++) {
 digitalWrite(pinArray[count], HIGH);
 delay(timer);
 digitalWrite(pinArray[count + 1], HIGH);
 delay(timer);
 digitalWrite(pinArray[count], LOW);
 delay(timer*2);
 digitalWrite(4, LOW);
 digitalWrite(8, LOW);
 digitalWrite(10, HIGH);
 
 }
 for (count=7;count>0;count--) {
 digitalWrite(pinArray[count], HIGH);
 delay(timer);
 digitalWrite(pinArray[count - 1], HIGH);
 delay(timer);
 digitalWrite(pinArray[count], LOW);
 delay(timer*2);
 digitalWrite(4, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(10, LOW);
 
 }
 
 }
