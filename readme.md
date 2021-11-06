# hardware

- schmat **Eagle**/**Kicad**
- wyeksportować do `pdf`

# Sterowanie jasnością diody w zależności od intensywności odbieranego dźwięku
## Opis
>Mikrofon przesyła odebrany dźwięk do mikrokontrolera, ten natomiast steruje jasnością diody w zależności od poziomu odebranego sygnału.
***
## Urzadzenia
- **wejściowe:** mikrofon
- **wyjściowe:** dioda
***
## Lista elementów
*do ustalenia*
***
## Etap 1

- Temat projektu
- Opis
- Lista elementów

[link](www.google.pl)
![img](./img.png)

Fragment kodu

```cpp
_delay_ms(100);
PORTD |= (1 << 0);
_delay_ms(100);
PORTD &= ~(1 << 0);
```