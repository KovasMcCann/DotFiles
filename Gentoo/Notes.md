swap size: 48gb

encrypted with luks

LUKS NAME "gentoo"

Stage File:
openrc 

FEATURES="sandbox userfetch preserve-libs"

openrc
secure boot

swap size: 48gb

encrypted with luks

LUKS NAME "gentoo"

Stage File:
openrc 

FEATURES="sandbox userfetch preserve-libs"

openrc
secure boot

USE File:
 -truetype -introspection -glib

EMERGE_DEFAULT_OPTS="--jobs=4"

hardened kernel
installkernel https://wiki.gentoo.org/wiki/Installkernel

apparmor and firejail

openntpd

doas or sudo 
# /etc/sudoers

Defaults env_reset
Defaults secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
Defaults umask=0022
Defaults umask_override

root    ALL=(ALL:ALL) ALL

Cmnd_Alias PACMAN = /usr/bin/pacman -Syu
Cmnd_Alias REBOOT = /sbin/reboot ""
Cmnd_Alias SHUTDOWN = /sbin/poweroff ""

bh ALL=(root) NOPASSWD: PACMAN
bh ALL=(root) NOPASSWD: REBOOT
bh ALL=(root) NOPASSWD: SHUTDOWN 

# /home/user/.config/pulse/daemon.conf

avoid-resampling = true
flat-volumes = no

################
Hybernate support

Ext4 setup
--mkfs.ext4 -E lazy_itable_init=1,lazy_journal_init=1,stride=128,stripe-width=128 /dev/sdXn--

| Option           | Description                           | Speed Impact | Risk                                  |
| ---------------- | ------------------------------------- | ------------ | ------------------------------------- |
| `noatime`        | Don’t update file access times        | Medium       | None                                  |
| `nodiratime`     | Same for directories                  | Small        | None                                  |
| `data=writeback` | Write data before journaling metadata | High         | 🛑 Data loss possible on crash        |
| `barrier=0`      | Disables flush barriers               | Medium       | 🛑 Can cause corruption on power loss |
| `commit=60`      | Delay journal commit to every 60s     | Medium       | More data loss on crash               |

tune2fs -o journal_data_writeback /dev/sdXn
tune2fs -O dir_index /dev/sdXn

systemctl enable fstrim.timer

Enable Multiqueue

emerge --ask app-admin/preload
#################

EMERGE_DEFAULT_OPTS="--jobs=4"

USE File:
 -truetype -introspection -glib

EMERGE_DEFAULT_OPTS="--jobs=4"

hardened kernel
installkernel https://wiki.gentoo.org/wiki/Installkernel

apparmor and firejail

openntpd

doas or sudo 
# /etc/sudoers

Defaults env_reset
Defaults secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
Defaults umask=0022
Defaults umask_override

root    ALL=(ALL:ALL) ALL

Cmnd_Alias PACMAN = /usr/bin/pacman -Syu
Cmnd_Alias REBOOT = /sbin/reboot ""
Cmnd_Alias SHUTDOWN = /sbin/poweroff ""

bh ALL=(root) NOPASSWD: PACMAN
bh ALL=(root) NOPASSWD: REBOOT
bh ALL=(root) NOPASSWD: SHUTDOWN 

# /home/user/.config/pulse/daemon.conf

avoid-resampling = true
flat-volumes = no

################
Hybernate support

Ext4 setup
--mkfs.ext4 -E lazy_itable_init=1,lazy_journal_init=1,stride=128,stripe-width=128 /dev/sdXn--

| Option           | Description                           | Speed Impact | Risk                                  |
| ---------------- | ------------------------------------- | ------------ | ------------------------------------- |
| `noatime`        | Don’t update file access times        | Medium       | None                                  |
| `nodiratime`     | Same for directories                  | Small        | None                                  |
| `data=writeback` | Write data before journaling metadata | High         | 🛑 Data loss possible on crash        |
| `barrier=0`      | Disables flush barriers               | Medium       | 🛑 Can cause corruption on power loss |
| `commit=60`      | Delay journal commit to every 60s     | Medium       | More data loss on crash               |

tune2fs -o journal_data_writeback /dev/sdXn
tune2fs -O dir_index /dev/sdXn

systemctl enable fstrim.timer

Enable Multiqueue

emerge --ask app-admin/preload
#################


