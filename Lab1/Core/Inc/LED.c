/*
 * LED.c
 *
 *  Created on: Sep 9, 2024
 *      Author: win
 */

#include "main.h"
void Exercise1(void){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_Delay(2000);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

	void Exercise2(int num){
		if(num > 5){
		    HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		}
		if(num <= 5 && num >2){
			 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
		}

	}

	void Exercise3(void){
		HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
		HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
		HAL_Delay(3000);
		HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
		HAL_Delay(1);
		HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
		HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
		HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
		HAL_Delay(2000);
		HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
		HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
		HAL_GPIO_TogglePin(LED6_GPIO_Port, LED6_Pin);
		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
		HAL_Delay(3000);
		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
		HAL_Delay(1);
		HAL_GPIO_TogglePin(LED6_GPIO_Port, LED6_Pin);
		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
		HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);
		HAL_Delay(2000);
		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
		HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);

	}
	void display7SEG(int num){
		switch(num){
		case 0:
	           HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			   break;
		case 1:
	           HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
			   HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			   HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			   HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			   HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			   break;

		case 2:
		       HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		       HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
			   HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		       HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			   HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			   HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			  break;
		case 3:
			  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 	  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		      HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		 	  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		      HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		    break;
		case 4:
			  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
			  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		      HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		    break;
		case 5:
			  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
			  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		   	  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		default:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		}
	}
	void NumberClock(void){

			if(num == 0){
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			}
			if(num == 1){
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			}
			if(num == 2){
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			}
			if(num == 3){
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			}
			if(num == 4){
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			}
			if(num == 5){
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			}
			if(num == 6){
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			}
			if(num == 7){
				HAL_GPIO_WritePin(Seg2_0_GPIO_Port, Seg2_0_Pin, RESET);
			}
			if(num == 8){
				HAL_GPIO_WritePin(Seg2_1_GPIO_Port, Seg2_1_Pin, RESET);
			}
			if(num == 9){
				HAL_GPIO_WritePin(Seg2_2_GPIO_Port, Seg2_2_Pin, RESET);
			}
			if(num == 10){
				HAL_GPIO_WritePin(Seg2_3_GPIO_Port, Seg2_3_Pin, RESET);
			}
			if(num == 11){
				HAL_GPIO_WritePin(Seg2_4_GPIO_Port, Seg2_4_Pin, RESET);
			}
			}

		int Exercise8(int counter){
			if(counter >= 12){
				counter = 0;
			}
			NumberClock(counter);
			HAL_Delay(1000);
			counter++;
			return counter;
		}




