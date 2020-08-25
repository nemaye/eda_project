program start
	implicit none
integer i, n, sum
 	n =5
      sum = 0
      do 10 i = 1, n
         sum = sum + i
         write(*,*) 'i =', i
         write(*,*) 'sum =', sum
  10  continue
! dasd
end program start