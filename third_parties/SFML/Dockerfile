FROM ubuntu

RUN apt-get update && apt-get install -y \
	git \
	cmake \
	g++

WORKDIR /src
RUN git clone https://github.com/SFML/SFML.git

WORKDIR /bin
RUN cmake /src/SFML/ && make
