## Shell configuration
ZSH_THEME="robbyrussell"

### Path to your Oh My Zsh installation.
export ZSH="$HOME/.oh-my-zsh"

### Path configuration
PATH=$PATH:~/.local/bin

### Source Oh my Zsh
source $ZSH/oh-my-zsh.sh

### Theme
eval "$(starship init zsh)"
export STARSHIP_CONFIG="$HOME/.config/starship.toml"

### Plugins
plugins=(
    git
    zsh-autosuggestions
    zsh-syntax-highlighting
)

#### FZF
[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh
source <(fzf --zsh)

#### Zoxide
eval "$(zoxide init --cmd cd zsh)"
