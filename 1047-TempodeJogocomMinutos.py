entrada = list(map(int,input().split()))

h0, m0, hf, mf = entrada
    
comeco  = h0*60 + m0
fim     = hf*60 + mf

difTotal  = fim - comeco
difMinutos= difTotal%60

if(h0 < hf):
    print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %((difTotal - difMinutos)/60,difMinutos))
elif(h0 == hf):
    if(m0>mf):
        print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(23,difMinutos))
    elif(m0<mf):
        print("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)" %(difMinutos))
    elif(m0==mf):
        print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
elif(h0 > hf):
    difTotal += 24*60
    difMinutos= difTotal%60
    print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %((difTotal - difMinutos)/60,difMinutos))