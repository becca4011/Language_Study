using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습35
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int num = 12345;
            
            string a = string.Format("귀하의 잔액은 {0:C} 입니다.", num);
            label1.Text = a;

            double num2 = 0.05;

            string b = string.Format("귀하의 계좌총액은 {0:C} 이고, 재산순위 상위 {1:P1} 입니다.", num, num2);
            label2.Text = b;

        }
    }
}
