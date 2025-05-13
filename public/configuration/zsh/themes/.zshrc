## Path configuration
PATH=$PATH:~/.local/bin

## Shell configuration
ZSH_THEME="robbyrussell"

### Path to Oh My Zsh installation
export ZSH="$HOME/.oh-my-zsh"

### Source Oh my Zsh
source $ZSH/oh-my-zsh.sh

### Plugins
plugins=(
    git
)

### Theme
eval "$(starship init zsh)"
export STARSHIP_CONFIG="$HOME/.config/starship.toml"
