CC = g++
SRC = src
include $(SRC)/Objlist
OBJS = main.o $(SRCOBJS)

game: $(OBJS)
	$(CC) $(OBJS) -o $@

clean:
	del src\globals.o src\gongdi.o src\hospital.o src\lake.o src\Li_tang.o src\people.o src\place.o src\store.o src\utils.o src\map.o src\bar.o src\classroom.o src\gym.o src\company.o main.o
