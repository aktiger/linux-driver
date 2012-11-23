
exist=`lsmod | grep hello | wc -l`

echo $exist


sudo make
echo "running dmesg -c"
sudo dmesg -c
echo -e "\n\n\n\n"
echo "++++++++++++++++++++++++++++++++++"

if [ "$exist"=1 ]
then
echo "running rmmod hello_world"
sudo rmmod hello_world
fi
echo "running insmod ./hello_world.ko"
sudo insmod ./hello_world.ko
echo "running dmesg"
sudo dmesg

