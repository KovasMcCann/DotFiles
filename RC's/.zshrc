# Lines configured by zsh-newuser-install
HISTFILE=$HOME/.config/zsh/.histfile
HISTSIZE=1000
SAVEHIST=1000
# End of lines configured by zsh-newuser-install
# The following lines were added by compinstall
#zstyle :compinstall filename '/home/wire/.zshrc'

autoload -Uz compinit
compinit -D
# End of lines added by compinstall

autoload -U compinit
zstyle ':completion:*' menu select
zmodload zsh/complist
compinit -D
_comp_options+=(globdots)

bindkey -M menuselect 'h' vi-backward-char
bindkey -M menuselect 'k' vi-up-line-or-history
bindkey -M menuselect 'l' vi-forward-char
bindkey -M menuselect 'j' vi-down-line-or-history
bindkey -v '^?' backward-delete-char

autoload -U colors && colors

PS1="%B%{$fg[red]%}[%{$fg[yellow]%}%n%{$fg[green]%}@%{$fg[blue]%}%M %{$fg[magenta]%}%~%{$fg[red]%}]%{$reset_color%}$%b "
# Idea: 
# PROMPT_COMMAND='PS1_CMD1=$(git branch --show-current 2>/dev/null); PS1_CMD2=$(ip route get 1.1.1.1 | awk -F"src " '"'"'NR == 1{ split($2, a," ");print a[1]}'"'"')'
PS1="%B%{$fg[red]%}[%{$fg[yellow]%}\u%{$fg[green]%}@%{$fg[blue]%}${PS1_CMD2} %{$fg[magenta]%}%~ %{$fg[cyan]%}${PS1_CMD1}%{$fg[red]%}]%{$reset_color%}$%b "


alias sound='pulsemixer'

alias music='mpv --no-resume-playback "https://www.lainchan.org/radio.html"'

alias wget='wget --hsts-file="$XDG_CACHE_HOME/wget-hsts"'

alias irssi='screen irssi --config="$XDG_CONFIG_HOME"/irssi/config -n dua1bit && rm -rf $HOME/.irssi'

alias pacman='sudo pacman'

alias esc='setxkbmap -option caps:escape &'

alias wall='cd ~/Media/Wallpapers'

alias py='cd ~/Media/Coder/Python'

alias pym='cd ~/Media/Coder/Python/music'

alias del='rm -Rf'

alias ls='ls --color=auto'

alias grep="grep --color=auto"

alias yt="sh ~/Scripts/yt.sh"

alias rd="sh ~/Scripts/redyt"

alias space="du -S | sort -n -r |more"

export VIMINIT='let $MYVIMRC="$XDG_CONFIG_HOME/vim/.vimrc" | source $MYVIMRC'

source $HOME/.config/zsh/.zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
