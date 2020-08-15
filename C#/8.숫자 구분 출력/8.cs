using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습8
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
                int idata01 = int.Parse(textBox1.Text);

                if (idata01 < 0)
                {
                    textBox2.Text = "0보다 작은 수를 입력했습니다!";
                }
                else if (idata01 >= 0 && idata01 < 10)
                {
                    textBox2.Text = "0과 10 사이 수를 입력했습니다!";
                }
                else if (idata01 >= 10 && idata01 < 50)
                {
                    textBox2.Text = "10과 50 사이 수를 입력했습니다!";
                }
                else if (idata01 >= 50 && idata01 < 100)
                {
                    textBox2.Text = "50과 100 사이 수를 입력했습니다!";
                }
                else
                {
                    textBox2.Text = "100보다 큰 수를 입력했습니다!";
                }
            }
            catch(Exception ex)
            {
                textBox2.Text = ex.Message;
            }

        }
    }
}
