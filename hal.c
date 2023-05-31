/*
Camada de Abstracao do Hardware (HAL) para execucao no Visual Studio
*/

#include "hal.h"
#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// IMPORTANTE: fique a vontade para criar outros metodos e variaveis

// Variaveis da Camada de Abstracao do Hardware (HAL)
boolean pinTurnSignal_LEFT;		// Representa o estado do pino de saida do microcontrolador ligado ao sinalizador ESQUERDO
boolean pinTurnSignal_RIGHT;	// Representa o estado do pino de saida do microcontrolador ligado ao sinalizador DIREITO
tuCommand lastCommand;			// Armazena o estado atual dos sinalizadores. Veja tambem: tuCommand

// Esta � a task que recebe os comandos do teclado e atualiza o valor de lastCommand
void task_Key(void *pParam){
	if (pParam == command_None)
		lastCommand.TurnCommands = command_None;
	if (pParam == command_Left)
		lastCommand.TurnCommands = command_Left;
	if (pParam == command_Right)
		lastCommand.TurnCommands = command_Right;
}

// Inicializa a Camada de Abstracao de Hardware.
void InitHAL() {
	pinTurnSignal_LEFT = FALSE;
	pinTurnSignal_RIGHT = FALSE;
	
}
// Metodo que retorna o estado da  alavanca de comando dos sinalizadores ("alavanda das setas junto ao volante"). Ver tamb�m tuCommand
tuCommand getTurnCommand() {
	return lastCommand;
}

/* Liga ou desliga o sinalizador direito.
- s: estado do sinalizador (TRUE = acende / FALSE = apaga)
*/
void TurnSignalRight(boolean s) {
	pinTurnSignal_LEFT = s;
}

/* Liga ou desliga o sinalizador esquerdo.
- s: estado do sinalizador (TRUE = acende / FALSE = apaga)
*/
void TurnSignalLeft(boolean s) {
	pinTurnSignal_LEFT = s;
}

// Inverte o estado do sinalizador direito. Se estava apagado, acende. Se estava aceso, apaga.
void ToggleTurnSignalRight() {
	pinTurnSignal_RIGHT = !pinTurnSignal_RIGHT;
}

// Inverte o estado do sinalizador direito. Se estava apagado, acende. Se estava aceso, apaga.
void ToggleTurnSignalLeft() {
	pinTurnSignal_LEFT = !pinTurnSignal_LEFT;
}

