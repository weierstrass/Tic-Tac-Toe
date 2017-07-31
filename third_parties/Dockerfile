FROM ubuntu

RUN apt-get update && apt-get install -y \
	libx11-dev \
	libxrandr-dev \
	freeglut3-dev \
	libudev-dev \
	libjpeg-dev \
	libopenal-dev \
	libflac-dev \
	libfreetype6-dev \
	libvorbis-dev \
	git \
	cmake \
	g++

WORKDIR /src
RUN git clone https://github.com/SFML/SFML.git

WORKDIR /bin
RUN cmake /src/SFML/ && make