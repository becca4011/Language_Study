using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 그림판7
{
    public partial class Form1 : Form
    {
        bool ismodified = false;
        bool isdrag = false;

        Pen mypen = new Pen(Color.Black, 5);
        Bitmap mybitmap;
        Point start;
        Point end;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            mybitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = mybitmap;

            Brush mybrush = new SolidBrush(Color.White);
            Graphics G = Graphics.FromImage(pictureBox1.Image);
            G.FillRectangle(mybrush, 0, 0, pictureBox1.Width, pictureBox1.Height);
            G.Dispose();
            mybrush.Dispose();
        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            isdrag = true;
            start = new Point(e.X, e.Y);
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if(isdrag)
            {
                end = new Point(e.X, e.Y);
                Graphics G = Graphics.FromImage(pictureBox1.Image);
                G.DrawLine(mypen, start, end);
                start = end;

                G.Dispose();
                pictureBox1.Refresh();

                ismodified = true;
            }
        }

        private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
        {
            isdrag = false;
        }

        private void 새로만들기NToolStripMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                if(ismodified)
                {
                    DialogResult answer = MessageBox.Show("변경된 내용을 저장하고 새로 만들겠습니까?", "DrawLine", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);

                    if(answer == DialogResult.Yes)
                    {
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            if (saveFileDialog1.FilterIndex == 1)
                            {
                                pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Jpeg);
                            }
                            else if (saveFileDialog1.FilterIndex == 2)
                            {
                                pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Bmp);
                            }
                            else if (saveFileDialog1.FilterIndex == 3)
                            {
                                pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Gif);
                            }
                            else
                            {
                                MessageBox.Show("지원하지 않는 file format 입니다.", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
                            }
                        }
                        mybitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
                        pictureBox1.Image = mybitmap;

                        Brush mybrush = new SolidBrush(Color.White);
                        Graphics G = Graphics.FromImage(pictureBox1.Image);
                        G.FillRectangle(mybrush, 0, 0, pictureBox1.Width, pictureBox1.Height);
                        G.Dispose();
                        mybrush.Dispose();
                    }
                    else if(answer == DialogResult.No)
                    {
                        mybitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
                        pictureBox1.Image = mybitmap;

                        Brush mybrush = new SolidBrush(Color.White);
                        Graphics G = Graphics.FromImage(pictureBox1.Image);
                        G.FillRectangle(mybrush, 0, 0, pictureBox1.Width, pictureBox1.Height);
                        G.Dispose();
                        mybrush.Dispose();
                    }
                    ismodified = false;
                }
            }
            catch
            {
                MessageBox.Show("저장하는 도중 이상 발생", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void 열기OToolStripMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                if (ismodified)
                {
                    DialogResult answer = MessageBox.Show("변경된 내용을 저장하고 열겠습니까?", "DrawLine", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);

                    if (answer == DialogResult.Yes)
                    {
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            if (saveFileDialog1.FilterIndex == 1)
                            {
                                pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Jpeg);
                            }
                            else if (saveFileDialog1.FilterIndex == 2)
                            {
                                pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Bmp);
                            }
                            else if (saveFileDialog1.FilterIndex == 3)
                            {
                                pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Gif);
                            }
                            else
                            {
                                MessageBox.Show("지원하지 않는 file format 입니다.", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
                            }
                        }
                        if (openFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            mybitmap.Dispose();
                            mybitmap = new Bitmap(Image.FromFile(openFileDialog1.FileName), pictureBox1.Width, pictureBox1.Height);
                            pictureBox1.Image = mybitmap;
                            pictureBox1.Refresh();
                        }
                    }
                    else if (answer == DialogResult.No)
                    {
                        if(openFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            mybitmap.Dispose();
                            mybitmap = new Bitmap(Image.FromFile(openFileDialog1.FileName), pictureBox1.Width, pictureBox1.Height);
                            pictureBox1.Image = mybitmap;
                            pictureBox1.Refresh();
                        }
                    }
                    ismodified = false;
                }
                else if(ismodified == false)
                {
                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        mybitmap.Dispose();
                        mybitmap = new Bitmap(Image.FromFile(openFileDialog1.FileName), pictureBox1.Width, pictureBox1.Height);
                        pictureBox1.Image = mybitmap;
                        pictureBox1.Refresh();
                    }
                }
            }
            catch
            {
                MessageBox.Show("저장하는 도중 이상 발생", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void 저장SToolStripMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    if (saveFileDialog1.FilterIndex == 1)
                    {
                        pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Jpeg);
                    }
                    else if (saveFileDialog1.FilterIndex == 2)
                    {
                        pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Bmp);
                    }
                    else if (saveFileDialog1.FilterIndex == 3)
                    {
                        pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Gif);
                    }
                    else
                    {
                        MessageBox.Show("지원하지 않는 file format 입니다.", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    ismodified = false;
                }
            }
            catch
            {
                MessageBox.Show("저장하는 도중 이상 발생", "에러", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void 끝내기XToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void 굵기10ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 10;
        }

        private void 굵기7ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 7;
        }

        private void 굵기5ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 5;
        }

        private void 굵기2ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 2;
        }

        private void 굵기1ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 1;
        }

        private void solidToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.DashStyle = System.Drawing.Drawing2D.DashStyle.Solid;
        }

        private void dotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.DashStyle = System.Drawing.Drawing2D.DashStyle.Dot;
        }

        private void dashDotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.DashStyle = System.Drawing.Drawing2D.DashStyle.DashDot;
        }

        private void 선색깔CToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if(colorDialog1.ShowDialog() == DialogResult.OK)
            {
                mypen.Color = colorDialog1.Color;
            }
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if(ismodified)
            {
                DialogResult answer = MessageBox.Show("변경된 내용을 저장하고 종료하겠습니까?", "DrawLine", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);

                if(answer == DialogResult.Yes)
                {
                    저장SToolStripMenuItem_Click(sender, e);
                }
                else if(answer == DialogResult.Cancel)
                {
                    e.Cancel = true;
                }
            }
        }
    }
}
