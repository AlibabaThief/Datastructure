package sparsearray;

public class SparseArray {

    public static void main(String args[]) {

        //创一个原始的二维数组  0表示无棋子   1表示黑子  2 表示蓝色的子
        int chessArr1[][] = new int[11][11];
        chessArr1[1][2] = 1;
        chessArr1[2][3] = 2;
        System.out.println("original ");
        for (int[] row : chessArr1) {
            for (int data : row) {
                System.out.printf("%d\t", data);
            }
            System.out.println();
        }
        int sum = 0;
        for (int i = 0; i < chessArr1.length; i++) {
            for (int j = 0; j < chessArr1.length; j++) {
                if (chessArr1[i][j] != 0) {
                    sum++;
                }
            }
        }
        System.out.println(sum);// 创建对应的稀疏数组
        int sparsearr[][] = new int[sum + 1][3];
        //给稀疏数组赋值
        sparsearr[0][0] = 11;
        sparsearr[0][1] = 11;
        sparsearr[0][2] = sum;
        //遍历二维数组   非0的值存放到稀疏数组中
        int count = 0;
        for (int i = 0; i < chessArr1.length; i++) {
            for (int j = 0; j < chessArr1.length; j++) {
                if (chessArr1[i][j] != 0) {
                    count++;
                    sparsearr[count][0] = i;
                    sparsearr[count][1] = j;
                    sparsearr[count][2] = chessArr1[i][j];
                }
            }
        }
        System.out.println();
        System.out.println("得到的稀疏数组");
        for (int i = 0; i < sparsearr.length; i++)
            System.out.printf("%d\t%d\t%d\t\n", sparsearr[i][0], sparsearr[i][1], sparsearr[i][2]);
        System.out.println();

            /*再将 稀疏数组恢复成原始的二维数组
            1.先读取稀疏数组的第一行 根据第一行得到原始的二维数组
            2.再读取稀疏数组非0的数据  然后赋值给原始的二维数组
             */
        int chessarr2[][] = new int[sparsearr[0][0]][sparsearr[0][1]];
        //输出 恢复 后的   二维数组
        for(int i=1;i<sparsearr.length;i++){
            chessarr2[sparsearr[i][0]][sparsearr[i][1]]=sparsearr[i][2];
        }
    }
}
//将 稀疏数组保存到磁盘上