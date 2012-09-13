import com.sun.jna._

object SetFontColor {

  /**
   * @param args the command line arguments
   */
  def main(args: Array[String]): Unit = {
    val lib = NativeLibrary.getInstance("libfont_style.so")
    val func = lib.getFunction("font_color")

    func.invokeVoid(Array(args(0)))

    println("This Color: " + args(0))
  }

}