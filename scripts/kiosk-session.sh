#!/bin/sh

exec $SNAP/bin/anbox-wrapper.sh session-manager \
	--single-window \
	--use-system-dbus
