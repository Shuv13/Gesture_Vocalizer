int a = 0;

int b = 0;

int c = 0;

int d = 0;

int  e = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);

}

void  loop()
{
  a = analogRead(A0); //thumb
  c = analogRead(A1); //index
  d = analogRead(A2); //middle
  b = analogRead(A3); //ring
  e = analogRead(A4);  //little
 {
  if (a < 900 && b > 900 && c > 900 && d > 900 && e > 900 && a  > 800 ) {
    Serial.println("a");
  }
  {
  if (a > 900 && b < 900  && c < 900  && e < 900 ) {
    Serial.println("b");
  }
  
  if (a  > 900 && b < 900 && c > 900 && d > 800 && e > 900 ) {
    Serial.println("d");
  }
  }
  if (a > 900 && b > 900 && c > 900 && d > 900 && e > 900 ) {
    Serial.println("e");
  }
   if (a > 900 && b > 900 && c < 890  && e  < 890 ) {
    Serial.println("f");
  }
     if (a < 900 && b < 900 &&  c > 890 && d > 890 && e > 890 && a > 800 ) {
    Serial.println("g");
  }
    if (a < 900 && b < 900 && c < 900 && d > 870 && e > 900 ) {
    Serial.println("h");
  }
   if (a > 900 && b > 900 && c > 900 && d > 900 && e < 900 ) {
    Serial.println("i");
  }
  if (a < 900 && b > 900 && c > 900 && d > 900 && e < 900 && a > 800 ) {
    Serial.println("j");
  }
  if (a > 900 && b < 900 && c < 900 && d >  900 && e > 900 ) {
    Serial.println("k");
  }
  if (a < 800 && b <  900 && c > 900 && d > 900 && e > 900 ) {
    Serial.println("l");
  }
  if (a < 800 && b > 900 && c > 900 && d > 900 && e < 900 ) {
    Serial.println("m");
  }
  if (a < 820 && b > 900 && c > 900 && d < 900 && e < 900 ) {
    Serial.println("n");
  }
   if (a > 820 && b < 900 && c < 900 && d < 900 && e > 900 ) {
    Serial.println("o");
  }
   if (a < 880 && b < 910 && c > 900 && d > 900 && e < 890 ) {
    Serial.println("p");
  }
   if (a < 850 && b < 900 && c > 900 && d < 920 && e < 890 ) {
    Serial.println("q");
  }
   if (a < 790 && b < 900 && c < 900 && d > 920 && e > 890 ) {
    Serial.println("r");
  }
  if (a < 960 && b > 900 && c > 900 && d > 920 && e > 890 && a > 940 ) {
    Serial.println("s");
  }
  if (a < 800 && b > 900 && d < 920 && e <  890 ) {
    Serial.println("t");
  }
   if (a > 900 && b < 900 && d >  900 && e < 900 ) {
    Serial.println("u");
  }
  if (a > 900 && b <  900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("v");
  }
  if (a < 900 && b < 900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("w");
  }
   if (a > 900 && b > 900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("x");
  }
   if (a > 800 && b > 900 && d < 900 && e > 900 && c > 900 ) {
    Serial.println("y");
  }
     if (a > 900 && b > 900 && d < 900 && e < 900 && c > 900 ) {
    Serial.println("z");
  }

  delay(2500); 
  }}
