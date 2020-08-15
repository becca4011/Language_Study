using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습25
{
    public partial class Form1 : Form
    {
        int sum = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text);
            
            try
            {
                if(a < 1000 && a > 0)
                {
                    sum += a;
                    label5.Text = "김태희 계좌잔고 : " + sum + "원";
                }
                else
                {
                    label5.Text = "결과에 이상이 있습니다.\n김태희 계좌잔고 : " + sum;
                }
            }
            catch
            {
                label5.Text = "결과에 이상이 있습니다.\n김태희 계좌잔고 : "+ sum;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int b = int.Parse(textBox2.Text);

            try
            {
                if (b <= sum)
                {
                    sum -= b;
                    label5.Text = "김태희 계좌잔고 : " + sum + "원";
                }
                else
                {
                    label5.Text = "결과에 이상이 있습니다.\n김태희 계좌잔고 : " + sum;
                }
            }
            catch
            {
                label5.Text = "결과에 이상이 있습니다.\n김태희 계좌잔고 : " + sum;
            }
        }
    }
}
