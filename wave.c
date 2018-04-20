
#i n c l u d e <s t d i o . h>
i n t  main ( i n t  argc ,  char
∗
argv [ ] )
{
i f  ( argc  != 2)  {
p r i n t f ("USAGE: %s name\n" ,  argv [ 0 ] ) ;
r e t u r n
−
1;
}
p r i n t f (" Hello , %s !\ n" ,  argv [ 1 ] ) ;
r e t u r n  0;
}
