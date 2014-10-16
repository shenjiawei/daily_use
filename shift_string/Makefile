TARGET1=runthis_alg1
TARGET2=runthis_alg2
SOURCE1=strshift.c
SOURCE2=strshift2.c

all: $(TARGET1) $(TARGET2)

$(TARGET1): $(SOURCE1)
	$(CC) -g -Wall -o $@ $<

$(TARGET2): $(SOURCE2)
	$(CC) -g -Wall -o $@ $<

clean:
	rm -rf $(TARGET1) $(TARGET2)
