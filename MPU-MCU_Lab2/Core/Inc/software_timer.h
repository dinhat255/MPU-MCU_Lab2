/*
 * software_timer.h
 *
 *  Created on: Sep 28, 2025
 *      Author: DUYNHAT
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;
extern int timer1_counter;
extern int timer1_flag;
extern int timer2_counter;
extern int timer2_flag;
extern int TIMER_CYCLE;


void setTimer0(int);
void setTimer1(int);
void setTimer2(int);
void timer_run();


#endif /* INC_SOFTWARE_TIMER_H_ */
