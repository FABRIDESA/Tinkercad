//NOMBRE: FABRICIO
//APELLIDO: DE SA TORRES
//DIVISION: B
//EJERCICIO: PRIMER PARCIAL PARTE 1

//Implementar técnica de multiplexación para mostrar los dígitos
// en los displays
//contador comienza en 0, un botón aumenta en uno, otro disminuye
// en uno

#define A 10
#define B 11
#define C 5
#define D 6
#define E 7
#define F 9
#define G 8
#define SUBE 3
#define BAJA 2
#define RESET 4
#define UNIDAD A4
#define DECENA A5
#define APAGADOS 0
#define TIMEDISPLAYON 8

int countDigit = 0;
int sube = 1;
int subePrevia = 1;
int baja = 1;
int bajaPrevia = 1;
int reset = 1;
int resetPrevia = 1;

void setup()
{
  pinMode(2, INPUT_PULLUP );
  pinMode(3, INPUT_PULLUP );
  pinMode(4, INPUT_PULLUP );
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(UNIDAD, OUTPUT);
  pinMode(DECENA, OUTPUT);
  digitalWrite(UNIDAD,0);
  digitalWrite(DECENA,0);
  printDigit(0);
}

void loop()
{
  int pressed = keypressed();
  if(pressed == SUBE)
  {
   countDigit++;
   if(countDigit>99)
     countDigit=0;
  }
  else if(pressed == BAJA)
  {
   countDigit--;
   if(countDigit<0)
     countDigit=99;
  }
  else if(pressed == RESET)
  {
   countDigit = 0; 
  }
  printCount(countDigit);
}

void prendeDigito(int digito)
{
 if (digito == UNIDAD)
 {
  digitalWrite(UNIDAD, LOW); //pongo el comun de unidad en 0 (enciende)
  digitalWrite(DECENA, HIGH); //pongo el comunde decena en 1 (no enciende)
  delay(TIMEDISPLAYON);
 }
 else if (digito == DECENA)
 {
  digitalWrite(UNIDAD, HIGH);
  digitalWrite(DECENA, LOW);
  delay(TIMEDISPLAYON);
 }
 else //entro oon apagados, pongo los dos en 1 para q no enciendan ninguno de los dos
 {
  digitalWrite(UNIDAD, HIGH);
  digitalWrite(DECENA, HIGH);
 }
}

void printCount(int count)
{
  prendeDigito(APAGADOS);
  printDigit(count/10); //count es entero, si es 23 el numero, me devuelve un 2
  prendeDigito(DECENA); //prendería el 2 acá
  prendeDigito(APAGADOS);
  printDigit(count - 10 * ((int)count/10)); //(count = 23) - (10 * 2) = UNIDAD (esto es un casteo)
  prendeDigito(UNIDAD);
}

int keypressed(void)
{
 sube = digitalRead(SUBE); //devuelve 0 si presiono, 1 si no presiono
 baja = digitalRead(BAJA);
 reset = digitalRead(RESET);
 if (sube) //si no presioné SUBE
   subePrevia = 1; //entonces antes tampoco estaba presionada
 if (baja) //no presioné BAJA
   bajaPrevia = 1;
 if (reset) //no presioné RESET
   resetPrevia = 1;
 	if(sube==0 && sube != subePrevia)
    {
     subePrevia = sube;
      return SUBE; //devuelve SUBE cuando está presionada la tecla SUBE, SI no estaba presionada de antes
    }
  	if(baja==0 && baja != bajaPrevia)
    {
     bajaPrevia = baja;
      return BAJA;
    }
  	if(reset==0 && reset != resetPrevia)
    {
     resetPrevia = reset;
      return RESET;
    }
 return 0; // o no presioné ninguna tecla, o presioné una que estaba presionada
}

void printDigit(int digit)
{
 digitalWrite(A, LOW);
 digitalWrite(B, LOW);
 digitalWrite(C, LOW);
 digitalWrite(D, LOW);
 digitalWrite(E, LOW);
 digitalWrite(F, LOW);
 digitalWrite(G, LOW);
 switch (digit)
 {
  case 0:
   {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     break;
   }
  case 1:
   {
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     break;
   }
  case 2:
   {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(G, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(D, HIGH);
     break;
   }
  case 3:
   {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(G, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     break;
   }
  case 4:
   {
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     break;
   }
  case 5:
   {
     digitalWrite(A, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     break;
   }
  case 6:
   {
     digitalWrite(A, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(G, HIGH);
     break;
   }
  case 7:
   {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     break;
   }
  case 8:
   {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
     break;
   }
  case 9:
   {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
     break;
   }
 }
}

