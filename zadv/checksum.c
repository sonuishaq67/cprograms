#include <stdlib.h>

unsigned checksum(void *buffer, size_t len, unsigned int seed)
{
      unsigned char *buf = (unsigned char *)buffer;
      size_t i;

      for (i = 0; i < len; ++i)
            seed += (unsigned int)(*buf++);
      return seed;
}

#include <stdio.h>

int main()
{
      FILE *fp;
      size_t len;
      char buf[4096], file[200];
      printf("Enter the file path : ");
      scanf("%s", file);
      if (NULL == (fp = fopen(file, "rb")))
      {
            printf("Unable to open %s for reading\n", file);
            return -1;
      }
      len = fread(buf, sizeof(char), sizeof(buf), fp);
      printf("%d bytes read\n", len);
      printf("The checksum of %s is %d\n", file, checksum(buf, len, 0));
      return 0;
}
