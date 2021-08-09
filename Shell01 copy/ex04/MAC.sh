#!/bin/sh
ifconfig | grep "ether" | sed 2d | cut -b 8-24
