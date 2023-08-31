echo[*] creating docker image interactive, remove after use, named c-inh

docker build . -t c-inh

echo[*] running docker image interactive, remove after use, named c-inh

docker run -it --rm  c-inh