
/* FreeRTOS.org includes. */
#include "FreeRTOS.h"
#include "task.h"

// Demais includes
#include "basic_io.h"
#include "hal.h"
#include "sm.h"

// Esta ser� a sua m�quina de estados
StateMachine smBlink;

// TODO: defina aqui as assinaturas dos estados da m�quina de estados
	STATE(blinkOff);
	STATE(blinkLeft);
	STATE(blinkRight);
	STATE(blinkAlert);

// TODO: crie aqui o c�digo dos estados da m�quina de estados
	STATE(blinkOff) {
		// TODO: adicione aqui o c�digo de um dos estados
	

	}

	STATE(blinkLeft) {
		// TODO: adicione aqui o c�digo de um dos estados
	}
	STATE(blinkRight) {
		// TODO: adicione aqui o c�digo de um dos estados
	}
	STATE(blinkAlert) {
		// TODO: adicione aqui o c�digo de um dos estados
	}

// TODO: implemente aqui os codigos das Tasks
void task_BlinkLeft(void *pParam) {
	
}

void task_BlinkRight(void *pParam) {
	// TODO: adicione aqui o c�digo da task
}

void task_StateMachine(void *pParam) {
	// TODO: adicione aqui o c�digo da task que executa a m�quina de estados
	
}

int main_(void)
{
	// TODO: adicione aqui o c�digo que executa ao iniciar
	return 0;
}

