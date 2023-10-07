partition disk

format partitions

mount partitions to /mnt directories

pacstrap /mnt

update pacman -Syy

genfstab -U /mnt >> /mnt/etc/fstab

pacstrap -i /mnt base base-devel amd-ucode grub efibootmgr dosfstools mtools ntfs-3g os-prober linux-lts linux-lts-headers linux-firmware networkmanager dialog sudo vim alacritty firefox git dmenu xorg xorg-server xorg-xinit xorg-xinput xorg-xrandr libx11 libxinerama libxft webkit2gtk dhcpcd dhcpcd-ui man-db neofetch pipewire pipewire-pulse (openrc)

arch-chroot /mnt

systemctl enable dhcpcd NetworkManager

vim /etc/locale.gen && locale-gen

passwd

useradd -mG wheel joe

passwd joe

vim /etc/sudoers or EDITOR=vim visudo

mkdir /boot/EFI

mount /dev/sda1 /boot/EFI

echo LANG=en_US.UTF-8 > /etc/locale.conf && export LANG=en_US.UTF-8

echo JoesPC > /etc/hostname

nano /etc/hosts
127.0.0.1	localhost
::1			localhost
127.0.1.1	JoesPC.localdomain	localhost

ln -sf /usr/share/zoneinfo/America/Chicago /etc/localtime
uncomment "GRUB_DISABLE_OS_PROBER=FALSE" in /etc/default/grub
grub-install --target=x86_64-efi --bootloader-id=grub_uefi --recheck
(cp /usr/share/locale/en\@quot/LC_MESSAGES/grub.mo /boot/grub/locale/en.mo)
grub-mkconfig -o /boot/grub/grub.cfg
exit

install yay - pacman -S --needed git base-devel && git clone https://aur.archlinux.org/yay.git && cd yay && makepkg -si

install input remapper - yay -S input-remapper-git && sudo systemctl restart input-remapper && sudo systemctl enable input-remapper

install dwm - git clone https://git.suckless.org/dwm
cd into and "sudo make clean install" change red to 782200 and alacritty terminal

.xinitrc
xrandr -r 144 &
systemctl start input-remapper &
input-remapper-control --command autoload &
# xinput set-prop 8 304 0, 1 && xinput set-prop 8 301 -.15 &&
exec dwm

/usr/share/X11/xorg.conf.d/40-libinput.conf
# Match on all types of devices but joysticks
#
# If you want to configure your devices, do not copy this file.
# Instead, use a config snippet that contains something like this:
#
# Section "InputClass"
#   Identifier "something or other"
#   MatchDriver "libinput"
#
#   MatchIsTouchpad "on"
#   ... other Match directives ...
#   Option "someoption" "value"
# EndSection
#
# This applies the option any libinput device also matched by the other
# directives. See the xorg.conf(5) man page for more info on
# matching devices.

Section "InputClass"
        Identifier "libinput pointer catchall"
        MatchIsPointer "on"
        MatchDevicePath "/dev/input/event*"
        Driver "libinput"
	Option "AccelProfile" "flat"
       	Option "AccelSpeed" "-0.1"	
EndSection

Section "InputClass"
        Identifier "libinput keyboard catchall"
        MatchIsKeyboard "on"
        MatchDevicePath "/dev/input/event*"
        Driver "libinput"
EndSection

Section "InputClass"
        Identifier "libinput touchpad catchall"
        MatchIsTouchpad "on"
        MatchDevicePath "/dev/input/event*"
        Driver "libinput"
EndSection

Section "InputClass"
        Identifier "libinput touchscreen catchall"
        MatchIsTouchscreen "on"
        MatchDevicePath "/dev/input/event*"
        Driver "libinput"
EndSection

Section "InputClass"
        Identifier "libinput tablet catchall"
        MatchIsTablet "on"
        MatchDevicePath "/dev/input/event*"
        Driver "libinput"
EndSection



