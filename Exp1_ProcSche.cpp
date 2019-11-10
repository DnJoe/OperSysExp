#include<iostream>
#include<time.h>
#include<stdib.h>
/*requirments
实验一  进程调度
内容：
编写并调试一个模拟的进程调度程序，分别采用“短进程优先”、“时间片轮转”、“高响应比优先”调度算法对随机产生的五个进程进行调度，并比较算法的平均周转时间。
    以加深对进程的概念及进程调度算法的理解。

要求：
1.每个进程由一个进程控制块（ PCB）表示，进程控制块可以包含如下信息：
    进程名、优先数（响应比）、到达时间、需要运行时间（进程的长度）、已运行时间、进程状态等等（可以根据需要自己设定）。
2.由程序自动生成进程（包括需要的数据，要注意数据的合理范围），第一个进程到达时间从0开始，其余进程到达时间随机产生。 
3.采用时间片轮转调度算法时，进程的运行时间以时间片为单位进行计算。 
4.每个进程的状态可以是就绪 W（Wait）、运行R（Run）、或完成F（Finish）三种状态之一。 
5.每进行一次调度，程序都要输出一次运行结果：正在运行的进程、就绪队列中的进程、完成的进程以及各个进程的 PCB，以便进行检查。
6.最后计算各调度算法的平均周转时间，并进行比较、分析。
*/

/*analyze
class: 
PCB(enum status:Wait Run Finish)
then init 5 PCB represent process

algo:use func 
short_first()
time_spin()
high_feedback_first()

test:main():simulate and compare
*/


//def class PCB
class PCB
{
private:
    int proc_name;
    int priority;
    int time_arrive;
    int time_need;
    int time_exec;           
}