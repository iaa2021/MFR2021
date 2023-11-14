#!/bin/sh

# C++ for linux, windows
sudo apt install build-essential gdb mingw-w64

# wxWidgets
cd WXWIDGETS

# wxWidgets for linux
mkdir buildgtk
cd buildgtk
../configure --with-gtk --disable-shared
make -j$(nproc --all)
sudo make install
sudo ldconfig
cd ..
# rm -r buildgtk

# wxWidgets for windows
mkdir buildmingw
cd buildmingw
../configure --prefix=/usr/x86_64-w64-mingw32/ --host=x86_64-w64-mingw32 --build=x86_64-linux --disable-shared --with-msw CFLAGS=-I/usr/x86_64-w64-mingw32/include/
make -j$(nproc --all)
sudo make install
sudo ldconfig
cd ..
# rm -r buildmingw

cd ..

# wxFormBuilder
sudo dpkg -i WXFORMBUILDER/wxformbuilder_3.10.1_ubuntu-20.04_amd64.deb

# Wine & Winetricks
sudo dpkg --add-architecture i386 
wget -nc https://dl.winehq.org/wine-builds/winehq.key
sudo mv winehq.key /usr/share/keyrings/winehq-archive.key
wget -nc https://dl.winehq.org/wine-builds/ubuntu/dists/jammy/winehq-jammy.sources
sudo mv winehq-jammy.sources /etc/apt/sources.list.d/
sudo apt update
sudo apt install --install-recommends winehq-devel -y
cd "${HOME}/Downloads"
wget  https://raw.githubusercontent.com/Winetricks/winetricks/master/src/winetricks
chmod +x winetricks
sudo mv winetricks /usr/bin/winetricks
