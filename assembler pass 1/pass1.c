.234567890123456789
LAB2C    START
         LDA     ALPHA
         LDB     #10
         LDX     #0
         ADDR    A,B
         STA     SAVEW,X
         LDX     #1
         STA     SAVEW,X
.Format 4
         +SUB    #12
         LDX     #0
         LDCH    HEXCHAR
         STA     INPUT
ADD      LDCH    STRING,X
         COMP    INPUT
         JEQ     FOUND
         STCH    OUTPUT,X
         TIX     #5
         JLT     ADD
FOUND    J       OUT
ALPHA    WORD    2
SAVEW    RESW    2
HEXCHAR  BYTE    X'61'
INPUT    RESB    1
STRING   BYTE    C'String'
OUTPUT   RESB    5
OUT      END     #4
