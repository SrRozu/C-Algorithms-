#include <stdio.h>


int main ()
{
  int seconds_input = 0;
  int seconds = 0;
  int minutes = 0;
  int hours = 0;
  printf ("Seconds to convert: ");
  scanf ("%d", &seconds_input);

  seconds = seconds_input;

  while (seconds == 60 || seconds > 60)
    {
      seconds -= 60;
      minutes += 1;
    }

  while (minutes == 60 || minutes > 60)
    {
      minutes -= 60;
      hours += 1;
    }
  printf ("%d segundos:  %d horas %d minutos %d segundos", seconds_input,
	  hours, minutes, seconds);

  return 0;
}
