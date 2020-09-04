
//*********************************************************************************************************************
//***********=========Menyalakan Peralatan Lampu dan Elektronik Rumah MEnggunakan HP Android=========******************
//*********************************************************************************************************************
//*************************************************Alkhairunas Riyuska*************************************************
//---------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------
char AndroidLampu;                    // Variabel dengan nama AndroidLampu
void setup() {
  pinMode(2,OUTPUT);                  // Mode pada Pin Digital 2 difungsian sebagai Output
  pinMode(3,OUTPUT);                  // Mode pada Pin Digital 3 difungsian sebagai Output
  pinMode(4,OUTPUT);                  // Mode pada Pin Digital 4 difungsian sebagai Output
  pinMode(5,OUTPUT);                  // Mode pada Pin Digital 5 difungsian sebagai Output
  Serial.begin(9600);                 // Baudrate sebagai komunikasi antar modul arduino dengan laptop
}

void loop() {
if( Serial.available() >0 ) {
    AndroidLampu = Serial.read();     // Membaca Input dari variabel Android Lampu
    Serial.println(AndroidLampu);     // Menampilkan Hasil AndroidLampu  pada Serial Monitor
}
  if( AndroidLampu == '1' ) {         // Jika Variabel AndroidLampu di tekan 1 atau bernilai 1    
    digitalWrite(2,LOW); }            // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 2
  else if( AndroidLampu == '2' ) {    // Jika Variabel AndroidLampu di tekan 2 atau bernilai 2
    digitalWrite(3,LOW); }            // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 3
  else if( AndroidLampu == '3' ) {    // Jika Variabel AndroidLampu di tekan 3 atau bernilai 3
    digitalWrite(4,LOW); }            // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 4
  else if( AndroidLampu == '4' ) {    // Jika Variabel AndroidLampu di tekan 4 atau bernilai 4
    digitalWrite(5,LOW); }            // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 5
  else if( AndroidLampu == '5' ) {    // Jika Variabel AndroidLampu di tekan 5 atau bernilai 5
    digitalWrite(2,LOW);              // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 2
    digitalWrite(3,LOW);              // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 3
    digitalWrite(4,LOW);              // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 4
    digitalWrite(5,LOW);              // Memerintahkan relay dengan Kondisi LOW/PADAM pada Pin Digital 5
 }
  else if( AndroidLampu == 'A' ) {    // Jika Variabel AndroidLampu di tekan A atau bernilai A   
    digitalWrite(2,HIGH); }           // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 2
  else if( AndroidLampu == 'B' ) {    // Jika Variabel AndroidLampu di tekan B atau bernilai B
    digitalWrite(3,HIGH); }           // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 3
  else if( AndroidLampu == 'C' ) {    // Jika Variabel AndroidLampu di tekan C atau bernilai C
    digitalWrite(4,HIGH); }           // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 4
  else if( AndroidLampu == 'D' ) {    // Jika Variabel AndroidLampu di tekan D atau bernilai D
    digitalWrite(5,HIGH); }           // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 5
  else if( AndroidLampu == 'E' ) {    // Jika Variabel AndroidLampu di tekan E atau bernilai E
    digitalWrite(2,HIGH);             // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 2
    digitalWrite(3,HIGH);             // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 3
    digitalWrite(4,HIGH);             // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 4
    digitalWrite(5,HIGH);             // Memerintahkan relay dengan Kondisi HIGH/NYALA pada Pin Digital 5
  }
} 
//**********************************************************************************************************************
//*****************************************=========Download Aplikasi=========******************************************
//***************https://play.google.com/store/apps/details?id=appinventor.ai_alrilla_com.Kontrol_Android***************
//**********************************************************************************************************************
