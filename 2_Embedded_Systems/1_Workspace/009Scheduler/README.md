#### Requirements


1. SysTick at 1ms;
   * nucleo-f411re uses by default 8 MHz clock provided by ST-LINK;
   * to reach 1ms should devide clock by 8000;

2. Stack placement;
   * each task will have their stacks;
   * each task stack will have 1 kB;
   * the Application will use PSP stack;
   * the Scheduler will use MSP stack;
   * each task stack should be initialized as:
      |  R0-R12  |  0x0  |
      |  R0-R12  |  0x0  |


'''
|----MSP---||--------------PSP---------------|
|--Schedu--||----T1----|----T2----|----T3----|
|--125 kB--||---1 Kb---|---1 kB---|---1 kB---|
'''

