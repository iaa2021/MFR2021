FROM gcc:latest 

WORKDIR /app

COPY . .
COPY src /app/src
COPY lib /app/lib
COPY run.sh /app

CMD [ "./run.sh" ]