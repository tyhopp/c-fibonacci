int fibonacci()
{
  static int first = 0;
  static int second = 1;
  int combined = first + second;
  first = second;
  second = combined;
  return combined;
}