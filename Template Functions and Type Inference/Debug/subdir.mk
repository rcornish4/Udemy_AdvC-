################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Template\ Functions\ and\ Type\ Inference.cpp 

OBJS += \
./Template\ Functions\ and\ Type\ Inference.o 

CPP_DEPS += \
./Template\ Functions\ and\ Type\ Inference.d 


# Each subdirectory must supply rules for building sources it contributes
Template\ Functions\ and\ Type\ Inference.o: ../Template\ Functions\ and\ Type\ Inference.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Template Functions and Type Inference.d" -MT"Template\ Functions\ and\ Type\ Inference.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


