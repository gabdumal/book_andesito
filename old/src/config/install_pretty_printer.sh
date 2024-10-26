# Create a directory for the pretty printers
mkdir -p $HOME/.local/libcxx-pretty-printers
cd $HOME/.local/libcxx-pretty-printers

# Download the pretty printers
curl -O https://raw.githubusercontent.com/koutheir/libcxx-pretty-printers/master/src/libcxx/v1/printers.py

# Ensure the file was downloaded
if [ ! -f printers.py ]; then
    echo "Error: printers.py was not downloaded."
    exit 1
fi

# Create an empty __init__.py file to make it a package
touch $HOME/.local/libcxx-pretty-printers/__init__.py


# Create a Python script to register the pretty printers
cat <<EOL > $HOME/.local/libcxx-pretty-printers/register_pretty_printers.py
import sys, os
username = os.getenv('USERNAME') or os.getenv('USER')
libcxx_pretty_printers_path = f'C:/msys64/home/{username}/.local/libcxx-pretty-printers'
print("libcxx_pretty_printers_path:", libcxx_pretty_printers_path)
if libcxx_pretty_printers_path not in sys.path:
    sys.path.insert(0, libcxx_pretty_printers_path)
try:
    from printers import register_libcxx_printers
    register_libcxx_printers(None)
    print("Pretty printers registered successfully.")
except Exception as e:
    print("Error registering pretty printers:", e)
EOL

# Create a GDB script to run the Python script
cat <<EOL > $HOME/.gdbinit
set print pretty on
set print object on

python
import sys, os
username = os.getenv('USERNAME') or os.getenv('USER')
libcxx_pretty_printers_script_path = f'C:/msys64/home/{username}/.local/libcxx-pretty-printers/register_pretty_printers.py'
if os.path.exists(libcxx_pretty_printers_script_path):
    gdb.execute('source ' + libcxx_pretty_printers_script_path)
else:
    print("Error: libcxx pretty printers script not found.")
end
EOL
