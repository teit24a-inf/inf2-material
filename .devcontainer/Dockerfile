FROM mcr.microsoft.com/devcontainers/cpp:1-debian-12


# Install conan via pipx
RUN apt-get update && apt-get install -y pipx
RUN pipx install conan && pipx ensurepath
