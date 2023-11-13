#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
  struct tm *timeinfo;
  time_t rawtime;
  char buffer[80];

  while (1) {
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, 80, "%H:%M:%S", timeinfo);

    printf("\r%s", buffer);

    fflush(stdout);

    sleep(1);
  }

  return 0;
}

