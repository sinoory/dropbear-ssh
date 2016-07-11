#mount -o remount,rw /
#cd ssh/dropbear-0.52/configfile
#../bin/bin/dropbearkey   -t dss -f dropbear_dss_host_key
wkdir="/tmp/nfs206/wangc/ssh/dropbear-0.52/configfile/"
${wkdir}../bin/sbin/dropbear -d ${wkdir}dropbear_dss_host_key -r ${wkdir}dropbear_rsa_host_key -E
