int malch(int c) {
  if (c == 0) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 0);
    analogRead(malch_read);
  } else if (c == 1) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 0);
  } else if (c == 2) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 0);
  } else if (c == 3) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 0);
  } else if (c == 4) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 0);
  } else if (c == 5) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 0);
  } else if (c == 6) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 0);
  } else if (c == 7) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 0);
  } else if (c == 8) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 1);
  } else if (c == 9) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 1);
  } else if (c == 10) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 1);
  } else if (c == 11) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 0);
    digitalWrite(malch_S4, 1);
  } else if (c == 12) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 1);
  } else if (c == 13) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 0);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 1);
  } else if (c == 14) {
    digitalWrite(malch_S1, 0);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 1);
  } else if (c == 15) {
    digitalWrite(malch_S1, 1);
    digitalWrite(malch_S2, 1);
    digitalWrite(malch_S3, 1);
    digitalWrite(malch_S4, 1);
  }
  return analogRead(malch_read);
}
void motor1(int speed) {
  if (speed < 0) {
    analogWrite(2, speed * -1);
    analogWrite(3, 0);
  } else if (speed == 0) {
    analogWrite(2, 1);
    analogWrite(3, 1);
  } else if (0 < speed) {
    analogWrite(2, 0);
    analogWrite(3, speed);
  }
}
void motor2(int speed) {
  if (speed < 0) {
    analogWrite(11, speed * -1);
    analogWrite(10, 0);
  } else if (speed == 0) {
    analogWrite(11, 1);
    analogWrite(10, 1);
  } else if (0 < speed) {
    analogWrite(11, 0);
    analogWrite(10, speed);
  }
}
void motor3(int speed) {
  if (speed < 0) {
    analogWrite(13, speed * -1);
    analogWrite(12, 0);
  } else if (speed == 0) {
    analogWrite(13, 1);
    analogWrite(12, 1);
  } else if (0 < speed) {
    analogWrite(13, 0);
    analogWrite(12, speed);
  }
}
void motor4(int speed) {
  if (speed < 0) {
    analogWrite(6, speed * -1);
    analogWrite(7, 0);
  } else if (speed == 0) {
    analogWrite(6, 1);
    analogWrite(7, 1);
  } else if (0 < speed) {
    analogWrite(6, 0);
    analogWrite(7, speed);
  }
}
void move(int deg, int speed) {
}
