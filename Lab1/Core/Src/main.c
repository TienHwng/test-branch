/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

void display7SEG1(int num)
{
    switch(num)
    {
        case 0:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, SET);
            break;
        }
        case 1:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, SET);
            break;
        }
        case 2:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, RESET);
            break;
        }
        case 3:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, RESET);
            break;
        }
        case 4:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, RESET);
            break;
        }
        case 5:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, RESET);
            break;
        }
        case 6:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, RESET);
            break;
        }
        case 7:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, SET);
            break;
        }
        case 8:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, RESET);
            break;
        }
        case 9:
        {
            HAL_GPIO_WritePin(GPIOB, A_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, B_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, C_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, D_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, E_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, F_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, G_Pin, RESET);
            break;
        }
    }
}

void display7SEG2(int num)
{
    switch(num)
    {
        case 0:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, SET);
            break;
        }
        case 1:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, SET);
            break;
        }
        case 2:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, RESET);
            break;
        }
        case 3:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, RESET);
            break;
        }
        case 4:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, RESET);
            break;
        }
        case 5:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, RESET);
            break;
        }
        case 6:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, RESET);
            break;
        }
        case 7:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, SET);
            break;
        }
        case 8:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, RESET);
            break;
        }
        case 9:
        {
            HAL_GPIO_WritePin(GPIOA, A2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, B2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, C2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, D2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, E2_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, F2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, G2_Pin, RESET);
            break;
        }
    }
}

/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void)
{

    /* USER CODE BEGIN 1 */

    /* USER CODE END 1 */

    /* MCU
     * Configuration--------------------------------------------------------*/

    /* Reset of all peripherals, Initializes the Flash interface and the
     * Systick. */
    HAL_Init();

    /* USER CODE BEGIN Init */

    /* USER CODE END Init */

    /* Configure the system clock */
    SystemClock_Config();

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

    /* Initialize all configured peripherals */
    MX_GPIO_Init();
    /* USER CODE BEGIN 2 */

    /* USER CODE END 2 */

    /* Infinite loop */
    /* USER CODE BEGIN WHILE */
    int count = 10;
    int count1 = 5;
    int count2 = 3;
    int red1 = 0, yellow1 = 0, green1 = 0, red2 = 0, yellow2 = 0, green2 = 0;

    while(1)
    {
        /* USER CODE END WHILE */

        /* USER CODE BEGIN 3 */
        if(count == 10)
        {
            red1 = green2 = 1;
            red2 = yellow1 = green1 = yellow2 = 0;

            HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, SET);

            HAL_GPIO_WritePin(GPIOB, LED_RED2_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, LED_YELLOW2_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, LED_GREEN2_Pin, RESET);
        }
        else if(count == 7)
        {
            yellow2 = 1;
            red2 = green2 = 0;
            HAL_GPIO_WritePin(GPIOB, LED_RED2_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, LED_YELLOW2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, LED_GREEN2_Pin, SET);
        }
        else if(count == 5)
        {
            green1 = red2 = 1;
            red1 = yellow1 = yellow2 = green2 = 0;
            HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, RESET);

            HAL_GPIO_WritePin(GPIOB, LED_YELLOW2_Pin, SET);
            HAL_GPIO_WritePin(GPIOB, LED_RED2_Pin, RESET);
            HAL_GPIO_WritePin(GPIOB, LED_GREEN2_Pin, SET);
        }
        else if(count == 2)
        {
            yellow1 = 1;
            red1 = green1 = 0;

            HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, RESET);
            HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, SET);
            HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, SET);
        }

        // display7SEG1(count--);
        count--;
        display7SEG1(count1--);
        display7SEG2(count2--);
        if(count1 == 0)
        {
            if(red1)
                count1 = 3;
            if(green1)
                count1 = 2;
            if(yellow1)
                count1 = 5;
        }

        if(count2 == 0)
        {
            if(red2)
                count2 = 3;
            if(green2)
                count2 = 2;
            if(yellow2)
                count2 = 5;
        }
        if(count == 0)
            count = 10;
        HAL_Delay(1000);
    }
    /* USER CODE END 3 */
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /** Initializes the RCC Oscillators according to the specified parameters
     * in the RCC_OscInitTypeDef structure.
     */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
    if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
    {
        Error_Handler();
    }

    /** Initializes the CPU, AHB and APB buses clocks
     */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK |
                                  RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

    if(HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
    {
        Error_Handler();
    }
}

/**
 * @brief GPIO Initialization Function
 * @param None
 * @retval None
 */
static void MX_GPIO_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    /* USER CODE BEGIN MX_GPIO_Init_1 */

    /* USER CODE END MX_GPIO_Init_1 */

    /* GPIO Ports Clock Enable */
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();

    /*Configure GPIO pin Output Level */
    HAL_GPIO_WritePin(GPIOA,
                      LED_RED1_Pin | LED_YELLOW1_Pin | LED_GREEN1_Pin | A2_Pin |
                          B2_Pin | C2_Pin | D2_Pin | E2_Pin | F2_Pin | G2_Pin,
                      GPIO_PIN_RESET);

    /*Configure GPIO pin Output Level */
    HAL_GPIO_WritePin(GPIOB,
                      A_Pin | B_Pin | C_Pin | LED_RED2_Pin | LED_YELLOW2_Pin |
                          LED_GREEN2_Pin | D_Pin | E_Pin | F_Pin | G_Pin |
                          LED_Pin,
                      GPIO_PIN_RESET);

    /*Configure GPIO pins : LED_RED1_Pin LED_YELLOW1_Pin LED_GREEN1_Pin A2_Pin
                             B2_Pin C2_Pin D2_Pin E2_Pin
                             F2_Pin G2_Pin */
    GPIO_InitStruct.Pin = LED_RED1_Pin | LED_YELLOW1_Pin | LED_GREEN1_Pin |
                          A2_Pin | B2_Pin | C2_Pin | D2_Pin | E2_Pin | F2_Pin |
                          G2_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /*Configure GPIO pins : A_Pin B_Pin C_Pin LED_RED2_Pin
                             LED_YELLOW2_Pin LED_GREEN2_Pin D_Pin E_Pin
                             F_Pin G_Pin LED_Pin */
    GPIO_InitStruct.Pin = A_Pin | B_Pin | C_Pin | LED_RED2_Pin |
                          LED_YELLOW2_Pin | LED_GREEN2_Pin | D_Pin | E_Pin |
                          F_Pin | G_Pin | LED_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* USER CODE BEGIN MX_GPIO_Init_2 */

    /* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void)
{
    /* USER CODE BEGIN Error_Handler_Debug */
    /* User can add his own implementation to report the HAL error return state
     */
    __disable_irq();
    while(1)
    {
    }
    /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
    /* USER CODE BEGIN 6 */
    /* User can add his own implementation to report the file name and line
       number, ex: printf("Wrong parameters value: file %s on line %d\r\n",
       file, line) */
    /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
