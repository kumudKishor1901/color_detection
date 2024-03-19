# Color Detection using HSV Thresholding

This C++ program utilizes OpenCV to perform color detection based on the HSV (Hue, Saturation, Value) color space. The program allows users to select a specific color range using trackbars and applies a mask to the image, highlighting the pixels within that range.

## Installation and Setup
1. **OpenCV Installation**: Ensure you have OpenCV installed on your system. You can follow the [official OpenCV installation guide](https://docs.opencv.org/master/d7/d9f/tutorial_linux_install.html) for installation instructions.

2. **Clone the Repository**: Clone this repository to your local machine:
    ```
    git clone <repository_url>
    ```

3. **Build the Program**: Compile the program using a C++ compiler with OpenCV libraries linked. For example:
    ```
    g++ -o color_detection color_detection.cpp `pkg-config --cflags --libs opencv4`
    ```

## Usage
1. **Run the Program**: Execute the compiled binary:
    ```
    ./color_detection
    ```

2. **Trackbar Controls**:
   - Adjust the HSV values using the trackbars to define the color range you want to detect.
   - Trackbars are provided for adjusting:
     - Hue (Hue Min, Hue Max)
     - Saturation (Sat Min, Sat Max)
     - Value (Value Min, Value Max)

3. **Color Detection**:
   - The program will display the original image, the image converted to the HSV color space, and the mask showing the pixels within the selected color range.

4. **Quit**:
   - Press any key to exit the program.

## Customization
- **Image Selection**: You can change the path to the input image by modifying the `path` variable in the code.
- **HSV Range**: Adjust the HSV range to detect different colors by modifying the initial values of `hmin`, `hmax`, `smin`, `smax`, `vmin`, and `vmax` variables.

## Notes
- Ensure the input image contains colors that are distinguishable in the HSV color space for accurate detection.
- Experiment with different HSV ranges to detect specific colors effectively.

## Acknowledgments
- This project was inspired by the need for a simple color detection tool using OpenCV and the HSV color space.
- Thanks to the OpenCV community for providing powerful tools for computer vision tasks.
