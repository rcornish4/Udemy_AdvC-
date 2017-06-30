################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Sorting\ Vectors.cpp 

OBJS += \
./Sorting\ Vectors.o 

CPP_DEPS += \
./Sorting\ Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
Sorting\ Vectors.o: ../Sorting\ Vectors.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Sorting Vectors.d" -MT"Sorting\ Vectors.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


