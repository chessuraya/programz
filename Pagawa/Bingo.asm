ORG 0000H
LJMP Start
ORG 000BH
LJMP IRQ2
ORG 0030H



Start: 
CLR EA
MOV SP, #30H
SETB ET0
MOV TMOD, #1H
SETB TF0
SETB P3.7


SETB EA
Main: 
SJMP Main

IRQ2:
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #047H
CALL PLAY
CALL pause
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #047H
CALL PLAY
CALL pause
;DDCCFFGGA
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #077H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #077H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #047H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #047H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0DAH
CALL PLAY
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0FAH
CALL PLAY
;;F;A,A;BBB;
call lpause
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
call lpause
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0FAH
CALL PLAY
call pause
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0FAH
CALL PLAY
call lpause
MOV R3, #03H
MOV R5, #0FFH
MOV R6, #016H
CALL PLAY
call lpause
;G,G;AAA;F,F
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0DAH
CALL PLAY
call pause
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0DAH
CALL PLAY
call lpause
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0FAH
CALL PLAY
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0FAH
CALL PLAY
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0FAH
CALL PLAY
call lpause
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
call pause
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
;GGGFECDEF;F
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0DAH
CALL PLAY
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0DAH
CALL PLAY
MOV R3, #03H
MOV R5, #0FEH
MOV R6, #0DAH
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0A2H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #047H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #077H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0A2H
CALL PLAY
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY
call lpause
MOV R3, #02H
MOV R5, #0FEH
MOV R6, #0B6H
CALL PLAY

ljmp endq


play:
MOV A, R3
ADD A, #00H ; INCREASE #00H To DECREASE SONG SPEED.
MOV R0, A
loop1: 
MOV R1, #0FFH ;
loop2: CLR TR0
MOV A, R5
MOV TH0, A
MOV A, R6
MOV TL0, A
SETB TR0
Loop:
JNB TF0, Loop
CPL P3.7
CLR TF0
DJNZ R1, loop2
DJNZ R0, loop1
CALL delayn
RET

delayn:
mov R0, #02H
delay1: mov R1, #0FFH
delay: DJNZ R1, delay
DJNZ R0, delay1
RET


pause:
mov R0, #02H
ba: mov R1, #0FFH
aa: djnz R1,aa
DJNZ R0,ba
RET

lpause:
mov R0, #05H
ca: mov R1, #0FFH
dad: djnz R1,dad
djnz R0, ca
RET
ENDQ: 
END