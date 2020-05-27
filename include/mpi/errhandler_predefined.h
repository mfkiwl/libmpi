/*
 * MIT License
 *
 * Copyright(c) 2011-2020 The Maintainers of Nanvix
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef NANVIX_MPI_ERRHANDLER_PREDEFINED_H_
#define NANVIX_MPI_ERRHANDLER_PREDEFINED_H_

#include <mpi.h>

/**
 * @note Forward declaration to avoid circular references.
 */
struct mpi_communicator_t;

/**
 * @brief Handler functions for MPI_ERRORS_ARE_FATAL.
 */
extern void mpi_errors_are_fatal_comm_handler(struct mpi_communicator_t **comm,
                                              int *errcode, ...);
extern void mpi_errors_are_fatal_file_handler(mpi_file_t **file,
                                              int *errcode, ...);
extern void mpi_errors_are_fatal_win_handler(mpi_win_t **win,
                                             int *errcode, ...);

/**
 * @brief Handler functions for MPI_ERRORS_ABORT.
 */
extern void mpi_errors_abort_comm_handler(struct mpi_communicator_t **comm,
                                          int *errcode, ...);
extern void mpi_errors_abort_file_handler(mpi_file_t **file,
                                          int *errcode, ...);
extern void mpi_errors_abort_win_handler(mpi_win_t **win,
                                         int *errcode, ...);

/**
 * @brief Handler functions for MPI_ERRORS_RETURN.
 */
extern void mpi_errors_return_comm_handler(struct mpi_communicator_t **comm,
                                           int *errcode, ...);
extern void mpi_errors_return_file_handler(mpi_file_t **file,
                                           int *errcode, ...);
extern void mpi_errors_return_win_handler(mpi_win_t **win,
                                          int *errcode, ...);

#endif /* NANVIX_MPI_ERRHANDLER_PREDEFINED_H_ */
