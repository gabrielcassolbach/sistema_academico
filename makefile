CC = g++
CFLAGS = -Wall
LDFLAGS =
OBJFILES = *.cpp
TARGET = sistema_academico

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(TARGET) *~
