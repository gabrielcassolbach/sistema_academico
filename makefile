CC = g++
CFLAGS = -Wall
LDFLAGS =
OBJFILES = *.cpp
TARGET = exercicio

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(TARGET) *~