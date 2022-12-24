/*
 * software_timer.h
 *
 *  Created on: Dec 14, 2022
 *      Author: HP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;
extern int TIMER_CYCLE;
void setTimer0 (int duration);
void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
