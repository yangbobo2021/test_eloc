static int compute2(int c, int d,int e) {
  if (e == 3) {
    return e;
  }
  if (c > d) {
    return c + d;
  } else if (c == d) {
    return c * d;
  } else {
    return c - d;
  }
}
