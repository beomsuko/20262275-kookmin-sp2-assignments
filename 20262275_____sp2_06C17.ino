int led = 7; 

// 10ms = 10000, 1ms = 1000, 0.1ms = 100
int period = 1000; 

int duty = 0;
void setup() {
  pinMode(led, OUTPUT); 
}

void loop() {
  for (int i = 0; i <= 100; i++) {
    duty = i;
    
    unsigned long on = (unsigned long)period * duty / 100;
    unsigned long off = period - on;
    unsigned long t1 = micros();
    while (micros() - t1 < 5000) {
      
      if (on > 0) {
        digitalWrite(led, LOW);
        delayMicroseconds(on);
      }
      if (off > 0) {
        digitalWrite(led, HIGH);
        delayMicroseconds(off);
      }
      
    }
  }

  for (int i = 99; i > 0; i--) {
    duty = i;
    
    unsigned long on = (unsigned long)period * duty / 100;
    unsigned long off = period - on;
    unsigned long t2 = micros();
    while (micros() - t2 < 5000) {
      if (on > 0) {
        digitalWrite(led, LOW);
        delayMicroseconds(on);
      }
      if (off > 0) {
        digitalWrite(led, HIGH);
        delayMicroseconds(off);
      }
    }
  }
}
