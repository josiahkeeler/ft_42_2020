#!/bin/bash
ifconfig -a ether | grep ether | cut -d ' ' -f 2
