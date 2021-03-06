PATH="$NATIVE_TOOLS/bin:$NATIVE_TOOLS/sbin:$NATIVE_TOOLS/usr/pkg/bin:$NATIVE_TOOLS/usr/pkg/sbin:$PATH"
LD_LIBRARY_PATH="$NATIVE_TOOLS/lib:$LD_LIBRARY_PATH"
MAKEFLAGS="-I$NATIVE_TOOLS/include"
CS_LIBPATH="$NATIVE_TOOLS/usr/pkg/lib:$CS_LIBPATH"
MANPATH="$NATIVE_TOOLS/man:$NATIVE_TOOLS/share/man:$NATIVE_TOOLS/usr/pkg/share/man:$MANPATH"

export PATH LD_LIBRARY_PATH MAKEFLAGS CS_LIBPATH MANPATH

QNX_HOST="$NATIVE_TOOLS"
#QNX_CONFIGURATION="$NATIVE_TOOLS/etc/qnxconf"
MAKEFLAGS="-I$QNX_TARGET/usr/include"
LD_LIBRARY_PATH="$QNX_TARGET/armle-v7/usr/lib:$LD_LIBRARY_PATH"
#PATH="$QNX_HOST/usr/bin:$PATH"

export QNX_TARGET QNX_HOST QNX_CONFIGURATION MAKEFLAGS LD_LIBRARY_PATH PATH

GROFF_FONT_PATH="$NATIVE_TOOLS/share/groff/1.19.2/font:$NATIVE_TOOLS/share/groff/site-font"
GROFF_TMAC_PATH="$NATIVE_TOOLS/share/groff/1.19.2/tmac:$NATIVE_TOOLS/share/groff/site-tmac"
export GROFF_FONT_PATH GROFF_TMAC_PATH

MAGIC="$NATIVE_TOOLS/share/misc/magic.mgc"
export MAGIC

alias man='man -C "$NATIVE_TOOLS/lib/man.conf"'
alias ls='ls --color=auto'
