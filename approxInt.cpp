// compute int_{a}^{b} f(x) dx using n equally spaced points between a and b

double approxInt(int a, int b, double (*f)(double), int n)
{
   double *x=new double[n+1] ;
   double res=0;
   
   for (int i=0; i<=n;i++)
   {
    x[i]=f( a + double(b-a)*i/n );
    if ( i>=1 )
    res+= (x[i] +x[i-1])/2;
   }
   return res* double(b-a)/n;
   
}
