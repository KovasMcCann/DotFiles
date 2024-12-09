sudo ip link set wlp3s0 down 
mac=$(sudo macchanger -r wlp3s0  | awk '{print $3}' | sed '$!d')
sudo ip link set wlp3s0 up
notify-send "New Mac Address:" "$mac"

