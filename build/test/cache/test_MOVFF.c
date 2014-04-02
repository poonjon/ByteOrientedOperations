#include "unity.h"
#include "MOVFF.h"
#include "CException.h"
#include "Bytecode.h"


void setUp() {}

void tearDown() {}



void test_movff_mov_file_location_0x011_to_0x010_should_pass(){

 int error;

 Instruction inst = { .mnemonic = MOVFF, .name = "movff" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x011, .operand2 = 0x010, .operand3 = -1};



 FSR[code.operand1] = 1;

 FSR[code.operand2] = 0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  movff(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((FSR[0x010])), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_HEX8);

}



void test_movff_mov_file_location_0x011_to_0x0110_should_pass(){

 int error;

 Instruction inst = { .mnemonic = MOVFF, .name = "movff" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x011, .operand2 = 0x110, .operand3 = -1};



 FSR[code.operand1] = 2;

 FSR[code.operand2] = 0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  movff(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((FSR[0x110])), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_HEX8);

}



void test_movff_mov_file_location_0x110_to_0x011_should_pass(){

 int error;

 Instruction inst = { .mnemonic = MOVFF, .name = "movff" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x011, .operand2 = 0x110, .operand3 = -1};



 FSR[code.operand1] = 3;

 FSR[code.operand2] = 0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  movff(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((FSR[0x11])), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_HEX8);

}



void test_movff_mov_file_location_0x011_to_0xFFF_should_throw_exception(){

 int error;

 Instruction inst = { .mnemonic = MOVFF, .name = "movff" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x011, .operand2 = 0xFFF, .operand3 = -1};



 FSR[code.operand1] = 1;

 FSR[code.operand2] = 0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  movff(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)79, UNITY_DISPLAY_STYLE_INT);

 }



}



void test_movff_invalid_operand1_should_throw_exception(){

 int error;

 Instruction inst = { .mnemonic = MOVFF, .name = "movff" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x1000, .operand2 = 0xFFF, .operand3 = -1};



 FSR[code.operand1] = 1;

 FSR[code.operand2] = 0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  movff(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)97, UNITY_DISPLAY_STYLE_INT);

 }



}



void test_movff_invalid_operand2_should_throw_exception(){

 int error;

 Instruction inst = { .mnemonic = MOVFF, .name = "movff" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x100, .operand2 = 0x1010, .operand3 = -1};



 FSR[code.operand1] = 1;

 FSR[code.operand2] = 0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  movff(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_INT);

 }



}



void test_movff_invalid_operand3_should_throw_exception(){

 int error;

 Instruction inst = { .mnemonic = MOVFF, .name = "movff" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x100, .operand2 = 0x11, .operand3 = 1};



 FSR[code.operand1] = 1;

 FSR[code.operand2] = 0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  movff(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)133, UNITY_DISPLAY_STYLE_INT);

 }



}
