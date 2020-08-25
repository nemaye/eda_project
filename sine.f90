program begin
	implicit none
	integer x
	real sinx, rad
	write(*,*) 'Enter angle in degrees = '
	read(*,*) x
	rad = 3.14159265*x/180
	sinx = rad - rad**3/6.0 + rad**5/120.0 - rad**7/5040.0 + rad**9/362880.0
	write(*,*) 'sine of angle= ', sinx
end program begin