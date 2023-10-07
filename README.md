partition disk

format partitions

mount partitions to /mnt directories

pacstrap /mnt

update pacman -Syy

genfstab -U /mnt >> /mnt/etc/fstab

pacstrap -i /mnt base base-devel amd-ucode grub efibootmgr dosfstools mtools ntfs-3g os-prober linux-lts linux-lts-headers linux-firmware networkmanager dialog sudo vim alacritty firefox git dmenu xorg xorg-server xorg-xinit xorg-xinput xorg-xrandr dhcpcd dhcpcd-ui man-db neofetch pulseaudio (openrc)

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

.xinitrc
xrandr -r 144 &
systemctl start input-remapper &
input-remapper-control --command autoload &
# xinput set-prop 8 304 0, 1 && xinput set-prop 8 301 -.15 &&
exec dwm


