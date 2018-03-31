/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * qstrs specific to openmv
 *
 */

// Image module
Q(image)
Q(Image)
Q(rgb_to_lab)
Q(lab_to_rgb)
Q(rgb_to_grayscale)
Q(grayscale_to_rgb)
Q(HaarCascade)
Q(search)
Q(SEARCH_EX)
Q(SEARCH_DS)
Q(EDGE_CANNY)
Q(EDGE_SIMPLE)
Q(CORNER_FAST)
Q(CORNER_AGAST)
Q(load_descriptor)
Q(save_descriptor)
Q(match_descriptor)

// Image class
Q(copy)
Q(copy_to_fb)
Q(save)
Q(compress)
Q(compress_for_ide)
Q(compressed)
Q(compressed_for_ide)
Q(width)
Q(height)
Q(format)
Q(size)
Q(gaussian)
Q(midpoint_pool)
Q(midpoint_pooled)
Q(mean_pool)
Q(mean_pooled)
Q(find_template)
Q(kp_desc)
Q(lbp_desc)
Q(Cascade)
Q(mask_ellipse)
Q(find_features)
Q(find_keypoints)
Q(find_lbp)
Q(find_eye)
Q(find_edges)
Q(find_hog)
Q(cmp_lbp)
Q(quality)
Q(roi)
Q(normalized)
Q(filter_outliers)
Q(scale_factor)
Q(max_keypoints)
Q(corner_detector)
Q(kptmatch)

// Lcd Module
Q(lcd)
Q(type)
Q(set_backlight)
Q(get_backlight)
Q(display)
Q(clear)

// FIR Module
Q(fir)
Q(read_ta)
Q(read_ir)
Q(draw_ta)
Q(draw_ir)
Q(alpha)
Q(scale)
Q(refresh)
Q(resolution)

// Gif module
Q(gif)
Q(Gif)
Q(open)
Q(add_frame)
Q(loop)

// Mjpeg module
Q(mjpeg)
Q(Mjpeg)

// Led Module
Q(led)
Q(RED)
Q(GREEN)
Q(BLUE)
Q(IR)
Q(on)
Q(off)
Q(toggle)

// Time Module
Q(time)
Q(ticks)
Q(sleep)
Q(clock)
Q(Clock)

// Clock
Q(tick)
Q(fps)
Q(avg)

//Sensor Module
Q(sensor)
Q(BAYER)
Q(RGB565)
Q(YUV422)
Q(GRAYSCALE)
Q(JPEG)
Q(OV9650)
Q(OV2640)
Q(OV7725)
Q(MT9V034)
Q(line_filter)
Q(value)

// C/SIF Resolutions
Q(QQCIF)
Q(QCIF)
Q(CIF)
Q(QQSIF)
Q(QSIF)
Q(SIF)
// VGA Resolutions
Q(QQQQVGA)
Q(QQQVGA)
Q(QQVGA)
Q(QVGA)
Q(VGA)
Q(HQQQVGA)
Q(HQQVGA)
Q(HQVGA)
// FFT Resolutions
Q(B64X32)
Q(B64X64)
Q(B128X64)
Q(B128X128)
// Other
Q(LCD)
Q(QQVGA2)
Q(SVGA)
Q(SXGA)
Q(UXGA)

//SDE
Q(NORMAL)
Q(NEGATIVE)

Q(reset)
Q(flush)
Q(snapshot)
Q(skip_frames)
Q(get_fb)
Q(get_id)
Q(alloc_extra_fb)
Q(dealloc_extra_fb)
Q(set_pixformat)
Q(set_framerate)
Q(set_framesize)
Q(set_vsync_output)
Q(set_binning)
Q(set_windowing)
Q(set_gainceiling)
Q(set_contrast)
Q(set_brightness)
Q(set_saturation)
Q(set_quality)
Q(set_colorbar)
Q(set_auto_gain)
Q(gain_db)
Q(gain_db_ceiling)
Q(get_gain_db)
Q(set_auto_exposure)
Q(exposure_us)
Q(get_exposure_us)
Q(set_auto_whitebal)
Q(rgb_gain_db)
Q(get_rgb_gain_db)
Q(set_hmirror)
Q(set_vflip)
Q(set_special_effect)
Q(set_lens_correction)
Q(__write_reg)
Q(__read_reg)

// GPIOS
Q(P1)
Q(P2)
Q(P3)
Q(P4)
Q(P5)
Q(P6)
Q(PA1)
Q(PA2)
Q(PA3)
Q(PA4)
Q(PA5)
Q(PA6)
Q(PA7)
Q(PA8)
Q(PB1)
Q(PB2)
Q(PB3)
Q(PB4)
Q(IN)
Q(OUT)
Q(gpio)
Q(GPIO)
Q(low)
Q(high)

// SPI
Q(spi)
Q(read)
Q(write)
Q(write_image)

// UART
Q(uart)

// File
Q(file)
Q(close)

//Wlan
Q(wlan)
Q(WEP)
Q(WPA)
Q(WPA2)
Q(init)
Q(connect)
Q(connected)
Q(ifconfig)
Q(patch_version)
Q(patch_program)
Q(socket)
Q(send)
Q(recv)
Q(bind)
Q(listen)
Q(accept)
Q(settimeout)
Q(setblocking)
Q(select)
Q(AF_INET)
Q(AF_INET6)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(SOCK_RAW)
Q(IPPROTO_IP)
Q(IPPROTO_ICMP)
Q(IPPROTO_IPV4)
Q(IPPROTO_TCP)
Q(IPPROTO_UDP)
Q(IPPROTO_IPV6)
Q(IPPROTO_RAW)

// for WINC1500 module
Q(WINC)
Q(connect)
Q(start_ap)
Q(disconnect)
Q(isconnected)
Q(connected_sta)
Q(wait_for_sta)
Q(ifconfig)
Q(fw_version)
Q(fw_dump)
Q(fw_update)
Q(scan)
Q(rssi)
Q(OPEN)
Q(WEP)
Q(WPA_PSK)
Q(802_1X)
Q(MODE_STA)
Q(MODE_AP)
Q(MODE_P2P)
Q(MODE_BSP)
Q(MODE_FIRMWARE)
Q(ssid)
Q(key)
Q(security)
Q(bssid)

// cpufreq Module
Q(cpufreq)
Q(CPUFREQ_120MHZ)
Q(CPUFREQ_144MHZ)
Q(CPUFREQ_168MHZ)
Q(CPUFREQ_192MHZ)
Q(CPUFREQ_216MHZ)
Q(get_frequency)
Q(set_frequency)

// Get Pixel
Q(get_pixel)
Q(rgbtuple)

// Set Pixel
Q(set_pixel)
Q(color)

// Draw Line
Q(draw_line)
// duplicate Q(color)
Q(thickness)

// Draw Rectangle
Q(draw_rectangle)
// duplicate Q(color)
// duplicate Q(thickness)
Q(fill)

// Draw Circle
Q(draw_circle)
// duplicate Q(color)
// duplicate Q(thickness)
// duplicate Q(fill)

// Draw String
Q(draw_string)
// duplicate Q(color)
// duplicate Q(scale)
Q(x_spacing)
Q(y_spacing)

// Draw Cross
Q(draw_cross)
// duplicate Q(color)
// duplicate Q(size)
// duplicate Q(thickness)

// Draw Arrow
Q(draw_arrow)
// duplicate Q(color)
// duplicate Q(size)
// duplicate Q(thickness)

// Draw Keypoints
Q(draw_keypoints)
// duplicate Q(color)
// duplicate Q(size)
// duplicate Q(thickness)
// duplicate Q(fill)

// Binary
Q(binary)
Q(invert)
Q(zero)

// Invert
// duplicate Q(invert)

// And
Q(and)
Q(b_and)
Q(mask)

// Nand
Q(nand)
Q(b_nand)
// duplicate Q(mask)

// Or
Q(or)
Q(b_or)
// duplicate Q(mask)

// Nor
Q(nor)
Q(b_nor)
// duplicate Q(mask)

// Xor
Q(xor)
Q(b_xor)
// duplicate Q(mask)

// Xnor
Q(xnor)
Q(b_xnor)
// duplicate Q(mask)

// Erode
Q(erode)
Q(threshold)
// duplicate Q(mask)

// Dilate
Q(dilate)
// duplicate Q(threshold)
// duplicate Q(mask)

// Open
// duplicate Q(open)
// duplicate Q(threshold)
// duplicate Q(mask)

// Close
// duplicate Q(close)
// duplicate Q(threshold)
// duplicate Q(mask)

// Top Hat
Q(top_hat)
// duplicate Q(threshold)
// duplicate Q(mask)

// Black Hat
Q(black_hat)
// duplicate Q(threshold)
// duplicate Q(mask)

// Negate
Q(negate)

// Replace
Q(replace)
Q(hmirror)
Q(vflip)

// Add Op
Q(add)
// duplicate Q(mask)

// Sub Op
Q(sub)
Q(reverse)
// duplicate Q(mask)

// Mul Op
Q(mul)
// duplicate Q(invert)
// duplicate Q(mask)

// Div Op
Q(div)
// duplicate Q(invert)
// duplicate Q(mask)

// Min
// duplicate Q(min)
// duplicate Q(mask)

// Max
// duplicate Q(max)
// duplicate Q(mask)

// Difference
Q(difference)
// duplicate Q(mask)

// Blend
Q(blend)
// duplicate Q(alpha)
// duplicate Q(mask)

// Histogram Equalization
Q(histeq)

// Mean
Q(mean)
// duplicate Q(threshold)
Q(offset)
// duplicate Q(invert)
// duplicate Q(mask)

// Median
Q(median)
Q(percentile)
// duplicate Q(threshold)
// duplicate Q(offset)
// duplicate Q(invert)
// duplicate Q(mask)

// Mode
Q(mode)
// duplicate Q(threshold)
// duplicate Q(offset)
// duplicate Q(invert)
// duplicate Q(mask)

// Midpoint
Q(midpoint)
Q(bias)
// duplicate Q(threshold)
// duplicate Q(offset)
// duplicate Q(invert)
// duplicate Q(mask)

// Moprh
Q(morph)
// duplicate Q(mul)
// duplicate Q(add)
// duplicate Q(threshold)
// duplicate Q(offset)
// duplicate Q(invert)
// duplicate Q(mask)

// Gaussian Blur
Q(blur)
Q(gaussian)
Q(gaussian_blur)
Q(unsharp)
// duplicate Q(mul)
// duplicate Q(add)
// duplicate Q(threshold)
// duplicate Q(offset)
// duplicate Q(invert)
// duplicate Q(mask)

// Laplacian
Q(laplacian)
Q(sharpen)
// duplicate Q(mul)
// duplicate Q(add)
// duplicate Q(threshold)
// duplicate Q(offset)
// duplicate Q(invert)
// duplicate Q(mask)

// Shadow Removal
Q(remove_shadows)

// Chromination Invariant
Q(chrominvar)

// Illumination Invariant
Q(illuminvar)

// Linear Polar
Q(linpolar)
// duplicate Q(reverse)

// Log Polar
Q(logpolar)
// duplicate Q(reverse)

// Lens Correction
Q(lens_corr)
Q(strength)
Q(zoom)

// Rotation Correction
Q(rotation_corr)
Q(x_rotation)
Q(y_rotation)
Q(z_rotation)
Q(x_translation)
Q(y_translation)
// duplicate Q(zoom)

// Structural Similarity
Q(get_similarity)
// Similarity Object
Q(similarity)
// duplicate Q(mean)
Q(stdev)
// duplicate Q(min)
// duplicate Q(max)

// Get Histogram
Q(get_hist)
Q(get_histogram)
// duplicate Q(roi)
Q(bins)
Q(l_bins)
Q(a_bins)
Q(b_bins)
Q(thresholds)
// duplicate Q(invert)
// Histogram Object
Q(histogram)
// duplicate Q(bins)
// duplicate Q(l_bins)
// duplicate Q(a_bins)
// duplicate Q(b_bins)
Q(get_percentile)
Q(get_threshold)
Q(get_stats)
Q(get_statistics)
Q(statistics)
// Percentile Object
// duplicate Q(percentile)
Q(value)
Q(l_value)
Q(a_value)
Q(b_value)
// Threshold Object
// duplicate Q(threshold)
// duplicate Q(value)
// duplicate Q(l_value)
// duplicate Q(a_value)
// duplicate Q(b_value)

// Get Statistics
// duplicate Q(get_stats)
// duplicate Q(get_statistics)
// duplicate Q(roi)
// duplicate Q(bins)
// duplicate Q(l_bins)
// duplicate Q(a_bins)
// duplicate Q(b_bins)
// duplicate Q(thresholds)
// duplicate Q(invert)
// Statistics Object
// duplicate Q(statistics)
// duplicate Q(mean)
// duplicate Q(median)
// duplicate Q(mode)
// duplicate Q(stdev)
// duplicate Q(min)
// duplicate Q(max)
Q(lq)
Q(uq)
Q(l_mean)
Q(l_median)
Q(l_mode)
Q(l_stdev)
Q(l_min)
Q(l_max)
Q(l_lq)
Q(l_uq)
Q(a_mean)
Q(a_median)
Q(a_mode)
Q(a_stdev)
Q(a_min)
Q(a_max)
Q(a_lq)
Q(a_uq)
Q(b_mean)
Q(b_median)
Q(b_mode)
Q(b_stdev)
Q(b_min)
Q(b_max)
Q(b_lq)
Q(b_uq)

// Get Regression
Q(get_regression)
// duplicate Q(roi)
Q(x_stride)
Q(y_stride)
// duplicate Q(invert)
Q(area_threshold)
Q(pixels_threshold)
Q(robust)
// Line Object
Q(line)
// duplicate Q(line)
Q(x1)
Q(y1)
Q(x2)
Q(y2)
Q(length)
Q(magnitude)
Q(theta)
Q(rho)

// Find Blobs
Q(find_blobs)
// duplicate Q(roi)
// duplicate Q(x_stride)
// duplicate Q(y_stride)
// duplicate Q(invert)
// duplicate Q(area_threshold)
// duplicate Q(pixels_threshold)
Q(merge)
Q(margin)
Q(threshold_cb)
Q(merge_cb)
// Blob Object
Q(blob)
Q(rect)
Q(x)
Q(y)
Q(w)
Q(h)
Q(pixels)
Q(cx)
Q(cy)
Q(rotation)
Q(code)
Q(count)
Q(area)
Q(density)

// Find Lines
Q(find_lines)
// duplicate Q(roi)
// duplicate Q(x_stride)
// duplicate Q(y_stride)
// duplicate Q(threshold)
Q(theta_margin)
Q(rho_margin)

// Find Line Segments
Q(find_line_segments)
// duplicate Q(roi)
Q(merge_distance)
Q(max_theta_diff)

// Find Circles
Q(find_circles)
// duplicate Q(roi)
// duplicate Q(x_stride)
// duplicate Q(y_stride)
// duplicate Q(threshold)
Q(x_margin)
Q(y_margin)
Q(r_margin)
// Circle Object
Q(circle)
// duplicate Q(circle)
// duplicate Q(x)
// duplicate Q(y)
Q(r)
// duplicate Q(magnitude)

// Find Rects
Q(find_rects)
// duplicate Q(roi)
// duplicate Q(threshold)
// Rect Object
// duplicate Q(rect)
Q(corners)
// duplicate Q(rect)
// duplicate Q(x)
// duplicate Q(y)
// duplicate Q(w)
// duplicate Q(h)
// duplicate Q(magnitude)

// Find QRCodes
Q(find_qrcodes)
// duplicate Q(roi)
// QRCode Object
Q(qrcode)
// duplicate Q(corners)
// duplicate Q(rect)
// duplicate Q(x)
// duplicate Q(y)
// duplicate Q(w)
// duplicate Q(h)
Q(payload)
Q(version)
Q(ecc_level)
Q(mask)
Q(data_type)
Q(eci)
Q(is_numeric)
Q(is_alphanumeric)
Q(is_binary)
Q(is_kanji)

// Find AprilTags
Q(find_apriltags)
// duplicate Q(roi)
Q(families)
Q(fx)
Q(fy)
// duplicate Q(cx)
// duplicate Q(cy)
// AprilTag Object
Q(apriltag)
// duplicate Q(corners)
// duplicate Q(rect)
// duplicate Q(x)
// duplicate Q(y)
// duplicate Q(w)
// duplicate Q(h)
Q(id)
Q(family)
Q(hamming)
// duplicate Q(cx)
// duplicate Q(cy)
// duplicate Q(rotation)
Q(goodness)
Q(decision_margin)
// duplicate  Q(x_translation)
// duplicate  Q(y_translation)
Q(z_translation)
// duplicate Q(x_rotation)
// duplicate Q(y_rotation)
// duplicate Q(z_rotation)
Q(TAG16H5)
Q(TAG25H7)
Q(TAG25H9)
Q(TAG36H10)
Q(TAG36H11)
Q(ARTOOLKIT)

// Find DataMatrices
Q(find_datamatrices)
// duplicate Q(roi)
Q(effort)
// DataMatrix Object
Q(datamatrix)
// duplicate Q(corners)
// duplicate Q(rect)
// duplicate Q(x)
// duplicate Q(y)
// duplicate Q(w)
// duplicate Q(h)
// duplicate Q(payload)
// duplicate Q(rotation)
Q(rows)
Q(columns)
Q(capacity)
Q(padding)

// Find BarCodes
Q(find_barcodes)
// duplicate Q(roi)
// BarCode Object
Q(barcode)
// duplicate Q(corners)
// duplicate Q(rect)
// duplicate Q(x)
// duplicate Q(y)
// duplicate Q(w)
// duplicate Q(h)
// duplicate Q(payload)
// duplicate Q(type)
// duplicate Q(rotation)
// duplicate Q(quality)
Q(EAN2)
Q(EAN5)
Q(EAN8)
Q(UPCE)
Q(ISBN10)
Q(UPCA)
Q(EAN13)
Q(ISBN13)
Q(I25)
Q(DATABAR)
Q(DATABAR_EXP)
Q(CODABAR)
Q(CODE39)
Q(PDF417)
Q(CODE93)
Q(CODE128)

// Find Displacement
Q(find_displacement)
// duplicate Q(roi)
Q(template_roi)
// duplicate Q(logpolar)
Q(fix_rotation_scale)
Q(displacement)
// duplicate Q(x_translation)
// duplicate Q(y_translation)
// duplicate Q(rotation)
// duplicate Q(scale)
Q(response)

// LENET
Q(find_number)

// CMSIS CNN
Q(classify_object)

// Image Writer
Q(ImageWriter)
// Image Writer Object
Q(imagewriter)
// duplicate Q(size)
// duplicate Q(add_frame)
// duplicate Q(close)

// Image Reader
Q(ImageReader)
// Image Reader Object
Q(imagereader)
// duplicate Q(size)
Q(next_frame)
// duplicate Q(copy_to_fb)
// duplicate Q(loop)
// duplicate Q(close)
