using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습32
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string num = textBox1.Text;

            if (num.IndexOf("-") >= 0)
            {
                label3.Text = "-빼고 입력해주세요";
            }
            else if(num.Length != 13)
            {
                label3.Text = "정확히 입력해주세요";
            }
            else
            {
                int[] iarray = new int[13];

                for(int i = 0; i < iarray.Length; i++)
                {
                    iarray[i] = int.Parse(textBox1.Text.Substring(i, 1));
                }

                int Y = (iarray[0] * 2) + (iarray[1] * 3) + (iarray[2] * 4) + (iarray[3] * 5)
                        + (iarray[4] * 6) + (iarray[5] * 7) + (iarray[6] * 8) + (iarray[7] * 9)
                        + (iarray[8] * 2) + (iarray[9] * 3) + (iarray[10] * 4) + (iarray[11] * 5);

                int Z = (11 - (Y % 11)) % 10;

                if(iarray[12] == Z)
                {
                    label3.Text = "올바른 주민번호 입니다";
                }
                else
                {
                    label3.Text = "올바르지 않은 주민번호 입니다";
                }
            }
        }
    }
}
