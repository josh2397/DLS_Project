#define SYSCTL_RCGUART 	(*((volatile unsigned long *)0x400FE618))
#define SYSCTL_PRUART (*((volatile unsigned long *)0x400FEA18))
#define SYSCTL_RCGCGPIO (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_PRGPIO 	(*((volatile unsigned long *)0x400FEA08))
#define SYSCTL_RCGCADC (*((volatile unsigned long *)0x400FE638))
#define SYSCTL_PRADC (*((volatile unsigned long *)0x400FEA38))
#define SYSCTL_RCGCTIMER (*((volatile unsigned long *)0x400FE604))
#define SYSCTL_PRTIMER (*((volatile unsigned long *)0x400FEA04))

#define NVIC_ST_CTRL 	  (*((volatile unsigned long *)0xE000E010))
#define NVIC_ST_RELOAD 	(*((volatile unsigned long *)0xE000E014))
#define NVIC_ST_CURRENT	(*((volatile unsigned long *)0xE000E018))

#define NVIC_EN0 	(*((volatile unsigned long *)0xE000E100))
#define NVIC_PR		(*((volatile unsigned long *)0xE000E404))
#define NVIC_EN1 	(*((volatile unsigned long *)0xE000E104))

#define GPIO_PORTF_UNLOCK 	(*((volatile unsigned long *)0x4C4F434B))

#define GPIOA_DATA	(*((unsigned long *)0x400043FC))
#define GPIOA_DIR 	(*((volatile unsigned long *)0x40004400))
#define GPIOA_AFSEL 	(*((volatile unsigned long *)0x40004420))
#define GPIOA_PCTL 	(*((volatile unsigned long *)0x4000452C))
#define GPIOA_AMSEL 	(*((volatile unsigned long *)0x40004528))
#define GPIOA_PUR 	(*((volatile unsigned long *)0x40004510))
#define GPIOA_PDR 	(*((volatile unsigned long *)0x40004514))
#define GPIOA_DR8R 	(*((volatile unsigned long *)0x40004508))
#define GPIOA_DEN 	(*((volatile unsigned long *)0x4000451C))
#define GPIOA_ICR  	(*((unsigned long *)0x4000441C))

#define GPIOB_DATA	(*((unsigned long *)0x400053FC))
#define GPIOB_DIR 	(*((volatile unsigned long *)0x40005400))
#define GPIOB_AFSEL 	(*((volatile unsigned long *)0x40005420))
#define GPIOB_PCTL 	(*((volatile unsigned long *)0x4000552C))
#define GPIOB_AMSEL 	(*((volatile unsigned long *)0x40005528))
#define GPIOB_PUR 	(*((volatile unsigned long *)0x40005510))
#define GPIOB_PDR 	(*((volatile unsigned long *)0x40005514))
#define GPIOB_DR8R 	(*((volatile unsigned long *)0x40005508))
#define GPIOB_DEN 	(*((volatile unsigned long *)0x4000551C))
#define GPIOB_ICR  	(*((unsigned long *)0x4000541C))
	
#define GPIOD_DATA	(*((unsigned long *)0x400073FC))
#define GPIOD_DIR 	(*((volatile unsigned long *)0x40007400))
#define GPIOD_AFSEL 	(*((volatile unsigned long *)0x40007420))
#define GPIOD_PCTL 	(*((volatile unsigned long *)0x4000752C))
#define GPIOD_AMSEL 	(*((volatile unsigned long *)0x40007528))
#define GPIOD_PUR 	(*((volatile unsigned long *)0x40007510))
#define GPIOD_PDR 	(*((volatile unsigned long *)0x40007514))
#define GPIOD_DR8R 	(*((volatile unsigned long *)0x40007508))
#define GPIOD_DEN 	(*((volatile unsigned long *)0x4000751C))
#define GPIOD_ICR  	(*((unsigned long *)0x4000741C))

#define GPIOE_DATA	(*((unsigned long *)0x400243FC))
#define GPIOE_DIR 	(*((volatile unsigned long *)0x40024400))
#define GPIOE_AFSEL 	(*((volatile unsigned long *)0x40024420))
#define GPIOE_PCTL 	(*((volatile unsigned long *)0x4002452C))
#define GPIOE_AMSEL 	(*((volatile unsigned long *)0x40024528))
#define GPIOE_PUR 	(*((volatile unsigned long *)0x40024510))
#define GPIOE_PDR 	(*((volatile unsigned long *)0x40024514))
#define GPIOE_DR8R 	(*((volatile unsigned long *)0x40024508))
#define GPIOE_DEN 	(*((volatile unsigned long *)0x4002451C))
#define GPIOE_ICR  	(*((unsigned long *)0x4002441C))

#define GPIOF_DATA	(*((unsigned long *)0x400253FC))
#define GPIOF_DIR 	(*((volatile unsigned long *)0x40025400))
#define GPIOF_AFSEL 	(*((volatile unsigned long *)0x40025420))
#define GPIOF_PCTL 	(*((volatile unsigned long *)0x4002552C))
#define GPIOF_AMSEL 	(*((volatile unsigned long *)0x40025528))
#define GPIOF_PUR 	(*((volatile unsigned long *)0x40025510))
#define GPIOF_PDR 	(*((volatile unsigned long *)0x40025514))
#define GPIOF_DR8R 	(*((volatile unsigned long *)0x40025508))
#define GPIOF_DEN 	(*((volatile unsigned long *)0x4002551C))
#define GPIOF_ICR  	(*((unsigned long *)0x4002541C))

#define UART0_DR 	(*((volatile unsigned long *)0x4000C000))
#define UART0_FR 	(*((volatile unsigned long *)0x4000C018))
#define UART0_IBRD 	(*((volatile unsigned long *)0x4000C024))
#define UART0_FBRD 	(*((volatile unsigned long *)0x4000C028))
#define UART0_LCRH 	(*((volatile unsigned long *)0x4000C02C))
#define UART0_CTL 	(*((volatile unsigned long *)0x4000C030))
#define UART0_IFLS 	(*((volatile unsigned long *)0x4000C034))
#define UART0_IM 	(*((volatile unsigned long *)0x4000C038))
#define UART0_ICR 	(*((volatile unsigned long *)0x4000C044))
#define UART0_RIS 	(*((volatile unsigned long *)0x4000C03C))
#define UART0_MIS 	(*((volatile unsigned long *)0x4000C040))

#define TIMER0_CFG 	(*((volatile unsigned long *)0x40030000))
#define TIMER0_TAMR 	(*((volatile unsigned long *)0x40030004))
#define TIMER0_CTL 	(*((volatile unsigned long *)0x4003000C))
#define TIMER0_IMR 	(*((volatile unsigned long *)0x40030018))
#define TIMER0_RIS 	(*((volatile unsigned long *)0x4003001C))
#define TIMER0_MIS 	(*((volatile unsigned long *)0x40030020))
#define TIMER0_ICR 	(*((volatile unsigned long *)0x40030024))
#define TIMER0_TAILR 	(*((volatile unsigned long *)0x40030028))
#define TIMER0_TBILR 	(*((volatile unsigned long *)0x4003002C))
#define TIMER0_TAPR 	(*((volatile unsigned long *)0x40030038))
#define TIMER0_TAR 	(*((volatile unsigned long *)0x40030048))
#define TIMER0_TAPV 	(*((volatile unsigned long *)0x40030064))
#define TIMER0_TAV 	(*((volatile unsigned long *)0x40030050))
#define TIMER0_TAMATCH 	(*((volatile unsigned long *)0x40030030))
#define TIMER0_TAPMR 	(*((volatile unsigned long *)0x40030040))
	
#define TIMER1_CFG 	(*((volatile unsigned long *)0x40031000))
#define TIMER1_TAMR 	(*((volatile unsigned long *)0x40031004))
#define TIMER1_CTL 	(*((volatile unsigned long *)0x4003100C))
#define TIMER1_IMR 	(*((volatile unsigned long *)0x40031018))
#define TIMER1_RIS 	(*((volatile unsigned long *)0x4003101C))
#define TIMER1_MIS 	(*((volatile unsigned long *)0x40031020))
#define TIMER1_ICR 	(*((volatile unsigned long *)0x40031024))
#define TIMER1_TAILR 	(*((volatile unsigned long *)0x40031028))
#define TIMER1_TAPR 	(*((volatile unsigned long *)0x40031038))
#define TIMER1_TAR 	(*((volatile unsigned long *)0x40031048))
#define TIMER1_TAPV 	(*((volatile unsigned long *)0x40031064))
#define TIMER1_TAV 	(*((volatile unsigned long *)0x40031050))
#define TIMER1_TAMATCH 	(*((volatile unsigned long *)0x40031030))
#define TIMER1_TAPMR 	(*((volatile unsigned long *)0x40031040))

#define TIMER2_CFG 	(*((volatile unsigned long *)0x4004C000))
#define TIMER2_TAMR 	(*((volatile unsigned long *)0x4004C004))
#define TIMER2_CTL 	(*((volatile unsigned long *)0x4004C00C))
#define TIMER2_IMR 	(*((volatile unsigned long *)0x4004C018))
#define TIMER2_RIS 	(*((volatile unsigned long *)0x4004C01C))
#define TIMER2_MIS 	(*((volatile unsigned long *)0x4004C020))
#define TIMER2_ICR 	(*((volatile unsigned long *)0x4004C024))
#define TIMER2_TAILR 	(*((volatile unsigned long *)0x4004C028))
#define TIMER2_TAPR 	(*((volatile unsigned long *)0x4004C038))
#define TIMER2_TAR 	(*((volatile unsigned long *)0x4004C048))
#define TIMER2_TAPV 	(*((volatile unsigned long *)0x4004C064))
#define TIMER2_TAV 	(*((volatile unsigned long *)0x4004C050))
#define TIMER2_TAMATCH 	(*((volatile unsigned long *)0x4004C030))
#define TIMER2_TAPMR 	(*((volatile unsigned long *)0x4004C040))


#define ADC0_ACTSS (*((volatile unsigned long *)0x40038000))
#define ADC0_PC (*((volatile unsigned long *)0x40038FC4))
#define ADC0_SSMUX3 (*((volatile unsigned long *)0x400380A0))
#define ADC0_EMUX (*((volatile unsigned long *)0x40038014))
#define ADC0_SSCTL3 (*((volatile unsigned long *)0x400380A4))
#define ADC0_IM (*((volatile unsigned long *)0x40038008))
#define ADC0_ISC (*((volatile unsigned long *)0x4003800C))
#define ADC0_SSFIFO3 (*((volatile unsigned long *)0x400380A8))
