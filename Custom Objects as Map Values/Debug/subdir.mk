################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Custom\ Objects\ as\ Map\ Values.cpp 

OBJS += \
./Custom\ Objects\ as\ Map\ Values.o 

CPP_DEPS += \
./Custom\ Objects\ as\ Map\ Values.d 


# Each subdirectory must supply rules for building sources it contributes
Custom\ Objects\ as\ Map\ Values.o: ../Custom\ Objects\ as\ Map\ Values.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"Custom Objects as Map Values.d" -MT"Custom\ Objects\ as\ Map\ Values.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


