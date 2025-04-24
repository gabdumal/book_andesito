## Shell configuration

### Theme
$ENV:STARSHIP_CONFIG = "$HOME\.config\starship.toml"
function Invoke-Starship-TransientFunction {
  &starship module character
}
Invoke-Expression (&starship init powershell)
Enable-TransientPrompt
