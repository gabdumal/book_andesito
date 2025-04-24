## Shell configuration

### Theme
$ENV:STARSHIP_CONFIG = "$HOME\.config\starship.toml"
function Invoke-Starship-TransientFunction {
  &starship module character
}
Invoke-Expression (&starship init powershell)
Enable-TransientPrompt

### Plugins

#### Zoxide
Invoke-Expression (& { (zoxide init --cmd cd powershell | Out-String) })
