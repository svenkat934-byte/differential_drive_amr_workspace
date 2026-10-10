import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/saivenkat/diff_amr_ws/install/diff_amr_py_examples'
