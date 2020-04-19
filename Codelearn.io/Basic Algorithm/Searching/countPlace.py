# Tuyến phố thông minh của nhà anh Việt có nhiều tòa nhà, 
# tòa nhà thứ i có khoảng cách x[i] mét so với đầu của tuyến phố. 
# Vì anh Việt là người giàu có và khá thoải mái chuyện tiền bạc 
# nên anh đã quyết định sẽ đặt các trạm phát sóng wifi miễn phí 
# tại các tòa nhà dọc theo tuyến phố thông minh của nhà anh. 
# Mỗi thiết bị phát wifi có thể phủ sóng trong phạm vi k mét, 
# tức là các tòa nhà có khoảng cách đến thiết bị không vượt quá k mét thì sẽ sử dụng được wifi từ thiết bị này.
# Bạn hãy viết chương trình giúp anh Việt Ducky tìm cách đặt các trạm wifi 
# để số lượng trạm wifi là ít nhất và tất cả các tòa nhà đều có thể sử dụng wifi.

def countPlace(a, k):
    sumWifi = 0
    distance = k
    i = 0
    while i<len(a):
        mark = a[i]
        f = 0
        while distance>=0:
            if mark + distance in a:
                mark = mark + distance
                break
            if distance==0:
                f = 1
            distance -= 1
        if not f or distance==0:
            distance = k
            while i<len(a) and a[i]-mark<=distance:
                i += 1
            sumWifi += 1
    return sumWifi