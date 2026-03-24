# ST-wireless-services-workshop
Throughout the https://content.st.com/stm32-wireless-design-service-workshop.html session, you explored ST’s comprehensive hardware, RF, and software services, using the STM32WBA55, its Nucleo development board, and the STM32Cube ecosystem. 

You learned, through a virtual 2.4 GHz customer project, how ST design services can support your initial bring‑up activities.

You will find in this repository all the material used during the session and the associated collateral to replicate the activities on your own.

# The material used during session
- the PDF slides used during workshop session are available on main repository
- the FW based on STM32CubeWBA 1.9.0 used to generate Health Thermomterrunning over NUCLEO-WBA55CG [FW ressources](https://github.com/lkoudelka/ST-wireless-services-for-ST-wireless-designs-demo-workshop/tree/master/WBA55_TH_sensor_FW)
- the schematics and layout files associated to Health Thermometer end customer PCB [HW ressources](https://github.com/lkoudelka/ST-wireless-services-for-ST-wireless-designs-demo-workshop/tree/master/WBA55_TH_sensor_HW)

# how to replicate
To replicate the proof of concept (Health Thermometer  demonstrated in the first part of the workshop) you will need  
- [NUCLEO-WBA55CG](https://www.st.com/en/evaluation-tools/nucleo-wba55cg.html)
- [X-NUCLEO-IKS4A1](https://www.st.com/en/evaluation-tools/x-nucleo-iks4a1.html)
- [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)
- The FW used to generate this application,[FW](https://github.com/lkoudelka/ST-wireless-services-for-ST-wireless-designs-demo-workshop/tree/master/WBA55_TH_sensor_FW)
- [STBLEToolbox](https://www.st.com/en/embedded-software/stbletoolbox.html) App installed on your mobile
  
This application is based on BLE_HealthThermometer application from STM32CubeWBA 1.9.0. For more details you can refer to STM32CubeWBA 1.9.0 BLE_HealthThermometer readme.txt
