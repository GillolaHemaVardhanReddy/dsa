Our Task: We are given a number. The task is to find the Number of Trailing Zeros in the factorial of the number

<code>
int function trailZeros(int n) {
  if(n<0) return -1;
  int count = 0;
  for(int i=5;i<n;i*=5){
    count+=(n/i);
  }
  return count;
}
</code>
