using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습14
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string sdata01 = textBox1.Text;

            if (textBox1.Text == "")
            {
                label3.Text = "10가지 Data Type중 하나를 입력하세요!";
            }
            else
            {
                switch (sdata01)
                {
                    case "int":
                        label3.Text = "int의 허용값은 " + int.MinValue + " ~ " + int.MaxValue;
                        break;
                    case "double":
                        label3.Text = "double의 허용값은 " + double.MinValue + " ~ " + double.MaxValue;
                        break;
                    case "short":
                        label3.Text = "short의 허용값은 " + short.MinValue + " ~ " + short.MaxValue;
                        break;
                    case "long":
                        label3.Text = "long의 허용값은 " + int.MinValue + " ~ " + int.MaxValue;
                        break;
                    case "sbyte":
                        label3.Text = "sbyte의 허용값은 " + int.MinValue + " ~ " + int.MaxValue;
                        break;
                    case "ushort":
                        label3.Text = "ushort의 허용값은 " + int.MinValue + " ~ " + int.MaxValue;
                        break;
                    case "uint":
                        label3.Text = "uint의 허용값은 " + int.MinValue + " ~ " + int.MaxValue;
                        break;
                    case "ulong":
                        label3.Text = "ulong의 허용값은 " + int.MinValue + " ~ " + int.MaxValue;
                        break;
                    case "float":
                        label3.Text = "float의 허용값은 " + int.MinValue + " ~ " + int.MaxValue;
                        break;
                    default:
                        label3.Text = "\"" + textBox1.Text + "\" 는 알 수 없는 Data Type입니다!";
                        break;
                }
    }
}
