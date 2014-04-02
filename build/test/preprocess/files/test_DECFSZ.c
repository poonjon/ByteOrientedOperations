#include "unity.h"
#include "DECFSZ.h"
#include "CException.h"
#include "Bytecode.h"


void setUp() {}

void tearDown() {}



void test_decfsz_should_decrement_value_0x01_expect_0x00_pc_add_4_store_in_wreg_access_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = W, .operand3 = ACCESS};



 FSR[code.operand1] = 0x01;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x00)), (_U_SINT)(_US8 )((FSR[0xfe8])), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x04)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_HEX8);

}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_store_in_wreg_access_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = W, .operand3 = ACCESS};



 FSR[code.operand1] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x01)), (_U_SINT)(_US8 )((FSR[0xfe8])), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x01_expect_0x00_pc_add_4_store_in_file_reg_access_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = F, .operand3 = ACCESS};



 FSR[code.operand1] = 0x01;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x00)), (_U_SINT)(_US8 )((FSR[code.operand1])), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x04)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_store_in_file_reg_access_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = F, .operand3 = ACCESS};



 FSR[code.operand1] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x01)), (_U_SINT)(_US8 )((FSR[code.operand1])), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x00_expect_0xff_pc_add_2_store_in_file_reg_access_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0xf89, .operand2 = F, .operand3 = ACCESS};



 FSR[code.operand1] = 0x0;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)101, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0xff)), (_U_SINT)(_US8 )((FSR[code.operand1])), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_store_in_file_reg_access_address_0xa1_should_change_to_0xfa1_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0xa1, .operand2 = F, .operand3 = 0};



 FSR[code.operand1] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US16)((0xfa1)), (_U_SINT)(_US16)((code.operand1)), (((void *)0)), (_U_UINT)124, UNITY_DISPLAY_STYLE_HEX16);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x01)), (_U_SINT)(_US8 )((FSR[code.operand1])), (((void *)0)), (_U_UINT)125, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)126, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_default_operand2_access_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = ACCESS, .operand3 = -1};



 FSR[code.operand1] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)143, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x01)), (_U_SINT)(_US8 )((FSR[code.operand1])), (((void *)0)), (_U_UINT)145, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)146, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_default_operand2_operand3_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = -1, .operand3 = -1};



 FSR[code.operand1] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)163, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x01)), (_U_SINT)(_US8 )((FSR[code.operand1])), (((void *)0)), (_U_UINT)165, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)166, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x01_expect_0x00_pc_add_4_store_in_wreg_bsr_5_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = 0, .operand3 = 1};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1+(FSR[0xfe0]<<8)] = 0x01;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)184, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x00)), (_U_SINT)(_US8 )((FSR[0xfe8])), (((void *)0)), (_U_UINT)186, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x04)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)187, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_store_in_wreg_bsr_5_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = W, .operand3 = BANKED};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1+(FSR[0xfe0]<<8)] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)205, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x01)), (_U_SINT)(_US8 )((FSR[0xfe8])), (((void *)0)), (_U_UINT)207, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)208, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x10_expect_0x0f_pc_add_2_store_in_wreg_bsr_5_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0xf92, .operand2 = W, .operand3 = BANKED};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1] = 0x10;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)226, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x0f)), (_U_SINT)(_US8 )((FSR[0xfe8])), (((void *)0)), (_U_UINT)228, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)229, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x01_expect_0x00_pc_add_4_store_in_file_bsr_5_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = F, .operand3 = 1};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1+(FSR[0xfe0]<<8)] = 0x01;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)247, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x00)), (_U_SINT)(_US8 )((FSR[code.operand1+(FSR[0xfe0]<<8)])), (((void *)0)), (_U_UINT)249, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x04)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)250, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_store_in_file_bsr_5_should_pass(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = F, .operand3 = BANKED};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1+(FSR[0xfe0]<<8)] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)268, UNITY_DISPLAY_STYLE_INT);

 }

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x01)), (_U_SINT)(_US8 )((FSR[code.operand1+(FSR[0xfe0]<<8)])), (((void *)0)), (_U_UINT)270, UNITY_DISPLAY_STYLE_HEX8);

 UnityAssertEqualNumber((_U_SINT)(_US8 )((0x02)), (_U_SINT)(_US8 )((PC)), (((void *)0)), (_U_UINT)271, UNITY_DISPLAY_STYLE_HEX8);



}



void test_decfsz_invalid_operand1_should_throw_exception(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = -1, .operand2 = F, .operand3 = BANKED};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1+(FSR[0xfe0]<<8)] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)289, UNITY_DISPLAY_STYLE_INT);

 }



}



void test_decfsz_invalid_operand2_should_throw_exception(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = 2, .operand3 = BANKED};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1+(FSR[0xfe0]<<8)] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)308, UNITY_DISPLAY_STYLE_INT);

 }





}



void test_decfsz_invalid_operand3_should_throw_exception(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = F, .operand3 = 2};



 FSR[0xfe0] = 0x05;

 FSR[code.operand1+(FSR[0xfe0]<<8)] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)328, UNITY_DISPLAY_STYLE_INT);

 }





}



void test_decfsz_should_decrement_value_0x02_expect_0x01_pc_add_2_default_operand2_invalid_operand3_should_throw_exception(){

 int error;



 Instruction inst = { .mnemonic = DECFSZ, .name = "decfsz" };

 Bytecode code = {.instruction = &inst, .operand1 = 0x12, .operand2 = ACCESS, .operand3 = 2};



 FSR[code.operand1] = 0x02;

 code.absoluteAddress = 0x00;

 PC = code.absoluteAddress;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  decfsz(&code);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { error = CExceptionFrames[MY_ID].Exception; error=error; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((ERR_INVALID_OPERAND)), (((void *)0)), (_U_UINT)347, UNITY_DISPLAY_STYLE_INT);

 }





}
