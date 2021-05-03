#!/usr/bin/python3
import sys
load_from_json_file = __import__('8-load_from_json_file').load_from_json_file
save_to_json_file = __import__('7-save_to_json_file').save_to_json_file

filename = "add_item.json"
argv = sys.argv[1:]
try:
    new_list = load_from_json_file(filename)
    save_to_json_file(new_list + argv, filename)
except Exception:
    save_to_json_file(argv, filename)
