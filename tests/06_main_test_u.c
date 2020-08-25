/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_main_test_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 22:11:54 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/25 00:30:42 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Unsigned ]  ----------------------------- \n\n");

	/*ft_printf("%s\n" , "~02~ Hexadecimal number width flag [0] and width");
	ft_printf(" LENGTH printf    : %d\n", ft_printf("|%05x|", 43));
   	printf(" LENGTH printf    : %d\n\n", printf("|%05x|", 43));*/

	ft_printf("|%*.-5u|\n", 453);
	//printf("|%*.-5u|\n\n", 453);

	ft_printf("|%p|\n", NULL);
	//printf("|%p|\n", NULL);

	ft_printf("|%5p|\n", 0);
	//printf("|%5pu|\n", 0);
    //printf("|%s|\n", "_ _ _");

	ft_printf("|%08.5u|\n", 34);
	//printf("|%08.5u|\n", 34);

	ft_printf("|%-1u|\n", 34);

	ft_printf("|%.1u|\n", 34);

	ft_printf("|%-8.7u|\n", 4);

	//ft_printf("|%u|\n", -17);
	//printf("|%u|\n", 4294967295u);

	return (0);
}

/*
Test 344 (u_basic_pos) : FAILED.
    First line of code: {return test("this %u number", 17);}
      expected output : "this 17 number"
      your output     : "this 0 number"
      expected (nonprintable as hex) : "this 17 number"
      actual   (nonprintable as hex) : "this 0 number"

Test 346 (u_basic_onlypos) : FAILED.
    First line of code: {return test("%u", 3);}
      expected output : "3"
      your output     : "0"
      expected (nonprintable as hex) : "3"
      actual   (nonprintable as hex) : "0"

Test 347 (u_uintmax) : FAILED.
    First line of code: {return test("%u", 4294967295u);}
      expected output : "4294967295"
      your output     : "0"
      expected (nonprintable as hex) : "4294967295"
      actual   (nonprintable as hex) : "0"

Test 348 (u_width_pos_fits) : FAILED.
    First line of code: {return test("%7u", 33);}
      expected output : "     33"
      your output     : "    0"
      expected (nonprintable as hex) : "     33"
      actual   (nonprintable as hex) : "    0"

Test 349 (u_width_zero_fits) : FAILED.
    First line of code: {return test("%3u", 0);}
      expected output : "  0"
      your output     : " 0"
      expected (nonprintable as hex) : "  0"
      actual   (nonprintable as hex) : " 0"

Test 350 (u_width_pos_exactfit) : FAILED.
    First line of code: {return test("%5u", 52625);}
      expected output : "52625"
      your output     : "0"
      expected (nonprintable as hex) : "52625"
      actual   (nonprintable as hex) : "0"

Test 351 (u_width_pos_nofit) : FAILED.
    First line of code: {return test("%4u", 94827);}
      expected output : "94827"
      your output     : "0"
      expected (nonprintable as hex) : "94827"
      actual   (nonprintable as hex) : "0"

Test 352 (u_width_pos_fits_lj) : FAILED.
    First line of code: {return test("%-7u", 33);}
      expected output : "33     "
      your output     : "0    "
      expected (nonprintable as hex) : "33     "
      actual   (nonprintable as hex) : "0    "

Test 353 (u_width_zero_fits_lj) : FAILED.
    First line of code: {return test("%-3u", 0);}
      expected output : "0  "
      your output     : "0 "
      expected (nonprintable as hex) : "0  "
      actual   (nonprintable as hex) : "0 "

Test 354 (u_width_pos_exactfit_lj) : FAILED.
    First line of code: {return test("%-5u", 52625);}
      expected output : "52625"
      your output     : "0"
      expected (nonprintable as hex) : "52625"
      actual   (nonprintable as hex) : "0"

Test 355 (u_width_pos_nofit_lj) : FAILED.
    First line of code: {return test("%-4u", 94827);}
      expected output : "94827"
      your output     : "0"
      expected (nonprintable as hex) : "94827"
      actual   (nonprintable as hex) : "0"

Test 356 (u_prec_fits_pos) : FAILED.
    First line of code: {return test("%.5u", 2);}
      expected output : "00002"
      your output     : "00000"
      expected (nonprintable as hex) : "00002"
      actual   (nonprintable as hex) : "00000"

Test 358 (u_prec_exactfit_pos) : FAILED.
    First line of code: {return test("%.4u", 5263);}
      expected output : "5263"
      your output     : "0"
      expected (nonprintable as hex) : "5263"
      actual   (nonprintable as hex) : "0"

Test 359 (u_prec_nofit_pos) : FAILED.
    First line of code: {return test("%.3u", 13862);}
      expected output : "13862"
      your output     : "0"
      expected (nonprintable as hex) : "13862"
      actual   (nonprintable as hex) : "0"

Test 360 (u_zp_pos_fits) : FAILED.
    First line of code: {return test("%05u", 43);}
      expected output : "00043"
      your output     : "000"
      expected (nonprintable as hex) : "00043"
      actual   (nonprintable as hex) : "000"

Test 361 (u_zp_zero_fits) : FAILED.
    First line of code: {return test("%03u", 0);}
      expected output : "000"
      your output     : "00"
      expected (nonprintable as hex) : "000"
      actual   (nonprintable as hex) : "00"

Test 362 (u_zp_pos_exactfit) : FAILED.
    First line of code: {return test("%03u", 634);}
      expected output : "634"
      your output     : "0"
      expected (nonprintable as hex) : "634"
      actual   (nonprintable as hex) : "0"

Test 363 (u_prec_width_fit_fit_pos) : FAILED.
    First line of code: {return test("%8.5u", 34);}
      expected output : "   00034"
      your output     : "  0000"
      expected (nonprintable as hex) : "   00034"
      actual   (nonprintable as hex) : "  0000"

Test 364 (u_prec_width_fit_fit_zero) : FAILED.
    First line of code: {return test("%8.5u", 0);}
      expected output : "   00000"
      your output     : "  00000"
      expected (nonprintable as hex) : "   00000"
      actual   (nonprintable as hex) : "  00000"

Test 365 (u_prec_width_nofit_fit_pos) : FAILED.
    First line of code: {return test("%8.3u", 8375);}
      expected output : "    8375"
      your output     : "   0"
      expected (nonprintable as hex) : "    8375"
      actual   (nonprintable as hex) : "   0"

Test 366 (u_prec_width_fit_nofit_pos) : FAILED.
    First line of code: {return test("%3.7u", 3267);}
      expected output : "0003267"
      your output     : "0000"
      expected (nonprintable as hex) : "0003267"
      actual   (nonprintable as hex) : "0000"

Test 367 (u_prec_width_nofit_nofit_pos) : FAILED.
    First line of code: {return test("%3.3u", 6983);}
      expected output : "6983"
      your output     : "0"
      expected (nonprintable as hex) : "6983"
      actual   (nonprintable as hex) : "0"

Test 368 (u_prec_width_fit_fit_pos_lj) : FAILED.
    First line of code: {return test("%-8.5u", 34);}
      expected output : "00034   "
      your output     : "0000  "
      expected (nonprintable as hex) : "00034   "
      actual   (nonprintable as hex) : "0000  "

Test 369 (u_prec_width_fit_fit_zero_lj) : FAILED.
    First line of code: {return test("%-8.5u", 0);}
      expected output : "00000   "
      your output     : "00000  "
      expected (nonprintable as hex) : "00000   "
      actual   (nonprintable as hex) : "00000  "

Test 370 (u_prec_width_nofit_fit_pos_lj) : FAILED.
    First line of code: {return test("%-8.3u", 8375);}
      expected output : "8375    "
      your output     : "0   "
      expected (nonprintable as hex) : "8375    "
      actual   (nonprintable as hex) : "0   "

Test 371 (u_prec_width_fit_nofit_pos_lj) : FAILED.
    First line of code: {return test("%-3.7u", 3267);}
      expected output : "0003267"
      your output     : "0000"
      expected (nonprintable as hex) : "0003267"
      actual   (nonprintable as hex) : "0000"

Test 372 (u_prec_width_nofit_nofit_pos_lj) : FAILED.
    First line of code: {return test("%-3.3u", 6983);}
      expected output : "6983"
      your output     : "0"
      expected (nonprintable as hex) : "6983"
      actual   (nonprintable as hex) : "0"

Test 373 (u_prec_width_ff_pos_zp) : FAILED.
    First line of code: {return test("%08.5u", 34);}
      expected output : "   00034"
      your output     : "     0000"
      expected (nonprintable as hex) : "   00034"
      actual   (nonprintable as hex) : "     0000"

Test 374 (u_prec_width_ff_zero_zp) : FAILED.
    First line of code: {return test("%08.5u", 0);}
      expected output : "   00000"
      your output     : "      00000"
      expected (nonprintable as hex) : "   00000"
      actual   (nonprintable as hex) : "      00000"

Test 375 (u_prec_width_nf_pos_zp) : FAILED.
    First line of code: {return test("%08.3u", 8375);}
      expected output : "    8375"
      your output     : "   0"
      expected (nonprintable as hex) : "    8375"
      actual   (nonprintable as hex) : "   0"

Test 376 (u_prec_width_fn_pos_zp) : FAILED.
    First line of code: {return test("%03.7u", 3267);}
      expected output : "0003267"
      your output     : "0000"
      expected (nonprintable as hex) : "0003267"
      actual   (nonprintable as hex) : "0000"

Test 377 (u_prec_width_nn_pos_zp) : FAILED.
    First line of code: {return test("%03.3u", 6983);}
      expected output : "6983"
      your output     : "0"
      expected (nonprintable as hex) : "6983"
      actual   (nonprintable as hex) : "0"

Test 378 (u_prec_width_ff_pos_ljzp_ignoreflag) : FAILED.
    First line of code: {return test("%0-8.5u", 34);}
      expected output : "00034   "
      your output     : "0000     "
      expected (nonprintable as hex) : "00034   "
      actual   (nonprintable as hex) : "0000     "

Test 379 (u_prec_width_ff_zero_ljzp_ignoreflag) : FAILED.
    First line of code: {return test("%0-8.5u", 0);}
      expected output : "00000   "
      your output     : "00000      "
      expected (nonprintable as hex) : "00000   "
      actual   (nonprintable as hex) : "00000      "

Test 380 (u_prec_width_nf_pos_ljzp_ignoreflag) : FAILED.
    First line of code: {return test("%0-8.3u", 8375);}
      expected output : "8375    "
      your output     : "0   "
      expected (nonprintable as hex) : "8375    "
      actual   (nonprintable as hex) : "0   "

Test 381 (u_prec_width_fn_pos_ljzp_ignoreflag) : FAILED.
    First line of code: {return test("%0-3.7u", 3267);}
      expected output : "0003267"
      your output     : "0000"
      expected (nonprintable as hex) : "0003267"
      actual   (nonprintable as hex) : "0000"

Test 382 (u_prec_width_nn_pos_ljzp_ignoreflag) : FAILED.
    First line of code: {return test("%0-3.3u", 6983);}
      expected output : "6983"
      your output     : "0"
      expected (nonprintable as hex) : "6983"
      actual   (nonprintable as hex) : "0"

Test 385 (u_prec0val0_w) : FAILED.
    First line of code: {return test("%5.0u", 0);}
      expected output : "     "
      your output     : "    "
      expected (nonprintable as hex) : "     "
      actual   (nonprintable as hex) : "    "

Test 386 (u_prec0val0_w_impl) : FAILED.
    First line of code: {return test("%5.u", 0);}
      expected output : "     "
      your output     : "    "
      expected (nonprintable as hex) : "     "
      actual   (nonprintable as hex) : "    "

Test 387 (u_prec0val0_wlj) : FAILED.
    First line of code: {return test("%-5.0u", 0);}
      expected output : "     "
      your output     : "    "
      expected (nonprintable as hex) : "     "
      actual   (nonprintable as hex) : "    "

Test 388 (u_prec0val0_wlj_impl) : FAILED.
    First line of code: {return test("%-5.u", 0);}
      expected output : "     "
      your output     : "    "
      expected (nonprintable as hex) : "     "
      actual   (nonprintable as hex) : "    "

Test 4189 (u_neg_prec_star_01) : FAILED.
    First line of code: {return test("%.*u", -3, 12345);}
      expected output : "12345"
      your output     : "0"
      expected (nonprintable as hex) : "12345"
      actual   (nonprintable as hex) : "0"

Test 4190 (u_neg_prec_star_02) : FAILED.
    First line of code: {return test("%.*u", -1, 12345);}
      expected output : "12345"
      your output     : "0"
      expected (nonprintable as hex) : "12345"
      actual   (nonprintable as hex) : "0"


*/