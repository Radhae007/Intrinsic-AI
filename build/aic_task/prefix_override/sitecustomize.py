import sys
if sys.prefix == '/home/radhae/ws_aic/src/aic/.pixi/envs/default':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/radhae/ws_aic/install/aic_task'
