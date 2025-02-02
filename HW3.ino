const int ledPin = 0; // تغيير الرقم حسب الدبوس الذي تستخدمه
const int buttonPin = 1; // تغيير الرقم حسب الدبوس الذي تستخدمه
int buttonState = 0; // لحفظ حالة الزر
bool ledState = false; // لحفظ حالة LED

void setup() {
  pinMode(ledPin, OUTPUT); // تعيين الدبوس كخرج
  pinMode(buttonPin, INPUT); // تعيين الدبوس كمدخل
}

void loop() {
  buttonState = digitalRead(buttonPin); // قراءة حالة الزر

  if (buttonState == HIGH) { // إذا تم الضغط على الزر
    ledState = !ledState; // عكس حالة LED
    digitalWrite(ledPin, ledState ? HIGH : LOW); // تشغيل أو إيقاف LED حسب الحالة
    delay(500); // تأخير لمنع القراءة المتكررة للزر
  }
}