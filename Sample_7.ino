int ledpin=11;//宣告數位腳位11（PWM 輸出）
int val=0;

void setup()
{
  pinMode(A0,INPUT);
  pinMode(ledpin,OUTPUT);//宣告ledpin為輸出腳位
  Serial.begin(9600);//設置鮑率為9600//注意！類比腳位自動設置為輸入。
}
void loop()
{
  val=analogRead(A0);// 讀取感測器的類比腳位值並給val
  Serial.println(val);//顯示val值
  analogWrite(ledpin,val/4);// 設置亮度(PWM輸出0~255)
  delay(10);//延遲0.01秒
}
