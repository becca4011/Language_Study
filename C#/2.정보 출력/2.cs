using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "성명 : 홍길동";
            label2.Text = "학번 : 012345678";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label3.Text = "유선 : 055-123-4567";
            label4.Text = "무선 : 01x-1234-5678";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            label2.Text = "";
            label3.Text = "";
            label4.Text = "";
        }
    }
}
