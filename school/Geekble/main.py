import cv2
import numpy as np

# 이미지 생성
image_height = 300
image_width = 400
image = np.zeros((image_height, image_width, 3), dtype=np.uint8)

# 이미지에 글자 입력
text = input("Mode: ")
font = cv2.FONT_HERSHEY_SIMPLEX
font_scale = 1
font_color = (255, 255, 255)  # 흰색
font_thickness = 2
text_size = cv2.getTextSize(text, font, font_scale, font_thickness)[0]
text_x = (image_width - text_size[0]) // 2
text_y = (image_height + text_size[1]) // 2
cv2.putText(image, text, (text_x, text_y), font, font_scale, font_color, font_thickness)

# 이미지 표시
cv2.imshow("Image with Text", image)
cv2.waitKey(0)
cv2.destroyAllWindows()
