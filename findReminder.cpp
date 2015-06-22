/**
 * @Input1: a positive integer
 * @Input2: a positive integer
 * @Output: the remainder of @Input1
 * when divided by @Input2
 * @Example:
 * findTheRemainder(5, 3) = 2
 */
int findTheRemainder(int a, int b) {
  if (a >= b) {
    a /= (a-b);
  }
  return a;
}
int main()
{
    findTheRemainder(5,3);
}
