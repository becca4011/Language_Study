using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습5
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
                int idata02 = int.Parse(textBox2.Text);
                bool bdata01 = idata01 > idata02;

                label1.Text = ">";
                label2.Text = "결과는 " + bdata01 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = "?";
                label2.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                int idata01 = int.Parse(textBox1.Text);
                int idata02 = int.Parse(textBox2.Text);
                bool bdata01 = idata01 >= idata02;

                label1.Text = ">=";
                label2.Text = "결과는 " + bdata01 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = "?";
                label2.Text = ex.Message;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                int idata01 = int.Parse(textBox1.Text);
                int idata02 = int.Parse(textBox2.Text);
                bool bdata01 = idata01 == idata02;

                label1.Text = "==";
                label2.Text = "결과는 " + bdata01 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = "?";
                label2.Text = ex.Message;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                int idata01 = int.Parse(textBox1.Text);
                int idata02 = int.Parse(textBox2.Text);
                bool bdata01 = idata01 != idata02;

                label1.Text = "!=";
                label2.Text = "결과는 " + bdata01 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = "?";
                label2.Text = ex.Message;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            try
            {
                int idata01 = int.Parse(textBox1.Text);
                int idata02 = int.Parse(textBox2.Text);
                bool bdata01 = idata01 <= idata02;

                label1.Text = "<=";
                label2.Text = "결과는 " + bdata01 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = "?";
                label2.Text = ex.Message;
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            try
            {
                int idata01 = int.Parse(textBox1.Text);
                int idata02 = int.Parse(textBox2.Text);
                bool bdata01 = idata01 < idata02;

                label1.Text = "<";
                label2.Text = "결과는 " + bdata01 + " 입니다";
            }
            catch (Exception ex)
            {
                label1.Text = "?";
                label2.Text = ex.Message;
            }
        }
    }
}
