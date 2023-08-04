set ns [new Simulator]
set tr [open samp.tr w]
$ns trace-all $tr
set nm [open fir.nam w]
$ns namtrace-all $nm

#creating nodes
set n0 [$ns node]
set n1 [$ns node]
set n2 [$ns node]
set n3 [$ns node]
set n4 [$ns node]
set n5 [$ns node]

$ns duplex-link $n0 $n2 1MB 10ms DropTail
$ns duplex-link $n1 $n2 1MB 10ms DropTail
$ns duplex-link $n3 $n4 1MB 10ms DropTail
$ns duplex-link $n3 $n5 1MB 10ms DropTail
$ns duplex-link $n2 $n3 0.1MB 1ms DropTail

#attaching udp to n0 and attach cbr to udp
set udp0 [new Agent/UDP]
$ns attach-agent $n0 $udp0
set cbr0 [new Application/Traffic/CBR]
$cbr0 attach-agent $udp0

#attaching tcp to n1 and attach ftp to tcp
set tcp0 [new Agent/TCP]
$ns attach-agent $n1 $tcp0
set ftp0 [new Application/FTP]
$ftp0 attach-agent $tcp0

#attach null to n5
set null0 [new Agent/Null]
$ns attach-agent $n5 $null0

#attach sink to n4
set sink0 [new Agent/TCPSink]
$ns attach-agent $n4 $sink0


proc finish {} {puts "complete"; exit 0}
$ns connect $tcp0 $sink0
$ns connect $udp0 $null0
$ns at 0.1 "$cbr0 start"
$ns at 1.1 "$ftp0 start"
$ns at 5.1 "$cbr0 stop"
$ns at 6.1 "$ftp0 stop"
$ns at 6.5 "finish"
$ns run

