FROM gcc:latest

WORKDIR /app

COPY src /app/src
COPY lib /app/lib

RUN g++ -o level src/level.cpp -Ilib 

CMD [ "./src/level" ]