http://www.2cto.com/os/201303/193960.html
 2062  ls
 2063  ./configure --prefix =/usr/local/test/zlib
 2064  vim Makefile
 2065  make
 2066  find . |grep libz
 2067  cd ../dropbear-0.52/
 2068  ./configure –prefix=/usr/local/dropbear –with-zlib=/usr/local/zlib/ CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc –host=arm
 2069  ./configure –with-zlib=/usr/local/zlib/ CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc –host=arm
 2070  ./configure -with-zlib=/usr/local/zlib/ CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc –host=arm
 2071  ./configure -with-zlib=/usr/local/zlib/ CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc-host=arm
 2072  vim Makefile.in 
 2073  ./configure -with-zlib=/usr/local/zlib/ CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc -host=arm
 2074  ls ../zlib-1.2.3/zlib.a
 2075  find ../zlib-1.2.3/ |grep libz
 2076  ./configure -with-zlib=../zlib-1.2.3/  CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc -host=arm
 2077  make
 2078  find . |grep dropbear
 2079  ./configure -with-zlib=../zlib-1.2.3/  CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc -host=arm -prefix=./bin
 2080  pwd
 2081  ./configure -with-zlib=../zlib-1.2.3/  CC=/opt/sdk/mstar/msd6486/toolchain/arm/bin/arm-none-linux-gnueabi-gcc -host=arm -prefix=/home/SERAPHIC/wangc/work/tool/ssh/dropbear-0.52/bin/
 2082  make -j8
 2083  make
 2084  make install
 2085  find . |grep dropbearconvert
 2086  ls bin/bin/
 2087  ls bin/
 2088  ls bin/sbin/
 2089  history |tail 30
 2090  history |tail -n 30
 2091  history |tail -n 30 > ../makelog.cc
