#include "stdafx.h"
#include "mpi.h"
#include "stdio.h"

int main(int argc,char **argv)
{
	int test[3], temp[3];
	int rank, size,i;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	for (i = rank; i < 3; i = i + size) {
		temp[i] = 1;
		printf("rank=%d,temp%d %d %d",rank,temp[1],temp[2],temp[3]);
	}

	MPI_Finalize();
    return 0;
}

