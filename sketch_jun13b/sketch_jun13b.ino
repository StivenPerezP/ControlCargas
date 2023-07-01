const int RELE1 = 10;
const int RELE2 = 11;
const int RELE3 = 12;
const int RELE4 = 13;

const int IN1M1 = 7;
const int IN2M1 = 6;
const int IN3M1 = 5;
const int IN4M1 = 4;

const int IN1M2 = 3;
const int IN2M2 = 2;


int data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RELE1, OUTPUT);
  pinMode(RELE2, OUTPUT);
  pinMode(RELE3, OUTPUT);
  pinMode(RELE4, OUTPUT);

  pinMode(IN1M1, OUTPUT);
  pinMode(IN2M1, OUTPUT);
  pinMode(IN3M1, OUTPUT);
  pinMode(IN4M1, OUTPUT);

  pinMode(IN1M2, OUTPUT);
  pinMode(IN2M2, OUTPUT);

}

void loop() {
  if(Serial.available()){
    data = Serial.read();


    if(data=='A'){
      digitalWrite(RELE1, HIGH);
    } else if(data=='B') {
      digitalWrite(RELE1, LOW);
    }
    delay(50);

    if(data=='C'){
      digitalWrite(RELE2, HIGH);
    } else if(data=='D') {
      digitalWrite(RELE2, LOW);
    }
    delay(50);

    if(data=='E'){
      digitalWrite(RELE3, HIGH);
    } else if(data=='F') {
      digitalWrite(RELE3, LOW);
    }
    delay(50);

    if(data=='G'){
      digitalWrite(RELE4, HIGH);
    } else if(data=='H') {
      digitalWrite(RELE4, LOW);
    }
    delay(50);

    if(data=='I'){
      //CIERRA M1
      digitalWrite(IN1M1, LOW);
      digitalWrite(IN2M1, HIGH);
      delay(1000);
      digitalWrite(IN1M1, LOW);
      digitalWrite(IN2M1, LOW);
    } 

    if(data=='J'){
      //ABRE M1
      digitalWrite(IN1M1, HIGH);
      digitalWrite(IN2M1, LOW);
      delay(1000);
      digitalWrite(IN1M1, LOW);
      digitalWrite(IN2M1, LOW);
    }

    if(data=='K'){
      //CIERRA M2
      digitalWrite(IN3M1, LOW);
      digitalWrite(IN4M1, HIGH);
      delay(500);
      digitalWrite(IN3M1, LOW);
      digitalWrite(IN4M1, LOW);
    } 

    if(data=='L'){
      //ABRE M2
      digitalWrite(IN3M1, HIGH);
      digitalWrite(IN4M1, LOW);
      delay(1000);
      digitalWrite(IN3M1, LOW);
      digitalWrite(IN4M1, LOW);
    }

    if(data=='M'){
      //CIERRA M3
      digitalWrite(IN1M2, LOW);
      digitalWrite(IN2M2, HIGH);
      delay(500);
      digitalWrite(IN1M2, LOW);
      digitalWrite(IN2M2, LOW);
    } 

    if(data=='N'){
      //ABRE M3
      digitalWrite(IN1M2, HIGH);
      digitalWrite(IN2M2, LOW);
      delay(1000);
      digitalWrite(IN1M2, LOW);
      digitalWrite(IN2M2, LOW);
    }
  } 
}
