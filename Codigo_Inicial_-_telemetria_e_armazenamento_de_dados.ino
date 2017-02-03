//Programa : Comunicacao utilizando modulo APC220 wireless
//Autores : Telemetria da Minerva Rockets 
//Sensores Envolvidos : barômetro, termômetro, acelerômetro, GPS, altímetro, giroscópio

// O modulo aceita cartões formatados em FAT16 ou FAT32
//Aqui ocorre a inclusão da biblioteca File Allocation Table
#include <SdFat.h>

 SdFat sdCard;
SdFile meuArquivo;
 
// Pino ligado ao pino CS do modulo
const int chipSelect = 4;
 
void setup()
{
//A velocidade de transmissão foi definida como a padrao
  Serial.begin(9600);
  // Sensor 0 na entrada analógica zero do Arduino
  pinMode(A0, INPUT);
  // Inicializa o modulo SD
  if(!sdCard.begin(chipSelect,SPI_HALF_SPEED))sdCard.initErrorHalt();
  // Abre o arquivo AQUISICAO_0.TXT
  if (!meuArquivo.open("aquisição_0.txt", O_RDWR | O_CREAT | O_AT_END))
  {
    sdCard.errorHalt("Ocorreu falha na abertura do arquivo Aquisicao_0.txt!");
  }
}
 
void loop()
{
  // Leitura da porta A0
  int valor = analogRead(A0);
  Serial.print("Leitura do Sensor  0: ");
  Serial.println(valor);
 
  // Grava dados do Sensor 0 em aquisição_0.txt
  meuArquivo.print("Leitura do Sensor 0: ");
  meuArquivo.println(valor);
 
  // A cada dois segundos uma linha será gerada neste arquivo baseado na porta A0
delay(2000);
}

//Nesta etapa o procedimento  serah repetido para os demais sensores
//Etapa Sensor 1
void setup()
{
//A velocidade de transmissão foi definida como a padrao
  Serial.begin(9600);
  // Sensor 1 na entrada analógica zero do Arduino
  pinMode(A1, INPUT);
  // Inicializa o modulo SD
  if(!sdCard.begin(chipSelect,SPI_HALF_SPEED))sdCard.initErrorHalt();
  // Abre o arquivo AQUISICAO_1.TXT
  if (!meuArquivo.open("aquisição_1.txt", O_RDWR | O_CREAT | O_AT_END))
  {
    sdCard.errorHalt("Ocorreu falha na abertura do arquivo Aquisicao_1.txt!");
  }
}
 
void loop()
{
  // Leitura da porta A1
  int valor = analogRead(A1);
  Serial.print("Leitura do Sensor  1: ");
  Serial.println(valor);
 
  // Grava dados do Sensor 1 em aquisição_1.txt
  meuArquivo.print("Leitura do Sensor 1: ");
  meuArquivo.println(valor);
 
  // A cada dois segundos uma linha será gerada neste arquivo baseado na porta A1
delay(2000);
}

//Etapa para Sensor 2

void setup()
{
//A velocidade de transmissão foi definida como a padrao
  Serial.begin(9600);
  // Sensor 2 na entrada analógica zero do Arduino
  pinMode(A2, INPUT);
  // Inicializa o modulo SD
  if(!sdCard.begin(chipSelect,SPI_HALF_SPEED))sdCard.initErrorHalt();
  // Abre o arquivo AQUISICAO_2.TXT
  if (!meuArquivo.open("aquisição_2.txt", O_RDWR | O_CREAT | O_AT_END))
  {
    sdCard.errorHalt("Ocorreu falha na abertura do arquivo Aquisicao_2.txt!");
  }
}
 
void loop()
{
  // Leitura da porta A2
  int valor = analogRead(A2);
  Serial.print("Leitura do Sensor  2: ");
  Serial.println(valor);
 
  // Grava dados do Sensor 2 em aquisição_2.txt
  meuArquivo.print("Leitura do Sensor 2: ");
  meuArquivo.println(valor);
 
  // A cada dois segundos uma linha será gerada neste arquivo baseado na porta A2
delay(2000);
}

// Etapa Sensor 3

void setup()
{
//A velocidade de transmissão foi definida como a padrao
  Serial.begin(9600);
  // Sensor 3 na entrada analógica zero do Arduino
  pinMode(A3, INPUT);
  // Inicializa o modulo SD
  if(!sdCard.begin(chipSelect,SPI_HALF_SPEED))sdCard.initErrorHalt();
  // Abre o arquivo AQUISICAO_3.TXT
  if (!meuArquivo.open("aquisicao_3.txt", O_RDWR | O_CREAT | O_AT_END))
  {
    sdCard.errorHalt("Ocorreu falha na abertura do arquivo Aquisicao_3.txt!");
  }
}
 
void loop()
{
  // Leitura da porta A3
  int valor = analogRead(A3);
  Serial.print("Leitura do Sensor  3: ");
  Serial.println(valor);
 
  // Grava dados do Sensor 3 em aquisição_3.txt
  meuArquivo.print("Leitura do Sensor 3: ");
  meuArquivo.println(valor);
 
  // A cada dois segundos uma linha será gerada neste arquivo baseado na porta A3
delay(2000);
}

//Etapa Sensor 4
void setup()
{
//A velocidade de transmissão foi definida como a padrao
  Serial.begin(9600);
  // Sensor 4 na entrada analógica zero do Arduino
  pinMode(A4, INPUT);
  // Inicializa o modulo SD
  if(!sdCard.begin(chipSelect,SPI_HALF_SPEED))sdCard.initErrorHalt();
  // Abre o arquivo AQUISICAO_4.TXT
  if (!meuArquivo.open("aquisição_4.txt", O_RDWR | O_CREAT | O_AT_END))
  {
    sdCard.errorHalt("Ocorreu falha na abertura do arquivo Aquisicao_4.txt!");
  }
}
 
void loop()
{
  // Leitura da porta A4
  int valor = analogRead(A4);
  Serial.print("Leitura do Sensor  4: ");
  Serial.println(valor);
 
  // Grava dados do Sensor 4 em aquisição_4.txt
  meuArquivo.print("Leitura do Sensor 4: ");
  meuArquivo.println(valor);
 
  // A cada dois segundos uma linha será gerada neste arquivo baseado na porta A4
delay(2000);
}

//Etapa Sensor 5

void setup()
{
//A velocidade de transmissão foi definida como a padrao
  Serial.begin(9600);
  // Sensor 5 na entrada analógica zero do Arduino
  pinMode(A5, INPUT);
  // Inicializa o modulo SD
  if(!sdCard.begin(chipSelect,SPI_HALF_SPEED))sdCard.initErrorHalt();
  // Abre o arquivo AQUISICAO_5.TXT
  if (!meuArquivo.open("aquisicao_5.txt", O_RDWR | O_CREAT | O_AT_END))
  {
    sdCard.errorHalt("Ocorreu falha na abertura do arquivo Aquisicao_5.txt!");
  }
}
 
void loop()
{
  // Leitura da porta A5
  int valor = analogRead(A5);
  Serial.print("Leitura do Sensor  5: ");
  Serial.println(valor);
 
  // Grava dados do Sensor 5 em aquisição.txt
  meuArquivo.print("Leitura do Sensor 5: ");
  meuArquivo.println(valor);
 
  // A cada dois segundos uma linha será gerada neste arquivo baseado na porta A5
delay(2000);
}

