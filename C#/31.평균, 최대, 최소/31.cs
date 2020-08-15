using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습31
{
    public partial class Form1 : Form
    {
        int[] iarray = new int[10]; //10개짜리 배열 생성
        int cnt = 0; //카운트 선언

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            System.Random ran = new System.Random(); //랜덤 선언

            /* iarray[n1] = n2 */

            label1.Text = "";
            for (int i = 0; i < iarray.Length; i++)
            {
                int num = ran.Next(1, 100); //1~99까지의 수를 무작위로 돌림
                cnt++; //카운트를 올림
                iarray[i] = num; //iarray[i] 값을 num에 넣음

                label1.Text += "iarray[" + i + "] = " + num + "     "; //iarray[n1] = n2를 출력

                if (cnt % 2 == 0)
                {
                    label1.Text += "\n"; //카운트가 2의 배수가 될때마다 줄을 바꿈
                }
            }

            /* 배열값의 최대, 최소, 평균 */

            int max = 1; //최대
            int min = 99; //최소

            for (int j = 0; j < iarray.Length; j++)
            {
                if (max < iarray[j]) //max 값이 iarray[j] 값보다 작을 때
                {
                    max = iarray[j]; //max 값을 iarray[j] 값으로 바꿈
                }
            }
            label1.Text += "\n\n배열값의 최대는 " + max;

            for (int k = 0; k < iarray.Length; k++) 
            {
                if (min > iarray[k]) //min 값이 iarray[k] 값보다 클 때
                {
                    min = iarray[k]; //min 값을 iarray[k] 값으로 바꿈
                }
            }
            label1.Text += "\n\n배열값의 최소는 " + min;

            double sum = 0; //전체 합
            double avg = 0; //평균

            for (int l = 0; l < iarray.Length; l++)
            {
                sum = sum + iarray[l]; //랜덤을 돌린 수를 다 합침
            }
            avg = sum / iarray.Length; //합한 수를 iarray.Length(=10)으로 나눔(평균구하기)
            label1.Text += "\n\n10개 원소 배열값의 평균은 " + avg;
        }
    }
}
