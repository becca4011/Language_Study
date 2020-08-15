using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습20
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int a = int.Parse(textBox1.Text);
                int b = int.Parse(textBox2.Text);


                for (int i = 1; a <= b; i++)
                {
                    
                }
                label4.Text = "1부터 입력된 최댓값: " + a + " 까지 증가값: " + b + " 로 반복한 결과\n\n<< i의 더하기 합계 : " +  + ">>\n\n<< i의 곱하기 합계 : " +  + ">>";
            }
            catch (Exception ex)
            {
                label4.Text = ex.Message + "\n다시 입력";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            label4.Text = "결과";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
