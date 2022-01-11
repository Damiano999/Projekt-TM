# Temat: Zapalanie diody w zależności od oświetlenia pomieszczenia
# Opis ogólny
>Na podstawie infomrmacji otrzymanych z fotorezystor dotyczących jasności otoczenia, mikropocesor zapala bądź gasi diodę RGB. Dodatkowo przy pomocy przycisku można zmieniać kolor świecenia diody.

# Urzadzenia
- **wejściowe:** fotorezystor, przycisk(do zmiany koloru świecenia)
- **wyjściowe:** dioda

# Lista elementów
## Sekcja mikroprocesora
![img](zdjecia/sekcja_mikro.jpg)
### 1.  Mikroprocesor - ATmega328P

<b>Parametry Techniczne</b>

Producent: ATMEL

Typ ukadu scalonego: mikrokontroler AVR

Organizacja pamici Flash: 32kx8bit

Pojemno pamici EEPROM: 1024B

Pojemno pamici SRAM: 2048B

Czstotliwo taktowania: 20MHz

Liczba wej/wyj:	23 

Liczba kanaw PWM: 6 

Liczba timerw 8-bit: 2 

Liczba timerw 16-bit: 1 

Napicie pracy: 1.8...5.5V

<b>Opis portów:</b>


![img](zdjecia/mikroprocesor.jpg)
***

### 2.  Rezonator kwarcowy 16 MHz
![img](zdjecia/kwarc.jpg)
***
## Sekcja wejściowa
![img](zdjecia/sekcja_wejscie.jpg)
### 1.  Przełącznik DTS-6 (przycisk typu tact switch)
Naciśnięcie powoduje zwarcie styków, zwolnienie rozwiera styki.

![img](zdjecia/przycisk.jpg)
***
### 2.  Fotorezystor
Fotorezystor zmienia swoją czułość w zależności od długości fali światła padającego na niego. Co za tym idzie jest w stanie monitorować oświetlenie w miejscu, w którym się znajduje.
![img](zdjecia/fotorezystor.jpg)
## Sekcja wyjściowa
![img](zdjecia/sekcja_wyjscie.jpg)
### 1.  Dioda LED RGB
# Kod
```cpp
In progress....
```
## Etap 1

- Temat projektu
- Opis
- Lista elementów

