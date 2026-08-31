#pragma once

const int TOTAL_EJERCICIOS = 30;

void ejercicio_1();
void ejercicio_2();
void ejercicio_3();
void ejercicio_4();
void ejercicio_5();
void ejercicio_6();
void ejercicio_7();
void ejercicio_8();
void ejercicio_9();
void ejercicio_10();
void ejercicio_11();
void ejercicio_12();
void ejercicio_13();
void ejercicio_14();
void ejercicio_15();
void ejercicio_16();
void ejercicio_17();
void ejercicio_18();
void ejercicio_19();
void ejercicio_20();
void ejercicio_21();
void ejercicio_22();
void ejercicio_23();
void ejercicio_24();
void ejercicio_25();
void ejercicio_26();
void ejercicio_27();
void ejercicio_28();
void ejercicio_29();
void ejercicio_30();

void ejercicio_pendiente(int);

inline void (*ejercicios[TOTAL_EJERCICIOS])() = {
    ejercicio_1,
    ejercicio_2,
    ejercicio_3,
    ejercicio_4,
    ejercicio_5,
    ejercicio_6,
    ejercicio_7,
    ejercicio_8,
    ejercicio_9,
    ejercicio_10,
    ejercicio_11,
    ejercicio_12,
    ejercicio_13,
    ejercicio_14,
    ejercicio_15,
    ejercicio_16,
    ejercicio_17,
    ejercicio_18,
    ejercicio_19,
    ejercicio_20,
    ejercicio_21,
    ejercicio_22,
    ejercicio_23,
    ejercicio_24,
    ejercicio_25,
    ejercicio_26,
    ejercicio_27,
    ejercicio_28,
    ejercicio_29,
    ejercicio_30
};