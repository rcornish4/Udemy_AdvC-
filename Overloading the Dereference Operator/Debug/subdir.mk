################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Complex.cpp \
../Overloading\ the\ Dereference\ Operator.cpp 

OBJS += \
./Complex.o \
./Overloading\ the\ Dereference\ Operator.o 

CPP_DEPS += \
./Complex.d \
./Overloading\ the\ Dereference\ Operator.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Overloading\ the\ Dereference\ Operator.o: ../Overloading\ the\ Dereference\ Operator.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Overloading the Dereference Operator.d" -MT"Overloading\ the\ Dereference\ Operator.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


