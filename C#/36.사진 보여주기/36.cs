using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습36
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            try
            {
                if (comboBox1.SelectedIndex == 0)
                {
                    label1.Image = Properties.Resources.자동차_사진_1;
                }
                if (comboBox1.SelectedIndex == 1)
                {
                    label1.Image = Properties.Resources.자동차_사진_2;
                }
                if (comboBox1.SelectedIndex == 2)
                {
                    label1.Image = Properties.Resources.자동차_사진_3;
                }
                if (comboBox1.SelectedIndex == 3)
                {
                    label1.Image = Properties.Resources.자동차_사진_4;
                }
                if (comboBox1.SelectedIndex == 4)
                {
                    label1.Image = Properties.Resources.자동차_사진_5;
                }
                if (comboBox1.SelectedIndex == 5)
                {
                    label1.Image = Properties.Resources.자동차_사진_6;
                }
            }
            catch(Exception ex)
            {
                label1.Text = ex.Message;
            }
        }
    }
}
