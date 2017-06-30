################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Complex.cpp \
../Overloading\ Plus.cpp 

OBJS += \
./Complex.o \
./Overloading\ Plus.o 

CPP_DEPS += \
./Complex.d \
./Overloading\ Plus.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Overloading\ Plus.o: ../Overloading\ Plus.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Overloading Plus.d" -MT"Overloading\ Plus.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


