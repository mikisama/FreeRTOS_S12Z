/* Based on CPU DB MC9S12ZVC192_64, version 3.00.000 (RegistersPrg V2.33) */
/* DataSheet : MC9S12ZVC-Family Reference Manual Preliminary Confidential Rev. 1.7 29-September-2016 */

#include <mc9s12zvc64.h>

/*lint -save -esym(765, *) */


/* * * * *  8-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile INT_CFADDRSTR _INT_CFADDR;                        /* Interrupt Request Configuration Address Register; 0x00000017 */
volatile INT_CFDATA0STR _INT_CFDATA0;                      /* Interrupt Request Configuration Data Register 0; 0x00000018 */
volatile INT_CFDATA1STR _INT_CFDATA1;                      /* Interrupt Request Configuration Data Register 1; 0x00000019 */
volatile INT_CFDATA2STR _INT_CFDATA2;                      /* Interrupt Request Configuration Data Register 2; 0x0000001A */
volatile INT_CFDATA3STR _INT_CFDATA3;                      /* Interrupt Request Configuration Data Register 3; 0x0000001B */
volatile INT_CFDATA4STR _INT_CFDATA4;                      /* Interrupt Request Configuration Data Register 4; 0x0000001C */
volatile INT_CFDATA5STR _INT_CFDATA5;                      /* Interrupt Request Configuration Data Register 5; 0x0000001D */
volatile INT_CFDATA6STR _INT_CFDATA6;                      /* Interrupt Request Configuration Data Register 6; 0x0000001E */
volatile INT_CFDATA7STR _INT_CFDATA7;                      /* Interrupt Request Configuration Data Register 7; 0x0000001F */
volatile MODESTR _MODE;                                    /* Mode Register; 0x00000070 */
volatile MMCPCHSTR _MMCPCH;                                /* Captured S12ZCPU Program Counter High; 0x00000085 */
volatile MMCPCMSTR _MMCPCM;                                /* Captured S12ZCPU Program Counter Middle; 0x00000086 */
volatile MMCPCLSTR _MMCPCL;                                /* Captured S12ZCPU Program Counter Low; 0x00000087 */
volatile DBGC1STR _DBGC1;                                  /* Debug Control Register 1; 0x00000100 */
volatile DBGC2STR _DBGC2;                                  /* Debug Control Register 2; 0x00000101 */
volatile DBGSCR1STR _DBGSCR1;                              /* Debug State Control Register 1; 0x00000107 */
volatile DBGSCR2STR _DBGSCR2;                              /* Debug State Control Register 2; 0x00000108 */
volatile DBGSCR3STR _DBGSCR3;                              /* Debug State Control Register 3; 0x00000109 */
volatile DBGEFRSTR _DBGEFR;                                /* Debug Event Flag Register; 0x0000010A */
volatile DBGSRSTR _DBGSR;                                  /* Debug Status Register; 0x0000010B */
volatile DBGACTLSTR _DBGACTL;                              /* Debug Comparator A Control Register; 0x00000110 */
volatile DBGAAHSTR _DBGAAH;                                /* Debug Comparator A Address Register High; 0x00000115 */
volatile DBGAAMSTR _DBGAAM;                                /* Debug Comparator A Address Register Middle; 0x00000116 */
volatile DBGAALSTR _DBGAAL;                                /* Debug Comparator A Address Register Low; 0x00000117 */
volatile DBGAD0STR _DBGAD0;                                /* Debug Comparator A Data Register 0; 0x00000118 */
volatile DBGAD1STR _DBGAD1;                                /* Debug Comparator A Data Register 1; 0x00000119 */
volatile DBGAD2STR _DBGAD2;                                /* Debug Comparator A Data Register 2; 0x0000011A */
volatile DBGAD3STR _DBGAD3;                                /* Debug Comparator A Data Register 3; 0x0000011B */
volatile DBGADM0STR _DBGADM0;                              /* Debug Comparator A Data Mask Register 0; 0x0000011C */
volatile DBGADM1STR _DBGADM1;                              /* Debug Comparator A Data Mask Register 1; 0x0000011D */
volatile DBGADM2STR _DBGADM2;                              /* Debug Comparator A Data Mask Register 2; 0x0000011E */
volatile DBGADM3STR _DBGADM3;                              /* Debug Comparator A Data Mask Register 3; 0x0000011F */
volatile DBGBCTLSTR _DBGBCTL;                              /* Debug Comparator B Control Register; 0x00000120 */
volatile DBGBAHSTR _DBGBAH;                                /* Debug Comparator B Address Register High; 0x00000125 */
volatile DBGBAMSTR _DBGBAM;                                /* Debug Comparator B Address Register Middle; 0x00000126 */
volatile DBGBALSTR _DBGBAL;                                /* Debug Comparator B Address Register Low; 0x00000127 */
volatile DBGDCTLSTR _DBGDCTL;                              /* Debug Comparator D Control Register; 0x00000140 */
volatile DBGDAHSTR _DBGDAH;                                /* Debug Comparator D Address Register High; 0x00000145 */
volatile DBGDAMSTR _DBGDAM;                                /* Debug Comparator D Address Register Middle; 0x00000146 */
volatile DBGDALSTR _DBGDAL;                                /* Debug Comparator D Address Register Low; 0x00000147 */
volatile MODRR0STR _MODRR0;                                /* Module Routing Register 0; 0x00000200 */
volatile MODRR1STR _MODRR1;                                /* Module Routing Register 1; 0x00000201 */
volatile MODRR2STR _MODRR2;                                /* Module Routing Register 2; 0x00000202 */
volatile MODRR3STR _MODRR3;                                /* Module Routing Register 3; 0x00000203 */
volatile ECLKCTLSTR _ECLKCTL;                              /* ECLK Control Register; 0x00000208 */
volatile IRQCRSTR _IRQCR;                                  /* Interrupt Control Register; 0x00000209 */
volatile PTESTR _PTE;                                      /* Port E Data Register; 0x00000260 */
volatile PTIESTR _PTIE;                                    /* Port E Input Register; 0x00000262 */
volatile DDRESTR _DDRE;                                    /* Port E Data Direction Register; 0x00000264 */
volatile PERESTR _PERE;                                    /* Port E Pull Device Enable Register; 0x00000266 */
volatile PPSESTR _PPSE;                                    /* Port E Polarity Select Register; 0x00000268 */
volatile PTTSTR _PTT;                                      /* Port T Data Register; 0x000002C0 */
volatile PTITSTR _PTIT;                                    /* Port T Input Register; 0x000002C1 */
volatile DDRTSTR _DDRT;                                    /* Port T Data Direction Register; 0x000002C2 */
volatile PERTSTR _PERT;                                    /* Port T Pull Device Enable Register; 0x000002C3 */
volatile PPSTSTR _PPST;                                    /* Port T Polarity Select Register; 0x000002C4 */
volatile PTSSTR _PTS;                                      /* Port S Data Register; 0x000002D0 */
volatile PTISSTR _PTIS;                                    /* Port S Input Register; 0x000002D1 */
volatile DDRSSTR _DDRS;                                    /* Port S Data Direction Register; 0x000002D2 */
volatile PERSSTR _PERS;                                    /* Port S Pull Device Enable Register; 0x000002D3 */
volatile PPSSSTR _PPSS;                                    /* Port S Polarity Select Register; 0x000002D4 */
volatile PIESSTR _PIES;                                    /* Port S Interrupt Enable Register; 0x000002D6 */
volatile PIFSSTR _PIFS;                                    /* Port S Interrupt Flag Register; 0x000002D7 */
volatile WOMSSTR _WOMS;                                    /* Port S Wired-Or Mode Register; 0x000002DF */
volatile PTPSTR _PTP;                                      /* Port P Data Register; 0x000002F0 */
volatile PTIPSTR _PTIP;                                    /* Port P Input Register; 0x000002F1 */
volatile DDRPSTR _DDRP;                                    /* Port P Data Direction Register; 0x000002F2 */
volatile PERPSTR _PERP;                                    /* Port P Pull Device Enable Register; 0x000002F3 */
volatile PPSPSTR _PPSP;                                    /* Port P Polarity Select Register; 0x000002F4 */
volatile PIEPSTR _PIEP;                                    /* Port P Interrupt Enable Register; 0x000002F6 */
volatile PIFPSTR _PIFP;                                    /* Port P Interrupt Flag Register; 0x000002F7 */
volatile OCPEPSTR _OCPEP;                                  /* Port P Over-Current Protection Enable Register; 0x000002F9 */
volatile OCIEPSTR _OCIEP;                                  /* Port P Over-Current Interrupt Enable Register; 0x000002FA */
volatile OCIFPSTR _OCIFP;                                  /* Port P Over-Current Interrupt Flag Register; 0x000002FB */
volatile RDRPSTR _RDRP;                                    /* Port P Reduced Drive Register; 0x000002FD */
volatile PTJSTR _PTJ;                                      /* Port J Data Register; 0x00000310 */
volatile PTIJSTR _PTIJ;                                    /* Port J Input Register; 0x00000311 */
volatile DDRJSTR _DDRJ;                                    /* Port J Data Direction Register; 0x00000312 */
volatile PERJSTR _PERJ;                                    /* Port J Pull Device Enable Register; 0x00000313 */
volatile PPSJSTR _PPSJ;                                    /* Port J Polarity Select Register; 0x00000314 */
volatile WOMJSTR _WOMJ;                                    /* Port J Wired-Or Mode Register; 0x0000031F */
volatile PTILSTR _PTIL;                                    /* Port L Input Register; 0x00000331 */
volatile PTPSLSTR _PTPSL;                                  /* Port L Pull Select Register; 0x00000333 */
volatile PPSLSTR _PPSL;                                    /* Port L Polarity Select Register; 0x00000334 */
volatile PIELSTR _PIEL;                                    /* Port L Interrupt Enable Register; 0x00000336 */
volatile PIFLSTR _PIFL;                                    /* Port L Interrupt Flag Register; 0x00000337 */
volatile PTABYPLSTR _PTABYPL;                              /* Port L ADC Bypass Register; 0x0000033A */
volatile PTADIRLSTR _PTADIRL;                              /* Port L ADC Direct Register; 0x0000033B */
volatile DIENLSTR _DIENL;                                  /* Port LDigital Input Enable Register; 0x0000033C */
volatile PTAENLSTR _PTAENL;                                /* Port L ADC Connection Enable Register; 0x0000033D */
volatile PIRLSTR _PIRL;                                    /* Port L Input Divider Ratio Selection Register; 0x0000033E */
volatile PTTELSTR _PTTEL;                                  /* Port L Test Enable Register; 0x0000033F */
volatile FCLKDIVSTR _FCLKDIV;                              /* Flash Clock Divider Register; 0x00000380 */
volatile FSECSTR _FSEC;                                    /* Flash Security Register; 0x00000381 */
volatile FCCOBIXSTR _FCCOBIX;                              /* Flash CCOB Index Register; 0x00000382 */
volatile FPSTATSTR _FPSTAT;                                /* Flash Protection Status Register; 0x00000383 */
volatile FCNFGSTR _FCNFG;                                  /* Flash Configuration Register; 0x00000384 */
volatile FERCNFGSTR _FERCNFG;                              /* Flash Error Configuration Register; 0x00000385 */
volatile FSTATSTR _FSTAT;                                  /* Flash Status Register; 0x00000386 */
volatile FERSTATSTR _FERSTAT;                              /* Flash Error Status Register; 0x00000387 */
volatile FPROTSTR _FPROT;                                  /* P-Flash Protection Register; 0x00000388 */
volatile DFPROTSTR _DFPROT;                                /* EEPROM Protection Register; 0x00000389 */
volatile FOPTSTR _FOPT;                                    /* Flash Option Register. Note: All bits in the FOPT register are readable but can only be written in special mode; 0x0000038A */
volatile ECCSTATSTR _ECCSTAT;                              /* ECC Status Register; 0x000003C0 */
volatile ECCIESTR _ECCIE;                                  /* ECC Interrupt Enable Register; 0x000003C1 */
volatile ECCIFSTR _ECCIF;                                  /* ECC Interrupt Flag Register; 0x000003C2 */
volatile ECCDPTRHSTR _ECCDPTRH;                            /* ECC Debug Pointer Register High; 0x000003C7 */
volatile ECCDPTRMSTR _ECCDPTRM;                            /* ECC Debug Pointer Register Middle; 0x000003C8 */
volatile ECCDPTRLSTR _ECCDPTRL;                            /* ECC Debug Pointer Register Low; 0x000003C9 */
volatile ECCDESTR _ECCDE;                                  /* ECC Debug ECC; 0x000003CE */
volatile ECCDCMDSTR _ECCDCMD;                              /* ECC Debug Comamnd; 0x000003CF */
volatile TIM1TIOSSTR _TIM1TIOS;                            /* Timer Input Capture/Output Compare Select; 0x00000400 */
volatile TIM1CFORCSTR _TIM1CFORC;                          /* Timer Compare Force Register; 0x00000401 */
volatile TIM1TSCR1STR _TIM1TSCR1;                          /* Timer System Control Register1; 0x00000406 */
volatile TIM1TTOVSTR _TIM1TTOV;                            /* Timer Toggle On Overflow Register; 0x00000407 */
volatile TIM1TCTL2STR _TIM1TCTL2;                          /* Timer Control Register 2; 0x00000409 */
volatile TIM1TCTL4STR _TIM1TCTL4;                          /* Timer Control Register 4; 0x0000040B */
volatile TIM1TIESTR _TIM1TIE;                              /* Timer Interrupt Enable Register; 0x0000040C */
volatile TIM1TSCR2STR _TIM1TSCR2;                          /* Timer System Control Register 2; 0x0000040D */
volatile TIM1TFLG1STR _TIM1TFLG1;                          /* Main Timer Interrupt Flag 1; 0x0000040E */
volatile TIM1TFLG2STR _TIM1TFLG2;                          /* Main Timer Interrupt Flag 2; 0x0000040F */
volatile TIM1OCPDSTR _TIM1OCPD;                            /* Output Compare Pin Disconnect Register; 0x0000042C */
volatile TIM1PTPSRSTR _TIM1PTPSR;                          /* Precision Timer Prescaler Select Register; 0x0000042E */
volatile PWM0ESTR _PWM0E;                                  /* PWM0 Enable Register; 0x00000480 */
volatile PWM0POLSTR _PWM0POL;                              /* PWM0 Polarity Register; 0x00000481 */
volatile PWM0CLKSTR _PWM0CLK;                              /* PWM0 Clock Select Register; 0x00000482 */
volatile PWM0PRCLKSTR _PWM0PRCLK;                          /* PWM0 Prescale Clock Select Register; 0x00000483 */
volatile PWM0CAESTR _PWM0CAE;                              /* PWM0 Center Align Enable Register; 0x00000484 */
volatile PWM0CTLSTR _PWM0CTL;                              /* PWM0 Control Register; 0x00000485 */
volatile PWM0CLKABSTR _PWM0CLKAB;                          /* PWM0 Clock A/B Select Register; 0x00000486 */
volatile PWM0SCLASTR _PWM0SCLA;                            /* PWM0 Scale A Register; 0x00000488 */
volatile PWM0SCLBSTR _PWM0SCLB;                            /* PWM0 Scale B Register; 0x00000489 */
volatile PWM1ESTR _PWM1E;                                  /* PWM1 Enable Register; 0x00000500 */
volatile PWM1POLSTR _PWM1POL;                              /* PWM1 Polarity Register; 0x00000501 */
volatile PWM1CLKSTR _PWM1CLK;                              /* PWM1 Clock Select Register; 0x00000502 */
volatile PWM1PRCLKSTR _PWM1PRCLK;                          /* PWM1 Prescale Clock Select Register; 0x00000503 */
volatile PWM1CAESTR _PWM1CAE;                              /* PWM1 Center Align Enable Register; 0x00000504 */
volatile PWM1CTLSTR _PWM1CTL;                              /* PWM1 Control Register; 0x00000505 */
volatile PWM1CLKABSTR _PWM1CLKAB;                          /* PWM1 Clock A/B Select Register; 0x00000506 */
volatile PWM1SCLASTR _PWM1SCLA;                            /* PWM1 Scale A Register; 0x00000508 */
volatile PWM1SCLBSTR _PWM1SCLB;                            /* PWM1 Scale B Register; 0x00000509 */
volatile TIM0TIOSSTR _TIM0TIOS;                            /* Timer Input Capture/Output Compare Select; 0x000005C0 */
volatile TIM0CFORCSTR _TIM0CFORC;                          /* Timer Compare Force Register; 0x000005C1 */
volatile TIM0OC7MSTR _TIM0OC7M;                            /* Output Compare 7 Mask Register; 0x000005C2 */
volatile TIM0OC7DSTR _TIM0OC7D;                            /* Output Compare 7 Data Register; 0x000005C3 */
volatile TIM0TSCR1STR _TIM0TSCR1;                          /* Timer System Control Register1; 0x000005C6 */
volatile TIM0TTOVSTR _TIM0TTOV;                            /* Timer Toggle On Overflow Register; 0x000005C7 */
volatile TIM0TCTL1STR _TIM0TCTL1;                          /* Timer Control Register 1; 0x000005C8 */
volatile TIM0TCTL2STR _TIM0TCTL2;                          /* Timer Control Register 2; 0x000005C9 */
volatile TIM0TCTL3STR _TIM0TCTL3;                          /* Timer Control Register 3; 0x000005CA */
volatile TIM0TCTL4STR _TIM0TCTL4;                          /* Timer Control Register 4; 0x000005CB */
volatile TIM0TIESTR _TIM0TIE;                              /* Timer Interrupt Enable Register; 0x000005CC */
volatile TIM0TSCR2STR _TIM0TSCR2;                          /* Timer System Control Register 2; 0x000005CD */
volatile TIM0TFLG1STR _TIM0TFLG1;                          /* Main Timer Interrupt Flag 1; 0x000005CE */
volatile TIM0TFLG2STR _TIM0TFLG2;                          /* Main Timer Interrupt Flag 2; 0x000005CF */
volatile TIM0PACTLSTR _TIM0PACTL;                          /* 16-Bit Pulse Accumulator A Control Register; 0x000005E0 */
volatile TIM0PAFLGSTR _TIM0PAFLG;                          /* Pulse Accumulator A Flag Register; 0x000005E1 */
volatile TIM0OCPDSTR _TIM0OCPD;                            /* Output Compare Pin Disconnect Register; 0x000005EC */
volatile TIM0PTPSRSTR _TIM0PTPSR;                          /* Precision Timer Prescaler Select Register; 0x000005EE */
volatile ADC0STSSTR _ADC0STS;                              /* ADC0 Status Register; 0x00000602 */
volatile ADC0TIMSTR _ADC0TIM;                              /* ADC0 Timing Register; 0x00000603 */
volatile ADC0FMTSTR _ADC0FMT;                              /* ADC0 Format Register; 0x00000604 */
volatile ADC0FLWCTLSTR _ADC0FLWCTL;                        /* ADC0 Conversion Flow Control Register; 0x00000605 */
volatile ADC0EIESTR _ADC0EIE;                              /* ADC0 Error Interrupt Enable Register; 0x00000606 */
volatile ADC0IESTR _ADC0IE;                                /* ADC0 Interrupt Enable Register; 0x00000607 */
volatile ADC0EIFSTR _ADC0EIF;                              /* ADC0 Error Interrupt Flag Register; 0x00000608 */
volatile ADC0IFSTR _ADC0IF;                                /* ADC0 Interrupt Flag Register; 0x00000609 */
volatile ADC0EOLRISTR _ADC0EOLRI;                          /* ADC0 End Of List Result Information Register; 0x00000610 */
volatile ADC0CIDXSTR _ADC0CIDX;                            /* ADC0 Command Index Register; 0x0000061C */
volatile ADC0CBP_0STR _ADC0CBP_0;                          /* ADC0 Command Base Pointer Register 0; 0x0000061D */
volatile ADC0CBP_1STR _ADC0CBP_1;                          /* ADC0 Command Base Pointer Register 1; 0x0000061E */
volatile ADC0CBP_2STR _ADC0CBP_2;                          /* ADC0 Command Base Pointer Register 2; 0x0000061F */
volatile ADC0RIDXSTR _ADC0RIDX;                            /* ADC0 Result Index Register; 0x00000620 */
volatile ADC0RBP_0STR _ADC0RBP_0;                          /* ADC0 Result Base Pointer Register 0; 0x00000621 */
volatile ADC0RBP_1STR _ADC0RBP_1;                          /* ADC0 Result Base Pointer Register 1; 0x00000622 */
volatile ADC0RBP_2STR _ADC0RBP_2;                          /* ADC0 Result Base Pointer Register 2; 0x00000623 */
volatile ADC0CROFF0STR _ADC0CROFF0;                        /* ADC0 Command and Result Offset Register 0; 0x00000624 */
volatile ADC0CROFF1STR _ADC0CROFF1;                        /* ADC0 Command and Result Offset Register 1; 0x00000625 */
volatile CPMURFLGSTR _CPMURFLG;                            /* CPMU Reset Flags Register; 0x000006C3 */
volatile CPMUSYNRSTR _CPMUSYNR;                            /* CPMU Synthesizer Register; 0x000006C4 */
volatile CPMUREFDIVSTR _CPMUREFDIV;                        /* CPMU Reference Divider Register; 0x000006C5 */
volatile CPMUPOSTDIVSTR _CPMUPOSTDIV;                      /* CPMU Post Divider Register; 0x000006C6 */
volatile CPMUIFLGSTR _CPMUIFLG;                            /* CPMU Interrupt Flags Register; 0x000006C7 */
volatile CPMUINTSTR _CPMUINT;                              /* CPMU Interrupt Enable Register; 0x000006C8 */
volatile CPMUCLKSSTR _CPMUCLKS;                            /* CPMU Clock Select Register; 0x000006C9 */
volatile CPMUPLLSTR _CPMUPLL;                              /* CPMU PLL Control Register; 0x000006CA */
volatile CPMURTISTR _CPMURTI;                              /* CPMU RTI Control Register; 0x000006CB */
volatile CPMUCOPSTR _CPMUCOP;                              /* CPMU COP Control Register; 0x000006CC */
volatile CPMUARMCOPSTR _CPMUARMCOP;                        /* CPMU COP Timer Arm/Reset Register; 0x000006CF */
volatile CPMUHTCTLSTR _CPMUHTCTL;                          /* High Temperature Control Register; 0x000006D0 */
volatile CPMULVCTLSTR _CPMULVCTL;                          /* Low Voltage Control Register; 0x000006D1 */
volatile CPMUAPICTLSTR _CPMUAPICTL;                        /* Autonomous Periodical Interrupt Control Register; 0x000006D2 */
volatile CPMUACLKTRSTR _CPMUACLKTR;                        /* Autonomous Clock Trimming Register; 0x000006D3 */
volatile CPMUHTTRSTR _CPMUHTTR;                            /* High Temperature Trimming Register; 0x000006D7 */
volatile CPMUOSCSTR _CPMUOSC;                              /* CPMU Oscillator Register; 0x000006DA */
volatile CPMUPROTSTR _CPMUPROT;                            /* CPMUV1 Protection Register; 0x000006DB */
volatile CPMUVREGCTLSTR _CPMUVREGCTL;                      /* Voltage Regulator Control Register; 0x000006DD */
volatile CPMUOSC2STR _CPMUOSC2;                            /* CPMU Oscillator Register 2; 0x000006DE */
volatile BATESTR _BATE;                                    /* BATS Module Enable Register; 0x000006F0 */
volatile BATSRSTR _BATSR;                                  /* BATS Module Status Register; 0x000006F1 */
volatile BATIESTR _BATIE;                                  /* BATS Interrupt Enable Register; 0x000006F2 */
volatile BATIFSTR _BATIF;                                  /* BATS Interrupt Flag Register; 0x000006F3 */
volatile SCI0ACR2STR _SCI0ACR2;                            /* SCI 0 Alternative Control Register 2; 0x00000702 */
volatile SCI0CR2STR _SCI0CR2;                              /* SCI 0 Control Register 2; 0x00000703 */
volatile SCI0SR1STR _SCI0SR1;                              /* SCI 0 Status Register 1; 0x00000704 */
volatile SCI0SR2STR _SCI0SR2;                              /* SCI 0 Status Register 2; 0x00000705 */
volatile SCI0DRHSTR _SCI0DRH;                              /* SCI 0 Data Register High; 0x00000706 */
volatile SCI0DRLSTR _SCI0DRL;                              /* SCI 0 Data Register Low; 0x00000707 */
volatile SCI1ACR2STR _SCI1ACR2;                            /* SCI 1 Alternative Control Register 2; 0x00000712 */
volatile SCI1CR2STR _SCI1CR2;                              /* SCI 1 Control Register 2; 0x00000713 */
volatile SCI1SR1STR _SCI1SR1;                              /* SCI 1 Status Register 1; 0x00000714 */
volatile SCI1SR2STR _SCI1SR2;                              /* SCI 1 Status Register 2; 0x00000715 */
volatile SCI1DRHSTR _SCI1DRH;                              /* SCI 1 Data Register High; 0x00000716 */
volatile SCI1DRLSTR _SCI1DRL;                              /* SCI 1 Data Register Low; 0x00000717 */
volatile SPI0CR1STR _SPI0CR1;                              /* SPI 0 Control Register 1; 0x00000780 */
volatile SPI0CR2STR _SPI0CR2;                              /* SPI 0 Control Register 2; 0x00000781 */
volatile SPI0BRSTR _SPI0BR;                                /* SPI 0 Baud Rate Register; 0x00000782 */
volatile SPI0SRSTR _SPI0SR;                                /* SPI 0 Status Register; 0x00000783 */
volatile SPI1CR1STR _SPI1CR1;                              /* SPI 1 Control Register 1; 0x00000790 */
volatile SPI1CR2STR _SPI1CR2;                              /* SPI 1 Control Register 2; 0x00000791 */
volatile SPI1BRSTR _SPI1BR;                                /* SPI 1 Baud Rate Register; 0x00000792 */
volatile SPI1SRSTR _SPI1SR;                                /* SPI 1 Status Register; 0x00000793 */
volatile IIC0IBADSTR _IIC0IBAD;                            /* IIC Address Register; 0x000007C0 */
volatile IIC0IBFDSTR _IIC0IBFD;                            /* IIC Frequency Divider Register; 0x000007C1 */
volatile IIC0IBCRSTR _IIC0IBCR;                            /* IIC Control Register; 0x000007C2 */
volatile IIC0IBSRSTR _IIC0IBSR;                            /* IIC Status Register; 0x000007C3 */
volatile IIC0IBDRSTR _IIC0IBDR;                            /* IIC Data I/O Register; 0x000007C4 */
volatile IIC0IBCR2STR _IIC0IBCR2;                          /* IIC Control Register 2; 0x000007C5 */
volatile CAN0CTL0STR _CAN0CTL0;                            /* MSCAN0 Control 0 Register; 0x00000800 */
volatile CAN0CTL1STR _CAN0CTL1;                            /* MSCAN0 Control 1 Register; 0x00000801 */
volatile CAN0BTR0STR _CAN0BTR0;                            /* MSCAN0 Bus Timing Register 0; 0x00000802 */
volatile CAN0BTR1STR _CAN0BTR1;                            /* MSCAN0 Bus Timing Register 1; 0x00000803 */
volatile CAN0RFLGSTR _CAN0RFLG;                            /* MSCAN0 Receiver Flag Register; 0x00000804 */
volatile CAN0RIERSTR _CAN0RIER;                            /* MSCAN0 Receiver Interrupt Enable Register; 0x00000805 */
volatile CAN0TFLGSTR _CAN0TFLG;                            /* MSCAN0 Transmitter Flag Register; 0x00000806 */
volatile CAN0TIERSTR _CAN0TIER;                            /* MSCAN0 Transmitter Interrupt Enable Register; 0x00000807 */
volatile CAN0TARQSTR _CAN0TARQ;                            /* MSCAN0 Transmitter Message Abort Request; 0x00000808 */
volatile CAN0TAAKSTR _CAN0TAAK;                            /* MSCAN0 Transmitter Message Abort Acknowledge; 0x00000809 */
volatile CAN0TBSELSTR _CAN0TBSEL;                          /* MSCAN0 Transmit Buffer Selection; 0x0000080A */
volatile CAN0IDACSTR _CAN0IDAC;                            /* MSCAN0 Identifier Acceptance Control Register; 0x0000080B */
volatile CAN0MISCSTR _CAN0MISC;                            /* MSCAN0 Miscellaneous Register; 0x0000080D */
volatile CAN0RXERRSTR _CAN0RXERR;                          /* MSCAN0 Receive Error Counter Register; 0x0000080E */
volatile CAN0TXERRSTR _CAN0TXERR;                          /* MSCAN0 Transmit Error Counter Register; 0x0000080F */
volatile CAN0IDAR0STR _CAN0IDAR0;                          /* MSCAN0 Identifier Acceptance Register 0; 0x00000810 */
volatile CAN0IDAR1STR _CAN0IDAR1;                          /* MSCAN0 Identifier Acceptance Register 1; 0x00000811 */
volatile CAN0IDAR2STR _CAN0IDAR2;                          /* MSCAN0 Identifier Acceptance Register 2; 0x00000812 */
volatile CAN0IDAR3STR _CAN0IDAR3;                          /* MSCAN0 Identifier Acceptance Register 3; 0x00000813 */
volatile CAN0IDMR0STR _CAN0IDMR0;                          /* MSCAN0 Identifier Mask Register 0; 0x00000814 */
volatile CAN0IDMR1STR _CAN0IDMR1;                          /* MSCAN0 Identifier Mask Register 1; 0x00000815 */
volatile CAN0IDMR2STR _CAN0IDMR2;                          /* MSCAN0 Identifier Mask Register 2; 0x00000816 */
volatile CAN0IDMR3STR _CAN0IDMR3;                          /* MSCAN0 Identifier Mask Register 3; 0x00000817 */
volatile CAN0IDAR4STR _CAN0IDAR4;                          /* MSCAN0 Identifier Acceptance Register 4; 0x00000818 */
volatile CAN0IDAR5STR _CAN0IDAR5;                          /* MSCAN0 Identifier Acceptance Register 5; 0x00000819 */
volatile CAN0IDAR6STR _CAN0IDAR6;                          /* MSCAN0 Identifier Acceptance Register 6; 0x0000081A */
volatile CAN0IDAR7STR _CAN0IDAR7;                          /* MSCAN0 Identifier Acceptance Register 7; 0x0000081B */
volatile CAN0IDMR4STR _CAN0IDMR4;                          /* MSCAN0 Identifier Mask Register 4; 0x0000081C */
volatile CAN0IDMR5STR _CAN0IDMR5;                          /* MSCAN0 Identifier Mask Register 5; 0x0000081D */
volatile CAN0IDMR6STR _CAN0IDMR6;                          /* MSCAN0 Identifier Mask Register 6; 0x0000081E */
volatile CAN0IDMR7STR _CAN0IDMR7;                          /* MSCAN0 Identifier Mask Register 7; 0x0000081F */
volatile CAN0RXIDR0STR _CAN0RXIDR0;                        /* MSCAN0 Receive Identifier Register 0; 0x00000820 */
volatile CAN0RXIDR1STR _CAN0RXIDR1;                        /* MSCAN0 Receive Identifier Register 1; 0x00000821 */
volatile CAN0RXIDR2STR _CAN0RXIDR2;                        /* MSCAN0 Receive Identifier Register 2; 0x00000822 */
volatile CAN0RXIDR3STR _CAN0RXIDR3;                        /* MSCAN0 Receive Identifier Register 3; 0x00000823 */
volatile CAN0RXDSR0STR _CAN0RXDSR0;                        /* MSCAN0 Receive Data Segment Register 0; 0x00000824 */
volatile CAN0RXDSR1STR _CAN0RXDSR1;                        /* MSCAN0 Receive Data Segment Register 1; 0x00000825 */
volatile CAN0RXDSR2STR _CAN0RXDSR2;                        /* MSCAN0 Receive Data Segment Register 2; 0x00000826 */
volatile CAN0RXDSR3STR _CAN0RXDSR3;                        /* MSCAN0 Receive Data Segment Register 3; 0x00000827 */
volatile CAN0RXDSR4STR _CAN0RXDSR4;                        /* MSCAN0 Receive Data Segment Register 4; 0x00000828 */
volatile CAN0RXDSR5STR _CAN0RXDSR5;                        /* MSCAN0 Receive Data Segment Register 5; 0x00000829 */
volatile CAN0RXDSR6STR _CAN0RXDSR6;                        /* MSCAN0 Receive Data Segment Register 6; 0x0000082A */
volatile CAN0RXDSR7STR _CAN0RXDSR7;                        /* MSCAN0 Receive Data Segment Register 7; 0x0000082B */
volatile CAN0RXDLRSTR _CAN0RXDLR;                          /* MSCAN0 Receive Data Length Register; 0x0000082C */
volatile CAN0TXIDR0STR _CAN0TXIDR0;                        /* MSCAN0 Transmit Identifier Register 0; 0x00000830 */
volatile CAN0TXIDR1STR _CAN0TXIDR1;                        /* MSCAN0 Transmit Identifier Register 1; 0x00000831 */
volatile CAN0TXIDR2STR _CAN0TXIDR2;                        /* MSCAN0 Transmit Identifier Register 2; 0x00000832 */
volatile CAN0TXIDR3STR _CAN0TXIDR3;                        /* MSCAN0 Transmit Identifier Register 3; 0x00000833 */
volatile CAN0TXDSR0STR _CAN0TXDSR0;                        /* MSCAN0 Transmit Data Segment Register 0; 0x00000834 */
volatile CAN0TXDSR1STR _CAN0TXDSR1;                        /* MSCAN0 Transmit Data Segment Register 1; 0x00000835 */
volatile CAN0TXDSR2STR _CAN0TXDSR2;                        /* MSCAN0 Transmit Data Segment Register 2; 0x00000836 */
volatile CAN0TXDSR3STR _CAN0TXDSR3;                        /* MSCAN0 Transmit Data Segment Register 3; 0x00000837 */
volatile CAN0TXDSR4STR _CAN0TXDSR4;                        /* MSCAN0 Transmit Data Segment Register 4; 0x00000838 */
volatile CAN0TXDSR5STR _CAN0TXDSR5;                        /* MSCAN0 Transmit Data Segment Register 5; 0x00000839 */
volatile CAN0TXDSR6STR _CAN0TXDSR6;                        /* MSCAN0 Transmit Data Segment Register 6; 0x0000083A */
volatile CAN0TXDSR7STR _CAN0TXDSR7;                        /* MSCAN0 Transmit Data Segment Register 7; 0x0000083B */
volatile CAN0TXDLRSTR _CAN0TXDLR;                          /* MSCAN0 Transmit Data Length Register; 0x0000083C */
volatile CAN0TXTBPRSTR _CAN0TXTBPR;                        /* MSCAN0 Transmit Buffer Priority; 0x0000083D */
volatile CP0DRSTR _CP0DR;                                  /* Port CP Data Register; 0x00000990 */
volatile CP0CRSTR _CP0CR;                                  /* CAN Physical Layer Control Register; 0x00000991 */
volatile CP0SRSTR _CP0SR;                                  /* CAN Physical Layer Status Register; 0x00000993 */
volatile CP0IESTR _CP0IE;                                  /* CAN Physical Layer Interrupt Enable Register; 0x00000996 */
volatile CP0IFSTR _CP0IF;                                  /* CAN Physical Layer Interrupt Flag Register; 0x00000997 */
volatile INTENSTR _INTEN;                                  /* SENT Transmitter Interrupt Enable Register; 0x000009A6 */
volatile INTFLGSTR _INTFLG;                                /* SENT Transmitter Interrupt Flag Register; 0x000009A7 */
/* NVFPROT - macro for reading non volatile register       Non Volatile P-Flash Protection Register; 0x00FFFE0C */
/* Tip for register initialization in the user code:  const byte NVFPROT_INIT @0x00FFFE0C = <NVFPROT_INITVAL>; */
/* NVDFPROT - macro for reading non volatile register      Non Volatile D-Flash Protection Register; 0x00FFFE0D */
/* Tip for register initialization in the user code:  const byte NVDFPROT_INIT @0x00FFFE0D = <NVDFPROT_INITVAL>; */
/* NVFOPT - macro for reading non volatile register        Non Volatile Flash Option Register; 0x00FFFE0E */
/* Tip for register initialization in the user code:  const byte NVFOPT_INIT @0x00FFFE0E = <NVFOPT_INITVAL>; */
/* NVFSEC - macro for reading non volatile register        Non Volatile Flash Security Register; 0x00FFFE0F */
/* Tip for register initialization in the user code:  const byte NVFSEC_INIT @0x00FFFE0F = <NVFSEC_INITVAL>; */


/* * * * *  16-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile IVBRSTR _IVBR;                                    /* Interrupt Vector Base Register; 0x00000010 */
volatile MMCECSTR _MMCEC;                                  /* Error code register; 0x00000080 */
volatile MMCCCRSTR _MMCCCR;                                /* Captured S12ZCPU Condition Code Register; 0x00000082 */
volatile PTADSTR _PTAD;                                    /* Port AD Data Register; 0x00000280 */
volatile PTIADSTR _PTIAD;                                  /* Port AD Input Register; 0x00000282 */
volatile DDRADSTR _DDRAD;                                  /* Port AD Data Direction Register; 0x00000284 */
volatile PERADSTR _PERAD;                                  /* Port AD Pull Device Enable Register; 0x00000286 */
volatile PPSADSTR _PPSAD;                                  /* Port AD Polarity Select Register; 0x00000288 */
volatile PIEADSTR _PIEAD;                                  /* Port AD Interrupt Enable Register; 0x0000028C */
volatile PIFADSTR _PIFAD;                                  /* Port AD Interrupt Flag Register; 0x0000028E */
volatile DIENADSTR _DIENAD;                                /* Digital Input Enable Register; 0x00000298 */
volatile FCCOB0STR _FCCOB0;                                /* Flash Common Command Object Register; 0x0000038C */
volatile FCCOB1STR _FCCOB1;                                /* Flash Common Command Object Register; 0x0000038E */
volatile FCCOB2STR _FCCOB2;                                /* Flash Common Command Object Register; 0x00000390 */
volatile FCCOB3STR _FCCOB3;                                /* Flash Common Command Object Register; 0x00000392 */
volatile FCCOB4STR _FCCOB4;                                /* Flash Common Command Object Register; 0x00000394 */
volatile FCCOB5STR _FCCOB5;                                /* Flash Common Command Object Register; 0x00000396 */
volatile ECCDDSTR _ECCDD;                                  /* ECC Debug Data; 0x000003CC */
volatile TIM1TCNTSTR _TIM1TCNT;                            /* Timer Count Register; 0x00000404 */
volatile TIM1TC0STR _TIM1TC0;                              /* Timer Input Capture/Output Compare Register 0; 0x00000410 */
volatile TIM1TC1STR _TIM1TC1;                              /* Timer Input Capture/Output Compare Register 1; 0x00000412 */
volatile TIM1TC2STR _TIM1TC2;                              /* Timer Input Capture/Output Compare Register 2; 0x00000414 */
volatile TIM1TC3STR _TIM1TC3;                              /* Timer Input Capture/Output Compare Register 3; 0x00000416 */
volatile PWM0CNT01STR _PWM0CNT01;                          /* PWM0 Channel Counter 01 Register; 0x0000048C */
volatile PWM0CNT23STR _PWM0CNT23;                          /* PWM0 Channel Counter 23 Register; 0x0000048E */
volatile PWM0CNT45STR _PWM0CNT45;                          /* PWM0 Channel Counter 45 Register; 0x00000490 */
volatile PWM0CNT67STR _PWM0CNT67;                          /* PWM0 Channel Counter 67 Register; 0x00000492 */
volatile PWM0PER01STR _PWM0PER01;                          /* PWM0 Channel Period 01 Register; 0x00000494 */
volatile PWM0PER23STR _PWM0PER23;                          /* PWM0 Channel Period 23 Register; 0x00000496 */
volatile PWM0PER45STR _PWM0PER45;                          /* PWM0 Channel Period 45 Register; 0x00000498 */
volatile PWM0PER67STR _PWM0PER67;                          /* PWM0 Channel Period 67 Register; 0x0000049A */
volatile PWM0DTY01STR _PWM0DTY01;                          /* PWM0 Channel Duty 01 Register; 0x0000049C */
volatile PWM0DTY23STR _PWM0DTY23;                          /* PWM0 Channel Duty 23 Register; 0x0000049E */
volatile PWM0DTY45STR _PWM0DTY45;                          /* PWM0 Channel Duty 45 Register; 0x000004A0 */
volatile PWM0DTY67STR _PWM0DTY67;                          /* PWM0 Channel Duty 67 Register; 0x000004A2 */
volatile PWM1CNT01STR _PWM1CNT01;                          /* PWM1 Channel Counter 01 Register; 0x0000050C */
volatile PWM1CNT23STR _PWM1CNT23;                          /* PWM1 Channel Counter 23 Register; 0x0000050E */
volatile PWM1CNT45STR _PWM1CNT45;                          /* PWM1 Channel Counter 45 Register; 0x00000510 */
volatile PWM1CNT67STR _PWM1CNT67;                          /* PWM1 Channel Counter 67 Register; 0x00000512 */
volatile PWM1PER01STR _PWM1PER01;                          /* PWM1 Channel Period 01 Register; 0x00000514 */
volatile PWM1PER23STR _PWM1PER23;                          /* PWM1 Channel Period 23 Register; 0x00000516 */
volatile PWM1PER45STR _PWM1PER45;                          /* PWM1 Channel Period 45 Register; 0x00000518 */
volatile PWM1PER67STR _PWM1PER67;                          /* PWM1 Channel Period 67 Register; 0x0000051A */
volatile PWM1DTY01STR _PWM1DTY01;                          /* PWM1 Channel Duty 01 Register; 0x0000051C */
volatile PWM1DTY23STR _PWM1DTY23;                          /* PWM1 Channel Duty 23 Register; 0x0000051E */
volatile PWM1DTY45STR _PWM1DTY45;                          /* PWM1 Channel Duty 45 Register; 0x00000520 */
volatile PWM1DTY67STR _PWM1DTY67;                          /* PWM1 Channel Duty 67 Register; 0x00000522 */
volatile TIM0TCNTSTR _TIM0TCNT;                            /* Timer Count Register; 0x000005C4 */
volatile TIM0TC0STR _TIM0TC0;                              /* Timer Input Capture/Output Compare Register 0; 0x000005D0 */
volatile TIM0TC1STR _TIM0TC1;                              /* Timer Input Capture/Output Compare Register 1; 0x000005D2 */
volatile TIM0TC2STR _TIM0TC2;                              /* Timer Input Capture/Output Compare Register 2; 0x000005D4 */
volatile TIM0TC3STR _TIM0TC3;                              /* Timer Input Capture/Output Compare Register 3; 0x000005D6 */
volatile TIM0TC4STR _TIM0TC4;                              /* Timer Input Capture/Output Compare Register 4; 0x000005D8 */
volatile TIM0TC5STR _TIM0TC5;                              /* Timer Input Capture/Output Compare Register 5; 0x000005DA */
volatile TIM0TC6STR _TIM0TC6;                              /* Timer Input Capture/Output Compare Register 6; 0x000005DC */
volatile TIM0TC7STR _TIM0TC7;                              /* Timer Input Capture/Output Compare Register 7; 0x000005DE */
volatile TIM0PACNTSTR _TIM0PACNT;                          /* Pulse Accumulators Count Register; 0x000005E2 */
volatile ADC0CTLSTR _ADC0CTL;                              /* ADC0 Control Register; 0x00000600 */
volatile ADC0CONIESTR _ADC0CONIE;                          /* ADC0 Conversion Interrupt Enable Register; 0x0000060A */
volatile ADC0CONIFSTR _ADC0CONIF;                          /* ADC0 Conversion Interrupt Flag Register; 0x0000060C */
volatile ADC0IMDRISTR _ADC0IMDRI;                          /* ADC0 Intermediate Result Information Register; 0x0000060E */
volatile CPMUAPIRSTR _CPMUAPIR;                            /* Autonomous Periodical Interrupt Rate Register; 0x000006D4 */
volatile CPMUIRCTRIMSTR _CPMUIRCTRIM;                      /* CPMU IRC1M Trim Registers; 0x000006D8 */
volatile SCI0BDSTR _SCI0BD;                                /* SCI 0 Baud Rate Register; 0x00000700 */
volatile SCI1BDSTR _SCI1BD;                                /* SCI 1 Baud Rate Register; 0x00000710 */
volatile SPI0DRSTR _SPI0DR;                                /* SPI 0 Data Register; 0x00000784 */
volatile SPI1DRSTR _SPI1DR;                                /* SPI 1 Data Register; 0x00000794 */
volatile CAN0RXTSRSTR _CAN0RXTSR;                          /* MSCAN0 Receive Time Stamp Register; 0x0000082E */
volatile CAN0TXTSRSTR _CAN0TXTSR;                          /* MSCAN0 Transmit Time Stamp Register; 0x0000083E */
volatile TICKRATESTR _TICKRATE;                            /* SENT Transmitter Tick Rate Register; 0x000009A0 */
volatile PPULSESTR _PPULSE;                                /* SENT Transmitter Pause-Pulse Register; 0x000009A2 */
volatile CONFIGSTR _CONFIG;                                /* SENT Transmitter Configuration Register; 0x000009A4 */
/* BAKEY0 - macro for reading non volatile register        Backdoor Comparison Key 0; 0x00FFFE00 */
/* Tip for register initialization in the user code:  const byte BAKEY0_INIT @0x00FFFE00 = <BAKEY0_INITVAL>; */
/* BAKEY1 - macro for reading non volatile register        Backdoor Comparison Key 1; 0x00FFFE02 */
/* Tip for register initialization in the user code:  const byte BAKEY1_INIT @0x00FFFE02 = <BAKEY1_INITVAL>; */
/* BAKEY2 - macro for reading non volatile register        Backdoor Comparison Key 2; 0x00FFFE04 */
/* Tip for register initialization in the user code:  const byte BAKEY2_INIT @0x00FFFE04 = <BAKEY2_INITVAL>; */
/* BAKEY3 - macro for reading non volatile register        Backdoor Comparison Key 3; 0x00FFFE06 */
/* Tip for register initialization in the user code:  const byte BAKEY3_INIT @0x00FFFE06 = <BAKEY3_INITVAL>; */
/* PROTKEY - macro for reading non volatile register       Non Volatile Protection Override Comparison Key; 0x00FFFE08 */
/* Tip for register initialization in the user code:  const byte PROTKEY_INIT @0x00FFFE08 = <PROTKEY_INITVAL>; */


/* * * * *  32-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile PARTIDSTR _PARTID;                                /* Part ID Register; 0x00000000 */
volatile ADC0CMDSTR _ADC0CMD;                              /* ADC0 Command Register; 0x00000614 */
volatile TXBUFSTR _TXBUF;                                  /* SENT Transmit Buffer Register; 0x000009A8 */


/* * * * *  24-BIT ADDRESS REGISTERS  * * * * * * * * * * * * * * * * * * * * * * */
volatile void* volatile MMCPC;                             /* Captured S12ZCPU Program Counter Low; 0x00000087 */
volatile void* volatile DBGAA;                             /* Debug Comparator A Address Register Low; 0x00000117 */
volatile void* volatile DBGBA;                             /* Debug Comparator B Address Register Low; 0x00000127 */
volatile void* volatile DBGDA;                             /* Debug Comparator D Address Register Low; 0x00000147 */
volatile void* volatile ECCDPTR;                           /* ECC Debug Pointer Register Low; 0x000003C9 */
volatile void* volatile ADC0CBP;                           /* ADC0 Command Base Pointer Register 0; 0x000003C9 */
volatile void* volatile ADC0RBP;                           /* ADC0 Result Base Pointer Register 0; 0x000003C9 */



/*lint -restore */

/* EOF */
