#include "motor.h"

void motor_RCC_Configure() {
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
}

void motor_GPIO_Configure() {
  GPIO_InitTypeDef GPIO_InitStructure;
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOE, &GPIO_InitStructure);
}

void motor_Init() {
  motor_RCC_Configure();
  motor_GPIO_Configure();
}