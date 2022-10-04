CC = g++
CFLAGS = -Wall
LDFLAGS =
OBJFILES = *.cpp
TARGET = z_sistema_academico

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(TARGET) *~
