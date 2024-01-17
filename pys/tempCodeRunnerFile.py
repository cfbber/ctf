 for ( i = 0; i < strlen(s); ++i )
#   {
#     if ( (i & 1) != 0 )
#       v3 = 1;
#     else
#       v3 = -1;
#     *(&t + i + 10) = s[i] + v3;
#   }