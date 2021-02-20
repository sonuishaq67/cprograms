
a.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    rsp,0x8
    1008:	48 8b 05 d9 2f 00 00 	mov    rax,QWORD PTR [rip+0x2fd9]        # 3fe8 <__gmon_start__>
    100f:	48 85 c0             	test   rax,rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   rax
    1016:	48 83 c4 08          	add    rsp,0x8
    101a:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 e2 2f 00 00    	push   QWORD PTR [rip+0x2fe2]        # 4008 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 e4 2f 00 00    	jmp    QWORD PTR [rip+0x2fe4]        # 4010 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000001030 <__stack_chk_fail@plt>:
    1030:	ff 25 e2 2f 00 00    	jmp    QWORD PTR [rip+0x2fe2]        # 4018 <__stack_chk_fail@GLIBC_2.4>
    1036:	68 00 00 00 00       	push   0x0
    103b:	e9 e0 ff ff ff       	jmp    1020 <.plt>

0000000000001040 <printf@plt>:
    1040:	ff 25 da 2f 00 00    	jmp    QWORD PTR [rip+0x2fda]        # 4020 <printf@GLIBC_2.2.5>
    1046:	68 01 00 00 00       	push   0x1
    104b:	e9 d0 ff ff ff       	jmp    1020 <.plt>

0000000000001050 <__isoc99_scanf@plt>:
    1050:	ff 25 d2 2f 00 00    	jmp    QWORD PTR [rip+0x2fd2]        # 4028 <__isoc99_scanf@GLIBC_2.7>
    1056:	68 02 00 00 00       	push   0x2
    105b:	e9 c0 ff ff ff       	jmp    1020 <.plt>

0000000000001060 <__ctype_b_loc@plt>:
    1060:	ff 25 ca 2f 00 00    	jmp    QWORD PTR [rip+0x2fca]        # 4030 <__ctype_b_loc@GLIBC_2.3>
    1066:	68 03 00 00 00       	push   0x3
    106b:	e9 b0 ff ff ff       	jmp    1020 <.plt>

Disassembly of section .text:

0000000000001070 <_start>:
    1070:	f3 0f 1e fa          	endbr64 
    1074:	31 ed                	xor    ebp,ebp
    1076:	49 89 d1             	mov    r9,rdx
    1079:	5e                   	pop    rsi
    107a:	48 89 e2             	mov    rdx,rsp
    107d:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
    1081:	50                   	push   rax
    1082:	54                   	push   rsp
    1083:	4c 8d 05 c6 03 00 00 	lea    r8,[rip+0x3c6]        # 1450 <__libc_csu_fini>
    108a:	48 8d 0d 4f 03 00 00 	lea    rcx,[rip+0x34f]        # 13e0 <__libc_csu_init>
    1091:	48 8d 3d a9 02 00 00 	lea    rdi,[rip+0x2a9]        # 1341 <main>
    1098:	ff 15 42 2f 00 00    	call   QWORD PTR [rip+0x2f42]        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    109e:	f4                   	hlt    
    109f:	90                   	nop

00000000000010a0 <deregister_tm_clones>:
    10a0:	48 8d 3d a9 2f 00 00 	lea    rdi,[rip+0x2fa9]        # 4050 <__TMC_END__>
    10a7:	48 8d 05 a2 2f 00 00 	lea    rax,[rip+0x2fa2]        # 4050 <__TMC_END__>
    10ae:	48 39 f8             	cmp    rax,rdi
    10b1:	74 15                	je     10c8 <deregister_tm_clones+0x28>
    10b3:	48 8b 05 1e 2f 00 00 	mov    rax,QWORD PTR [rip+0x2f1e]        # 3fd8 <_ITM_deregisterTMCloneTable>
    10ba:	48 85 c0             	test   rax,rax
    10bd:	74 09                	je     10c8 <deregister_tm_clones+0x28>
    10bf:	ff e0                	jmp    rax
    10c1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    10c8:	c3                   	ret    
    10c9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000010d0 <register_tm_clones>:
    10d0:	48 8d 3d 79 2f 00 00 	lea    rdi,[rip+0x2f79]        # 4050 <__TMC_END__>
    10d7:	48 8d 35 72 2f 00 00 	lea    rsi,[rip+0x2f72]        # 4050 <__TMC_END__>
    10de:	48 29 fe             	sub    rsi,rdi
    10e1:	48 89 f0             	mov    rax,rsi
    10e4:	48 c1 ee 3f          	shr    rsi,0x3f
    10e8:	48 c1 f8 03          	sar    rax,0x3
    10ec:	48 01 c6             	add    rsi,rax
    10ef:	48 d1 fe             	sar    rsi,1
    10f2:	74 14                	je     1108 <register_tm_clones+0x38>
    10f4:	48 8b 05 f5 2e 00 00 	mov    rax,QWORD PTR [rip+0x2ef5]        # 3ff0 <_ITM_registerTMCloneTable>
    10fb:	48 85 c0             	test   rax,rax
    10fe:	74 08                	je     1108 <register_tm_clones+0x38>
    1100:	ff e0                	jmp    rax
    1102:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    1108:	c3                   	ret    
    1109:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001110 <__do_global_dtors_aux>:
    1110:	f3 0f 1e fa          	endbr64 
    1114:	80 3d 45 2f 00 00 00 	cmp    BYTE PTR [rip+0x2f45],0x0        # 4060 <completed.0>
    111b:	75 33                	jne    1150 <__do_global_dtors_aux+0x40>
    111d:	55                   	push   rbp
    111e:	48 83 3d d2 2e 00 00 	cmp    QWORD PTR [rip+0x2ed2],0x0        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1125:	00 
    1126:	48 89 e5             	mov    rbp,rsp
    1129:	74 0d                	je     1138 <__do_global_dtors_aux+0x28>
    112b:	48 8b 3d 0e 2f 00 00 	mov    rdi,QWORD PTR [rip+0x2f0e]        # 4040 <__dso_handle>
    1132:	ff 15 c0 2e 00 00    	call   QWORD PTR [rip+0x2ec0]        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1138:	e8 63 ff ff ff       	call   10a0 <deregister_tm_clones>
    113d:	c6 05 1c 2f 00 00 01 	mov    BYTE PTR [rip+0x2f1c],0x1        # 4060 <completed.0>
    1144:	5d                   	pop    rbp
    1145:	c3                   	ret    
    1146:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
    114d:	00 00 00 
    1150:	c3                   	ret    
    1151:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
    1158:	00 00 00 00 
    115c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000001160 <frame_dummy>:
    1160:	f3 0f 1e fa          	endbr64 
    1164:	e9 67 ff ff ff       	jmp    10d0 <register_tm_clones>

0000000000001169 <push>:
    1169:	55                   	push   rbp
    116a:	48 89 e5             	mov    rbp,rsp
    116d:	48 83 ec 10          	sub    rsp,0x10
    1171:	89 7d fc             	mov    DWORD PTR [rbp-0x4],edi
    1174:	8b 05 ce 2e 00 00    	mov    eax,DWORD PTR [rip+0x2ece]        # 4048 <top>
    117a:	83 f8 30             	cmp    eax,0x30
    117d:	7e 13                	jle    1192 <push+0x29>
    117f:	48 8d 3d 82 0e 00 00 	lea    rdi,[rip+0xe82]        # 2008 <_IO_stdin_used+0x8>
    1186:	b8 00 00 00 00       	mov    eax,0x0
    118b:	e8 b0 fe ff ff       	call   1040 <printf@plt>
    1190:	eb 2c                	jmp    11be <push+0x55>
    1192:	8b 05 b0 2e 00 00    	mov    eax,DWORD PTR [rip+0x2eb0]        # 4048 <top>
    1198:	83 c0 01             	add    eax,0x1
    119b:	89 05 a7 2e 00 00    	mov    DWORD PTR [rip+0x2ea7],eax        # 4048 <top>
    11a1:	8b 05 a1 2e 00 00    	mov    eax,DWORD PTR [rip+0x2ea1]        # 4048 <top>
    11a7:	48 98                	cdqe   
    11a9:	48 8d 0c 85 00 00 00 	lea    rcx,[rax*4+0x0]
    11b0:	00 
    11b1:	48 8d 15 c8 2e 00 00 	lea    rdx,[rip+0x2ec8]        # 4080 <stack>
    11b8:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    11bb:	89 04 11             	mov    DWORD PTR [rcx+rdx*1],eax
    11be:	c9                   	leave  
    11bf:	c3                   	ret    

00000000000011c0 <pop>:
    11c0:	55                   	push   rbp
    11c1:	48 89 e5             	mov    rbp,rsp
    11c4:	48 83 ec 10          	sub    rsp,0x10
    11c8:	8b 05 7a 2e 00 00    	mov    eax,DWORD PTR [rip+0x2e7a]        # 4048 <top>
    11ce:	85 c0                	test   eax,eax
    11d0:	79 13                	jns    11e5 <pop+0x25>
    11d2:	48 8d 3d 3f 0e 00 00 	lea    rdi,[rip+0xe3f]        # 2018 <_IO_stdin_used+0x18>
    11d9:	b8 00 00 00 00       	mov    eax,0x0
    11de:	e8 5d fe ff ff       	call   1040 <printf@plt>
    11e3:	eb 2f                	jmp    1214 <pop+0x54>
    11e5:	8b 05 5d 2e 00 00    	mov    eax,DWORD PTR [rip+0x2e5d]        # 4048 <top>
    11eb:	48 98                	cdqe   
    11ed:	48 8d 14 85 00 00 00 	lea    rdx,[rax*4+0x0]
    11f4:	00 
    11f5:	48 8d 05 84 2e 00 00 	lea    rax,[rip+0x2e84]        # 4080 <stack>
    11fc:	8b 04 02             	mov    eax,DWORD PTR [rdx+rax*1]
    11ff:	89 45 fc             	mov    DWORD PTR [rbp-0x4],eax
    1202:	8b 05 40 2e 00 00    	mov    eax,DWORD PTR [rip+0x2e40]        # 4048 <top>
    1208:	83 e8 01             	sub    eax,0x1
    120b:	89 05 37 2e 00 00    	mov    DWORD PTR [rip+0x2e37],eax        # 4048 <top>
    1211:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    1214:	c9                   	leave  
    1215:	c3                   	ret    

0000000000001216 <PostfixEval>:
    1216:	55                   	push   rbp
    1217:	48 89 e5             	mov    rbp,rsp
    121a:	48 83 ec 30          	sub    rsp,0x30
    121e:	48 89 7d d8          	mov    QWORD PTR [rbp-0x28],rdi
    1222:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [rbp-0x10],0x0
    1229:	e9 db 00 00 00       	jmp    1309 <PostfixEval+0xf3>
    122e:	8b 45 f0             	mov    eax,DWORD PTR [rbp-0x10]
    1231:	48 63 d0             	movsxd rdx,eax
    1234:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
    1238:	48 01 d0             	add    rax,rdx
    123b:	0f b6 00             	movzx  eax,BYTE PTR [rax]
    123e:	88 45 ef             	mov    BYTE PTR [rbp-0x11],al
    1241:	e8 1a fe ff ff       	call   1060 <__ctype_b_loc@plt>
    1246:	48 8b 10             	mov    rdx,QWORD PTR [rax]
    1249:	48 0f be 45 ef       	movsx  rax,BYTE PTR [rbp-0x11]
    124e:	48 01 c0             	add    rax,rax
    1251:	48 01 d0             	add    rax,rdx
    1254:	0f b7 00             	movzx  eax,WORD PTR [rax]
    1257:	0f b7 c0             	movzx  eax,ax
    125a:	25 00 08 00 00       	and    eax,0x800
    125f:	85 c0                	test   eax,eax
    1261:	74 13                	je     1276 <PostfixEval+0x60>
    1263:	0f be 45 ef          	movsx  eax,BYTE PTR [rbp-0x11]
    1267:	83 e8 30             	sub    eax,0x30
    126a:	89 c7                	mov    edi,eax
    126c:	e8 f8 fe ff ff       	call   1169 <push>
    1271:	e9 8f 00 00 00       	jmp    1305 <PostfixEval+0xef>
    1276:	80 7d ef 2b          	cmp    BYTE PTR [rbp-0x11],0x2b
    127a:	74 12                	je     128e <PostfixEval+0x78>
    127c:	80 7d ef 2d          	cmp    BYTE PTR [rbp-0x11],0x2d
    1280:	74 0c                	je     128e <PostfixEval+0x78>
    1282:	80 7d ef 2a          	cmp    BYTE PTR [rbp-0x11],0x2a
    1286:	74 06                	je     128e <PostfixEval+0x78>
    1288:	80 7d ef 2f          	cmp    BYTE PTR [rbp-0x11],0x2f
    128c:	75 77                	jne    1305 <PostfixEval+0xef>
    128e:	b8 00 00 00 00       	mov    eax,0x0
    1293:	e8 28 ff ff ff       	call   11c0 <pop>
    1298:	89 45 f8             	mov    DWORD PTR [rbp-0x8],eax
    129b:	b8 00 00 00 00       	mov    eax,0x0
    12a0:	e8 1b ff ff ff       	call   11c0 <pop>
    12a5:	89 45 fc             	mov    DWORD PTR [rbp-0x4],eax
    12a8:	0f be 45 ef          	movsx  eax,BYTE PTR [rbp-0x11]
    12ac:	83 f8 2f             	cmp    eax,0x2f
    12af:	74 27                	je     12d8 <PostfixEval+0xc2>
    12b1:	83 f8 2f             	cmp    eax,0x2f
    12b4:	7f 45                	jg     12fb <PostfixEval+0xe5>
    12b6:	83 f8 2d             	cmp    eax,0x2d
    12b9:	74 36                	je     12f1 <PostfixEval+0xdb>
    12bb:	83 f8 2d             	cmp    eax,0x2d
    12be:	7f 3b                	jg     12fb <PostfixEval+0xe5>
    12c0:	83 f8 2a             	cmp    eax,0x2a
    12c3:	74 07                	je     12cc <PostfixEval+0xb6>
    12c5:	83 f8 2b             	cmp    eax,0x2b
    12c8:	74 1a                	je     12e4 <PostfixEval+0xce>
    12ca:	eb 2f                	jmp    12fb <PostfixEval+0xe5>
    12cc:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    12cf:	0f af 45 f8          	imul   eax,DWORD PTR [rbp-0x8]
    12d3:	89 45 f4             	mov    DWORD PTR [rbp-0xc],eax
    12d6:	eb 23                	jmp    12fb <PostfixEval+0xe5>
    12d8:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    12db:	99                   	cdq    
    12dc:	f7 7d f8             	idiv   DWORD PTR [rbp-0x8]
    12df:	89 45 f4             	mov    DWORD PTR [rbp-0xc],eax
    12e2:	eb 17                	jmp    12fb <PostfixEval+0xe5>
    12e4:	8b 55 fc             	mov    edx,DWORD PTR [rbp-0x4]
    12e7:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
    12ea:	01 d0                	add    eax,edx
    12ec:	89 45 f4             	mov    DWORD PTR [rbp-0xc],eax
    12ef:	eb 0a                	jmp    12fb <PostfixEval+0xe5>
    12f1:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    12f4:	2b 45 f8             	sub    eax,DWORD PTR [rbp-0x8]
    12f7:	89 45 f4             	mov    DWORD PTR [rbp-0xc],eax
    12fa:	90                   	nop
    12fb:	8b 45 f4             	mov    eax,DWORD PTR [rbp-0xc]
    12fe:	89 c7                	mov    edi,eax
    1300:	e8 64 fe ff ff       	call   1169 <push>
    1305:	83 45 f0 01          	add    DWORD PTR [rbp-0x10],0x1
    1309:	8b 45 f0             	mov    eax,DWORD PTR [rbp-0x10]
    130c:	48 63 d0             	movsxd rdx,eax
    130f:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
    1313:	48 01 d0             	add    rax,rdx
    1316:	0f b6 00             	movzx  eax,BYTE PTR [rax]
    1319:	3c 65                	cmp    al,0x65
    131b:	0f 85 0d ff ff ff    	jne    122e <PostfixEval+0x18>
    1321:	b8 00 00 00 00       	mov    eax,0x0
    1326:	e8 95 fe ff ff       	call   11c0 <pop>
    132b:	89 c6                	mov    esi,eax
    132d:	48 8d 3d fc 0c 00 00 	lea    rdi,[rip+0xcfc]        # 2030 <_IO_stdin_used+0x30>
    1334:	b8 00 00 00 00       	mov    eax,0x0
    1339:	e8 02 fd ff ff       	call   1040 <printf@plt>
    133e:	90                   	nop
    133f:	c9                   	leave  
    1340:	c3                   	ret    

0000000000001341 <main>:
    1341:	55                   	push   rbp
    1342:	48 89 e5             	mov    rbp,rsp
    1345:	48 83 ec 50          	sub    rsp,0x50
    1349:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    1350:	00 00 
    1352:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
    1356:	31 c0                	xor    eax,eax
    1358:	48 8d 3d f9 0c 00 00 	lea    rdi,[rip+0xcf9]        # 2058 <_IO_stdin_used+0x58>
    135f:	b8 00 00 00 00       	mov    eax,0x0
    1364:	e8 d7 fc ff ff       	call   1040 <printf@plt>
    1369:	c7 45 bc 00 00 00 00 	mov    DWORD PTR [rbp-0x44],0x0
    1370:	eb 32                	jmp    13a4 <main+0x63>
    1372:	48 8d 55 c0          	lea    rdx,[rbp-0x40]
    1376:	8b 45 bc             	mov    eax,DWORD PTR [rbp-0x44]
    1379:	48 98                	cdqe   
    137b:	48 01 d0             	add    rax,rdx
    137e:	48 89 c6             	mov    rsi,rax
    1381:	48 8d 3d 09 0d 00 00 	lea    rdi,[rip+0xd09]        # 2091 <_IO_stdin_used+0x91>
    1388:	b8 00 00 00 00       	mov    eax,0x0
    138d:	e8 be fc ff ff       	call   1050 <__isoc99_scanf@plt>
    1392:	8b 45 bc             	mov    eax,DWORD PTR [rbp-0x44]
    1395:	48 98                	cdqe   
    1397:	0f b6 44 05 c0       	movzx  eax,BYTE PTR [rbp+rax*1-0x40]
    139c:	3c 65                	cmp    al,0x65
    139e:	74 0c                	je     13ac <main+0x6b>
    13a0:	83 45 bc 01          	add    DWORD PTR [rbp-0x44],0x1
    13a4:	83 7d bc 31          	cmp    DWORD PTR [rbp-0x44],0x31
    13a8:	7e c8                	jle    1372 <main+0x31>
    13aa:	eb 01                	jmp    13ad <main+0x6c>
    13ac:	90                   	nop
    13ad:	48 8d 45 c0          	lea    rax,[rbp-0x40]
    13b1:	48 89 c7             	mov    rdi,rax
    13b4:	e8 5d fe ff ff       	call   1216 <PostfixEval>
    13b9:	b8 00 00 00 00       	mov    eax,0x0
    13be:	48 8b 4d f8          	mov    rcx,QWORD PTR [rbp-0x8]
    13c2:	64 48 2b 0c 25 28 00 	sub    rcx,QWORD PTR fs:0x28
    13c9:	00 00 
    13cb:	74 05                	je     13d2 <main+0x91>
    13cd:	e8 5e fc ff ff       	call   1030 <__stack_chk_fail@plt>
    13d2:	c9                   	leave  
    13d3:	c3                   	ret    
    13d4:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
    13db:	00 00 00 
    13de:	66 90                	xchg   ax,ax

00000000000013e0 <__libc_csu_init>:
    13e0:	f3 0f 1e fa          	endbr64 
    13e4:	41 57                	push   r15
    13e6:	4c 8d 3d fb 29 00 00 	lea    r15,[rip+0x29fb]        # 3de8 <__frame_dummy_init_array_entry>
    13ed:	41 56                	push   r14
    13ef:	49 89 d6             	mov    r14,rdx
    13f2:	41 55                	push   r13
    13f4:	49 89 f5             	mov    r13,rsi
    13f7:	41 54                	push   r12
    13f9:	41 89 fc             	mov    r12d,edi
    13fc:	55                   	push   rbp
    13fd:	48 8d 2d ec 29 00 00 	lea    rbp,[rip+0x29ec]        # 3df0 <__do_global_dtors_aux_fini_array_entry>
    1404:	53                   	push   rbx
    1405:	4c 29 fd             	sub    rbp,r15
    1408:	48 83 ec 08          	sub    rsp,0x8
    140c:	e8 ef fb ff ff       	call   1000 <_init>
    1411:	48 c1 fd 03          	sar    rbp,0x3
    1415:	74 1f                	je     1436 <__libc_csu_init+0x56>
    1417:	31 db                	xor    ebx,ebx
    1419:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1420:	4c 89 f2             	mov    rdx,r14
    1423:	4c 89 ee             	mov    rsi,r13
    1426:	44 89 e7             	mov    edi,r12d
    1429:	41 ff 14 df          	call   QWORD PTR [r15+rbx*8]
    142d:	48 83 c3 01          	add    rbx,0x1
    1431:	48 39 dd             	cmp    rbp,rbx
    1434:	75 ea                	jne    1420 <__libc_csu_init+0x40>
    1436:	48 83 c4 08          	add    rsp,0x8
    143a:	5b                   	pop    rbx
    143b:	5d                   	pop    rbp
    143c:	41 5c                	pop    r12
    143e:	41 5d                	pop    r13
    1440:	41 5e                	pop    r14
    1442:	41 5f                	pop    r15
    1444:	c3                   	ret    
    1445:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
    144c:	00 00 00 00 

0000000000001450 <__libc_csu_fini>:
    1450:	f3 0f 1e fa          	endbr64 
    1454:	c3                   	ret    

Disassembly of section .fini:

0000000000001458 <_fini>:
    1458:	f3 0f 1e fa          	endbr64 
    145c:	48 83 ec 08          	sub    rsp,0x8
    1460:	48 83 c4 08          	add    rsp,0x8
    1464:	c3                   	ret    
