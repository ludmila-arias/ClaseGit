################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Ejercicio\ 2.c 

C_DEPS += \
./src/Ejercicio\ 2.d 

OBJS += \
./src/Ejercicio\ 2.o 


# Each subdirectory must supply rules for building sources it contributes
src/Ejercicio\ 2.o: ../src/Ejercicio\ 2.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ejercicio 2.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Ejercicio\ 2.d ./src/Ejercicio\ 2.o

.PHONY: clean-src

