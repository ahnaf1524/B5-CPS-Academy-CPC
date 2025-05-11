import os
import sys

# Extensions to remove
UNWANTED_EXTENSIONS = ['.exe', '.o', '.out', '.obj', '.class', '.pyc', '.tmp', '.txt']

def remove_unwanted_files(directory):
    removed_files = []

    if not os.path.isdir(directory):
        print(f"Error: '{directory}' is not a valid directory.")
        return

    for root, _, files in os.walk(directory):
        for file in files:
            filepath = os.path.join(root, file)
            _, ext = os.path.splitext(file)
            if ext.lower() in UNWANTED_EXTENSIONS:
                try:
                    os.remove(filepath)
                    removed_files.append(filepath)
                except Exception as e:
                    print(f"Failed to remove {filepath}: {e}")

    if removed_files:
        print("Removed files:")
        for f in removed_files:
            print(f"- {f}")
    else:
        print("No unwanted files found.")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python clean_build_files.py <folder_path>")
    else:
        target_folder = sys.argv[1]
        remove_unwanted_files(target_folder)
