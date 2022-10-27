static int compute4(int c, int d,int e) {
  if (e > d) {
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
