---
layout: post
title: 
date: 2018-07-13 10:20:51
tags: 

---

# LOGIC REGULATION
1. 告警信息相同，仅仅是数字不同，代表相同或者相似的告警
2. 如果告警信息相同，但是ERRORCODE不同，表示不同的告警

For example:
I want to 12 ~ I want to 12
I want to 13 ~ I want to 14
I want12 to 13 !~ I want to 13 !~ I want14 to 13
I want 12 to ERRORCODE 101 ~ I want 111 to ERRORCODE 101
I want 12 to ERRORCODE 101 !~ I want 222 to ERRORCODE 111

# CODING REGULATION
global variable: someVariable
local variable: some_variable
function: function someFunction
