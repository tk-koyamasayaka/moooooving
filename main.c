#include <stdio.h>
#include <unistd.h>

void wait_for_ms(int ms) {
  int i;
  for (i = 0; i < ms; i++) usleep(1000);
}

int main(void)
{
  printf("🍰\n");
  wait_for_ms(1000);
  printf("🍺\n");
  wait_for_ms(1000);
  printf("🍔\n");

  return 0;
}