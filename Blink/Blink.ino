byte LED = 16;
bool out;

void setup ()
{
  pinMode(LED, OUTPUT);
  out = false;
}

void loop ()
{
  out = !out;
  digitalWrite(LED, out);
  delay (200);
}
