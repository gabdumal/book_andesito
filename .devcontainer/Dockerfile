FROM fedora:latest

# Install system dependencies and generate locale
RUN dnf upgrade
RUN dnf install -y \
  git \
  curl \
  ca-certificates \
  libatomic \
  openssl-devel \
  gcc

# Install pnpm
ENV PNPM_HOME="/root/.local/share/pnpm"
ENV PATH="$PNPM_HOME:$PATH"
ENV PNPM_STORE_DIR="/root/.local/share/pnpm/store"
RUN curl -fsSL https://get.pnpm.io/install.sh | sh -
RUN pnpm config set store-dir $PNPM_STORE_DIR
RUN pnpm env use --global latest

# Install Rust via rustup
RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y --default-toolchain stable
ENV CARGO_HOME="/root/.cargo"
ENV CARGO_TARGET="/workspace/target"
ENV PATH="$CARGO_HOME/bin:$PATH"

# Install Cargo dev tools
RUN cargo install cargo-watch

# Create dummy xdg-open to prevent ESLint config inspector from crashing
RUN printf '#!/bin/sh\nexit 0\n' > /usr/local/bin/xdg-open && chmod +x /usr/local/bin/xdg-open
