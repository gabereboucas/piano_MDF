#include <EduIntro.h>
 
Button botao0(0), botao1(1), botao2(2), botao3(3), botao4(4), botao5(5), botao6(6), botao7(7), botao8(8), botao9(9), botao10(10), botao11(11), botao12(12), botao13(13);
//Button botao1(1);
//Button botao2(2);
//Button botao3(3);
//Button botao4(4);
//Button botao5(5);
//Button botao6(6);
//Button botao7(7);
 
Piezo piezo(10);
 
void setup() {
  // não precisa fazer nada no Setup
}
 
void loop() {
  if (botao0.pressed()) piezo.beep(NOTE_C4);
  if (botao0.released()) piezo.noBeep();
 
  if (botao1.pressed()) piezo.beep(NOTE_D4);
  if (botao1.released()) piezo.noBeep();
 
  if (botao2.pressed()) piezo.beep(NOTE_E4);
  if (botao2.released()) piezo.noBeep();
 
  if (botao3.pressed()) piezo.beep(NOTE_F4);
  if (botao3.released()) piezo.noBeep();
 
  if (botao4.pressed()) piezo.beep(NOTE_G4);
  if (botao4.released()) piezo.noBeep();
 
  if (botao5.pressed()) piezo.beep(NOTE_A4);
  if (botao5.released()) piezo.noBeep();
  
  if (botao6.pressed()) piezo.beep(NOTE_B4);
  if (botao6.released()) piezo.noBeep();
 
  if (botao7.pressed()) piezo.beep(NOTE_C5);
  if (botao7.released()) piezo.noBeep();

  if (botao8.pressed()) piezo.beep(NOTE_A4);
  if (botao8.released()) piezo.noBeep();

  if (botao9.pressed()) piezo.beep(NOTE_A4);
  if (botao9.released()) piezo.noBeep();

  if (botao10.pressed()) piezo.beep(NOTE_G3);
  if (botao10.released()) piezo.noBeep();

  if (botao11.pressed()) piezo.beep(NOTE_E3);
  if (botao11.released()) piezo.noBeep();

  if (botao12.pressed()) piezo.beep(NOTE_C5);
  if (botao12.released()) piezo.noBeep();

  if (botao13.pressed()) piezo.beep(NOTE_A4);
  if (botao13.released()) piezo.noBeep();
}