#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  // Integer
  printf("\nShort int %zu Bytes %d To %d", sizeof(short int), SHRT_MIN, SHRT_MAX);
  printf("\nunsigned short int %zu Bytes 0 To %d", sizeof(unsigned short int), USHRT_MAX);
  printf("\nunsigned int %zu Bytes 0 To %u", sizeof(unsigned int), UINT_MAX);
  printf("\nint %zu Bytes %d To %d", sizeof(int), INT_MIN, INT_MAX);
  printf("\nlong int %zu Bytes %ld To %ld", sizeof(long int), LONG_MIN, LONG_MAX);
  printf("\nunsigned long int %zu Bytes 0 To %lu", sizeof(unsigned long int), ULONG_MAX);
  printf("\nlong long int %zu Bytes %lld To %lld", sizeof(long long int), LLONG_MIN, LLONG_MAX);
  printf("\nunsigned long long int %zu Bytes 0 To %llu\n\n", sizeof(unsigned long long int), ULLONG_MAX);

  // Character
  printf("\nCharacter %zu Bytes %d To %d", sizeof(char), CHAR_MIN, CHAR_MAX);
  printf("\nunsigned character %zu Bytes 0 To %d\n\n", sizeof(unsigned char), UCHAR_MAX);

  // Float
  printf("\nFloat %zu Bytes", sizeof(float));
  printf("\nDouble %zu Bytes", sizeof(double));
  printf("\nLong Double %zu Bytes\n\n", sizeof(long double));

  return 0;
}
