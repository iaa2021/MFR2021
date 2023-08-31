FROM gcc:latest

WORKDIR /app

ADD ./lib /app/lib
ADD ./src /app/src
ADD ./CMakeLists.txt /app

RUN apt-get update && apt-get install -y cmake

WORKDIR /app/build

RUN cmake ..
RUN cmake --build .

WORKDIR /app/build/src

CMD [ "./p1324" ]