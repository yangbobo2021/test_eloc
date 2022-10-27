static int computea4(int c, int d,int e) {
  if (d >= c) {
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
