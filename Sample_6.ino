#include <Servo.h>
Servo myservo; // 建立一個 Servo 物件
int val; // 儲存旋轉角度的變數
void setup()
{ 
  myservo.attach(9);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  // Servo 接在 pin 9
}
void loop()
{ 
  val = analogRead(A0);// 讀取可變電阻(數值介於 0 到 1023)
  val = map(val, 0, 1023, 0, 179); // 把 0 – 1023 的數值按比例縮放為 0 – 180 的數值
  Serial.println(val);
  myservo.write(val); // 設定 Servo 旋轉速度
  delay(15); // 等待 Servo 旋轉指定的位置
}
