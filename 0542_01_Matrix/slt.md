### 思路1 dp

遍历矩阵两次，分别从上左和下右更新矩阵。

因为最小路径可能来自左右上下四个方向，第一遍dp遍历求出左上两个方向的最小值，
到矩阵终点后再反向dp遍历求出右下方向最小值，这样四个方向就都搞定了

