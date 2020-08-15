using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습26
{
    public partial class Form1 : Form
    {
        int a = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int b = int.Parse(textBox1.Text);
            try
            {
                a = a + b;
                label1.Text = a + "";
            }
            catch(Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int b = int.Parse(textBox1.Text);
            try
            {
                a = a - b;
                label1.Text = a + "";
            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int b = int.Parse(textBox1.Text);
            try
            {
                a = a * b;
                label1.Text = a + "";
            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int b = int.Parse(textBox1.Text);
            try
            {
                if (b != 0)
                {
                    a = a / b;
                    label1.Text = a + "";
                }
                else
                {
                    label1.Text = "0이 아닌 수를 입력해주세요";
                }
            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }
    }
}
