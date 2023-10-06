partition disk

format partitions

mount partitions to /mnt directories

pacstrap /mnt

update pacman -Syy

genfstab -U /mnt >> /mnt/etc/fstab

pacstrap -i /mnt base base-devel amd-ucode grub efibootmgr dosfstools mtools os-prober linux linux-headers linux-hardened linux-hardened-headers linux-lts linux-lts-headers linux-firmware networkmanager dialog sudo vim nano 
firefox git dmenu noto-fonts xorg-server xorg-xinit man-db (openrc)

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
