#Jon Zepp
#CIS 112
#11/13/22
#This file will take two given files, and merge them in the correct order


from PyPDF2 import PdfFileReader, PdfFileWriter, PdfFileMerger
from pathlib import Path

#again, here is my Paths, however I'm assuming that you're going to be using your specific paths on your computer

pdf_merger = PdfFileMerger()
merged_dir = Path(r"C:\Users\jonze\OneDrive\Desktop\example")

#insert the file of the chapter that is missing the pages here
report_path = Path(r"C:\Users\jonze\OneDrive\Desktop\example\pythonlearn_ch8MissingPages.pdf")

#insert the file of the missing pages here
Merge_path = Path(r"C:\Users\jonze\OneDrive\Desktop\example\From_pythonlearn_ch8.pdf")

pdf_merger.append(str(report_path))
pdf_merger.merge(4, str(Merge_path))
with Path("Full_Report.pdf").open(mode='wb') as outF:
    pdf_merger.write(outF)


                                                        

