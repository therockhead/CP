import sublime
import sublime_plugin
from datetime import datetime

class InsertHeaderCommand(sublime_plugin.TextCommand):
    def run(self, edit):
        now = datetime.now().strftime("%d.%m.%Y %H:%M:%S")
        header = f"""/**\n *    author:  TheRockHead\n *    created: {now}\n**/\n"""
        self.view.insert(edit, self.view.sel()[0].begin(), header)

# Then, Add Keybinding 
'''
[
	{ "keys": ["ctrl+alt+h"], "command": "insert_header" }
]
'''