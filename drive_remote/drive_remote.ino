
int speed = 60;

const int leftForward = 11;
const int leftBackward = 10;
const int rightForward = 6;
const int rightBackward = 9;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  digitalWrite(2,HIGH);
  pinMode(leftForward, OUTPUT);
  pinMode(leftBackward, OUTPUT);
  pinMode(rightForward, OUTPUT);
  pinMode(rightBackward, OUTPUT);
}

void loop() {

  if (Serial.available()) {
    char mode = Serial.read();

    if(mode=='k'){
	    analogWrite(leftForward, speed);
	    analogWrite(leftBackward, 0);
	    analogWrite(rightForward, speed);
	    analogWrite(rightBackward, 0);
    }
    if(mode=='j'){
	    analogWrite(leftForward, 0);
	    analogWrite(leftBackward, speed);
	    analogWrite(rightForward, 0);
	    analogWrite(rightBackward, speed);
    }
    if(mode=='h'){
	    analogWrite(leftForward, 0);
	    analogWrite(leftBackward, speed);
	    analogWrite(rightForward, speed);
	    analogWrite(rightBackward, 0);
    }
    if(mode=='l'){
	    analogWrite(leftForward, speed);
	    analogWrite(leftBackward, 0);
	    analogWrite(rightForward, 0);
	    analogWrite(rightBackward, speed);
    }
    if(mode==' '){
      analogWrite(leftForward, 0);
      analogWrite(leftBackward, 0);
      analogWrite(rightForward, 0);
      analogWrite(rightBackward, 0);
    }
    if(mode=='1') speed = 50;
    if(mode=='2') speed = 60;
    if(mode=='3') speed = 90;
    if(mode=='4') speed = 120;
 
  }
}
