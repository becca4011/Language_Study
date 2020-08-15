using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습13
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

                if (idata01 % 2 == 0)
                {
                    label2.Text = "입력한 수: " + idata01 + "은 짝수 입니다.";
                }
                else if (idata01 % 2 != 0)
                {
                    label2.Text = "입력한 수: " + idata01 + "은 홀수 입니다.";
                }
            }
            catch(Exception ex)
            {
                label2.Text = ex.Message;
            }
        }
    }
}
