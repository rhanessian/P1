CC = gcc
CFLAGS = -g -Wall
OBJFILES = scanner.o main.o
TARGET = Scanner

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CLFAGS) -o $(TARGET) $(OBJFILES) 
	
clean:
	$(RM) $(OBJFILES) $(TARGET) 