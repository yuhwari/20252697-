#define PIN_LED 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
}

int count1 = 0;
int count2 = 0;

void loop() {
  // put your main code here, to run repeatedly:
  while(count1 < 1) { // 반복 1회
    digitalWrite(PIN_LED, 0);
    delay(1000);
    digitalWrite(PIN_LED, 1);
    count1++;
    count2 = 0;
    while( count2 < 5){ //1초동안 LED 5회 깜빡
      digitalWrite(PIN_LED, 0);
      delay(100);
      digitalWrite(PIN_LED, 1);
      delay(100);
      count2++;
    }
  while (1){
  }
 }
}
