void pntr_examples_thick() {
    pntr_image* canvas = pntr_gen_image_color(400, 225, PNTR_RAYWHITE);

    // Define some colors
    pntr_color lightGreen = PNTR_GREEN;
    lightGreen.rgba.a = 180;
    pntr_color lightBlue = PNTR_BLUE;
    lightBlue.rgba.a = 180;

    // Rectangles
    pntr_draw_rectangle_thick(canvas, 10, 120, 50, 50, 5, PNTR_RED);
    pntr_draw_rectangle_thick(canvas, 20, 130, 50, 50, 5, PNTR_GREEN);
    pntr_draw_rectangle_thick(canvas, 30, 140, 50, 50, 5, PNTR_BLUE);

    // Circle
    pntr_draw_circle_thick(canvas, 110, 60, 21, 5, PNTR_RED);

    pntr_draw_ellipse_thick(canvas, 110, 100, 20, 10, 5, PNTR_GREEN);

    // Line
    pntr_draw_line_thick(canvas, 200, 50, 250, 80, 5, PNTR_DARKGREEN);

    // Triangle
    pntr_draw_triangle_thick(canvas,
        250, 50,
        300, 80,
        350, 20, 5, PNTR_PURPLE);

    // Polygon
    pntr_vector points[10];
    points[0] = PNTR_CLITERAL(pntr_vector) {210, 110};
    points[1] = PNTR_CLITERAL(pntr_vector) {215, 130};
    points[2] = PNTR_CLITERAL(pntr_vector) {240, 140};
    points[3] = PNTR_CLITERAL(pntr_vector) {200, 160};
    pntr_draw_polygon_thick(canvas, points, 4, 5, PNTR_BLACK);

    // Arc
    int radius = 40;
    pntr_draw_arc_thick(canvas, 300, 120, radius, 90.0f, 180.0f, radius *1.5f, 5, PNTR_RED);

    // Polyline
    points[0] = PNTR_CLITERAL(pntr_vector) {240, 80};
    points[1] = PNTR_CLITERAL(pntr_vector) {260, 100};
    points[2] = PNTR_CLITERAL(pntr_vector) {220, 110};
    points[3] = PNTR_CLITERAL(pntr_vector) {240, 130};
    pntr_draw_polyline_thick(canvas, points, 4, 5, PNTR_PURPLE);

    // Line Curve
    pntr_draw_line_curve_thick(canvas, points[0], points[1], points[2], points[3], 40, 5, PNTR_DARKBLUE);

    pntr_save_image(canvas, "pntr_examples_thick.png");
    pntr_unload_image(canvas);
}