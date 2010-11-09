int Action1()
{

	lr_start_transaction("1_Ladowanie strony logowania");

	web_url("10.1.12.102:85", 
		"URL=http://10.1.12.102:85/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Form.css.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Menu.css.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.ComboBoxPopup.css.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.Hourglass.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Images.LoginScreen_pl.jpg.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalLT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalRT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalL.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalC.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalR.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalLD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonNormalRD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverLT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverRT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverL.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverC.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverR.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverLD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonOverRD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedLT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedRT.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedL.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedC.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedR.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedLD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ButtonPressedRD.gif.wgx", "Referer=http://10.1.12.102:85/MainForm.wgx", ENDITEM, 
		LAST);

	web_url("Resources.Gizmox.WebGUI.Forms.Commons.Common.Bookmarks.htm.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Commons.Common.Bookmarks.htm.wgx?id=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Add.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Add.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.AddVersion.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.AddVersion.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.AttachedMail.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.AttachedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Back.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Back.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Resources.Gizmox.WebGUI.Forms.Form.xslt.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Form.xslt.wgx", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Calendar.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Calendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.CheckBoxes.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.CheckBoxes.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("Init.MainForm.wgx", 
		"Action=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Init.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SAH", "Value=1020", ENDITEM, 
		"Name=SAW", "Value=1680", ENDITEM, 
		"Name=SH", "Value=1050", ENDITEM, 
		"Name=SW", "Value=1680", ENDITEM, 
		"Name=SCD", "Value=16", ENDITEM, 
		"Name=BH", "Value=894", ENDITEM, 
		"Name=BW", "Value=1680", ENDITEM, 
		LAST);

	web_url("Icons.16x16.Class.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Class.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Clear.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Clear.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ClosedMail.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ClosedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Columns.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Columns.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Contact.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Contact.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Copy.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Copy.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Cut.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Cut.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DayView.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DayView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Delete.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Delete.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DetailsView.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DetailsView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DynamicSearchFolder.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DynamicSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Edit.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Edit.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Event.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Event.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ExitDoor.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ExitDoor.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Folder.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Folder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Folders.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Folders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Group.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Group.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.History.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.History.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.IconsView.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.IconsView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ImportantMail.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ImportantMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Interface.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Interface.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ListView.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ListView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Member.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Member.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MonthView.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MonthView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Method.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Method.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MultiSelect.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MultiSelect.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MultiSplitterWindow.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MultiSplitterWindow.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Namespace.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Namespace.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.NewEvent.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.NewEvent.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.NewItem.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.NewItem.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Next.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Next.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Open.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Open.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.OpenedMail.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.OpenedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Paintbrushes.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Paintbrushes.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PersonalFolders.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PersonalFolders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PrivateSearchFolder.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PrivateSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Properties.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Properties.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PublicSearchFolder.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PublicSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ArrowDown.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ArrowDown.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Remove.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Remove.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.RemoveItem.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.RemoveItem.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.RequestOCR.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.RequestOCR.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Save.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Save.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Search.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Search.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.SearchFolder.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.SearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.SearchLOUPE.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.SearchLOUPE.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Sorting.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Sorting.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.StaticSearchFolder.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.StaticSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.trash.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.trash.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.TrashBin.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.TrashBin.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.User.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.User.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.weekView.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.weekView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.WorkWeekView.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.WorkWeekView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Files.None.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Files.None.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Attachment.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Attachment.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Important.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Important.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Opened.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Opened.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Selected.Folder.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Selected.Folder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Toolbar.User.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Toolbar.User.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Applications.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Applications.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Behaviors.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Behaviors.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Controls.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Controls.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Folders.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Folders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Mail.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Mail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Search.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Search.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.32x32.Document.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.32x32.Document.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.32x32.New.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.32x32.New.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.AddCalendar.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.AddCalendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.AddIssue.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.AddIssue.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Add_Document_4_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Add_Document_4_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Calendar.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Calendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Contacts.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Contacts.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Edit_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Edit_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.File_and_Folder_2_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.File_and_Folder_2_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.NewShortcut_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.NewShortcut_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.New_Blank_Document_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.New_Blank_Document_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Note_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Note_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Pen_and_Document_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Pen_and_Document_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Rules_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Rules_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Search_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Search_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Send_Mail_48_n_g.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Send_Mail_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Files.None.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Files.None.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_Ladowanie strony logowania", LR_PASS );

	lr_start_transaction("1_Ladowanie MainForm");

	web_custom_request("Content.MainForm.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975005030477\"><E SR=\"6\" TP=\"ValueChange\" TX=\"InitialUser\"/><E SR=\"6\" TP=\"LostFocus\"/><E SR=\"4\" TP=\"GotFocus\"/><E SR=\"4\" TP=\"ValueChange\" TX=\"P@ssw0rd\"/><E SR=\"4\" TP=\"LostFocus\"/><E SR=\"2\" TP=\"GotFocus\"/><E SR=\"2\" TP=\"Click\" X=\"62\" Y=\"10\"/></ES>", 
		LAST);

	web_url("MainForm.wgx", 
		"URL=http://10.1.12.102:85/MainForm.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ArrowDown.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ToolBarLeftLTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.Refresh.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ToolbarHorzBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.User.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.ExitDoor.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.Help.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ToolBarRightLTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Add.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.Empty.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Edit.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Move.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Delete.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Select.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Tools.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Processes.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Folders.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.NavigationSelectedBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Applications.gif.wgx?assembly=Wasko.IntraDOK.Plugin.Contacts.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.NavigationNormalBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Calendar.gif.wgx?assembly=Wasko.IntraDOK.Plugin.Scheduler.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Substitutions.gif.wgx?assembly=Wasko.IntraDOK.Plugin.Substitutions.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Search.gif.wgx?assembly=Wasko.IntraDOK.Plugin.Search.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.TrashBin.gif.wgx?assembly=Wasko.IntraDOK.Plugin.BinManagement.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.StatusBarTopBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.StatusBarBottomBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.HeadlineBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.NavigationSeperatorBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.OfficeBackground.jpg.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.TreeViewMinus11LTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.FolderTree.User.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.TreeViewPlus11LTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.FolderTree.PersonalFolders.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.FolderTree.Folder.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.FolderTree.SearchFolder.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.FolderTree.taskcontainer.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.TreeViewPlus10LTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.TreeViewConnectorLTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ListViewHeaderBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.BusinessObjects.Normal.Notice.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.BusinessObjects.Normal.NoAttachmentFlag.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ArrowArrowRTL.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ArrowRTL.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ArrowLTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ArrowArrowLTR.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ListViewHeaderSepBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Small.Substitution.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.NewEvent.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.NewNote.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Small.Notification.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.Workflow.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.NewIssue.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Toolbar.NewDocument.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Large.HomeUnread.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Large.HomeEvents.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Large.HomeSubstitutions.gif.wgx?assembly=Wasko.IntraDOK.Plugin.DocumentBrowser.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.DashboardBackground.jpg.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.DashboardBackgroundTile.jpg.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.BusinessObjects.Normal.Document.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.BusinessObjects.Issue.Issue_Finish.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.ListViewHeaderOverBG.gif.wgx", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Assemblies.Resources.Icons.Tiny.BusinessObjects.Normal.Note.gif.wgx?assembly=Wasko.IntraDOK.GuiLibrary.Forms", ENDITEM, 
		"Url=/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.NavigationNormalHighlightBG.gif.wgx", ENDITEM, 
		LAST);

	web_url("Resources.Gizmox.WebGUI.Forms.Commons.Common.Bookmarks.htm.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Commons.Common.Bookmarks.htm.wgx?id=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Add.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Add.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.AddVersion.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.AddVersion.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ArrowDown.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ArrowDown.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.AttachedMail.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.AttachedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Back.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Back.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Calendar.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Calendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.CheckBoxes.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.CheckBoxes.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Class.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Class.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Clear.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Clear.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ClosedMail.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ClosedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Resources.Gizmox.WebGUI.Forms.Form.xslt.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Form.xslt.wgx", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Columns.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Columns.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Contact.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Contact.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Copy.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Copy.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Cut.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Cut.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DayView.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DayView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Delete.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Delete.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DetailsView.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DetailsView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DynamicSearchFolder.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DynamicSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Edit.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Edit.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Event.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Event.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ExitDoor.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ExitDoor.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Folder.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Folder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("Init.MainForm.wgx_2", 
		"Action=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Init.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SAH", "Value=1020", ENDITEM, 
		"Name=SAW", "Value=1680", ENDITEM, 
		"Name=SH", "Value=1050", ENDITEM, 
		"Name=SW", "Value=1680", ENDITEM, 
		"Name=SCD", "Value=16", ENDITEM, 
		"Name=BH", "Value=894", ENDITEM, 
		"Name=BW", "Value=1680", ENDITEM, 
		LAST);

	web_url("Icons.16x16.Folders.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Folders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Group.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Group.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.History.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.History.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.IconsView.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.IconsView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ImportantMail.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ImportantMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Interface.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Interface.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ListView.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ListView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Member.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Member.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Method.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Method.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MonthView.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MonthView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MultiSelect.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MultiSelect.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MultiSplitterWindow.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MultiSplitterWindow.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Namespace.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Namespace.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.NewEvent.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.NewEvent.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.NewItem.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.NewItem.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Next.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Next.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Open.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Open.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.OpenedMail.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.OpenedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Paintbrushes.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Paintbrushes.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PersonalFolders.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PersonalFolders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PrivateSearchFolder.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PrivateSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Properties.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Properties.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PublicSearchFolder.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PublicSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Remove.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Remove.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.RemoveItem.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.RemoveItem.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.RequestOCR.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.RequestOCR.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Save.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Save.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Search.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Search.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.SearchFolder.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.SearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.SearchLOUPE.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.SearchLOUPE.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Sorting.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Sorting.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.StaticSearchFolder.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.StaticSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.trash.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.trash.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.TrashBin.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.TrashBin.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.User.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.User.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.weekView.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.weekView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.WorkWeekView.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.WorkWeekView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Files.None.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Files.None.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Attachment.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Attachment.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Important.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Important.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Opened.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Opened.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Selected.Folder.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Selected.Folder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Toolbar.User.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Toolbar.User.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Applications.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Applications.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Behaviors.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Behaviors.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Controls.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Controls.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Folders.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Folders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Mail.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Mail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Search.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Search.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.32x32.Document.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.32x32.Document.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.32x32.New.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.32x32.New.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.AddCalendar.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.AddCalendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.AddIssue.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.AddIssue.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Add_Document_4_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Add_Document_4_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Calendar.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Calendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Contacts.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Contacts.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Edit_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Edit_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.File_and_Folder_2_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.File_and_Folder_2_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.NewShortcut_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.NewShortcut_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.New_Blank_Document_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.New_Blank_Document_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Note_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Note_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Pen_and_Document_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Pen_and_Document_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Rules_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Rules_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Search_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Search_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Send_Mail_48_n_g.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Send_Mail_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Files.None.gif.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Files.None.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Skins.Gizmox.WebGUI.Forms.SearchTextBox.Search.gif.wgx", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Skins.Gizmox.WebGUI.Forms.SearchTextBox.Search.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_Ladowanie MainForm", LR_PASS);

	lr_start_transaction("1_Ladowanie dashboardu 1");

	lr_think_time(5);

	web_custom_request("Content.MainForm.wgx_2", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975242460955\"><E SR=\"33\" TP=\"GotFocus\"/></ES>", 
		LAST);

	web_custom_request("Content.MainForm.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975312348507\"><E SR=\"10414\" TP=\"Action\" Action=\"Click\"/></ES>", 
		LAST);

	lr_end_transaction("1_Ladowanie dashboardu 1", LR_PASS);

	lr_start_transaction("1_Ladowanie dokumentow");

	web_custom_request("Content.MainForm.wgx_4", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975317184476\"><E SR=\"278\" TP=\"Click\" X=\"0\" Y=\"0\"/></ES>", 
		LAST);

	lr_end_transaction("1_Ladowanie dokumentow", LR_PASS);

	lr_start_transaction("1_Ladowanie dashboardu 2");

	lr_think_time(6);

	web_custom_request("Content.MainForm.wgx_5", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975368820145\"><E SR=\"10414\" TP=\"Action\" Action=\"Click\"/></ES>", 
		LAST);

	lr_end_transaction("1_Ladowanie dashboardu 2", LR_PASS);

	lr_start_transaction("1_Ladowanie spraw");

	lr_think_time(6);

	web_custom_request("Content.MainForm.wgx_6", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975440891683\"><E SR=\"285\" TP=\"Click\" X=\"0\" Y=\"0\"/></ES>", 
		LAST);

	lr_end_transaction("1_Ladowanie spraw", LR_PASS);

	lr_start_transaction("1_Ladowanie dashboardu 3");

	web_custom_request("Content.MainForm.wgx_7", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975514835209\"><E SR=\"10414\" TP=\"Action\" Action=\"Click\"/></ES>", 
		LAST);

	lr_end_transaction("1_Ladowanie dashboardu 3", LR_PASS);

	lr_start_transaction("1_Ladowanie notatek");

	web_custom_request("Content.MainForm.wgx_8", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975575518820\"><E SR=\"286\" TP=\"Click\" X=\"0\" Y=\"0\"/></ES>", 
		LAST);

	lr_end_transaction("1_Ladowanie notatek",LR_PASS);

	lr_start_transaction("1_Ladowanie dashboardu 4");

	web_custom_request("Content.MainForm.wgx_9", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975623566512\"><E SR=\"10414\" TP=\"Action\" Action=\"Click\"/></ES>", 
		LAST);

	lr_end_transaction("1_Ladowanie dashboardu 4", LR_PASS);

	lr_think_time(4);

	lr_start_transaction("1_Wylogowanie");

	web_custom_request("Content.MainForm.wgx_10", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Content.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		"EncType=", 
		"Body=<ES LR=\"633747975682534134\"><E SR=\"10399\" TP=\"Click\"/></ES>", 
		LAST);

	web_url("MainForm.wgx_2", 
		"URL=http://10.1.12.102:85/MainForm.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Resources.Gizmox.WebGUI.Forms.Commons.Common.Bookmarks.htm.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Commons.Common.Bookmarks.htm.wgx?id=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Add.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Add.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.AddVersion.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.AddVersion.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ArrowDown.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ArrowDown.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.AttachedMail.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.AttachedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Back.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Back.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Calendar.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Calendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.CheckBoxes.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.CheckBoxes.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Class.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Class.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Clear.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Clear.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ClosedMail.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ClosedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Resources.Gizmox.WebGUI.Forms.Form.xslt.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Resources.Gizmox.WebGUI.Forms.Form.xslt.wgx", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Columns.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Columns.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Contact.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Contact.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Copy.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Copy.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Cut.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Cut.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DayView.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DayView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Delete.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Delete.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DetailsView.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DetailsView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.DynamicSearchFolder.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.DynamicSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("Init.MainForm.wgx_3", 
		"Action=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Init.MainForm.wgx?vwginstance=", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SAH", "Value=1020", ENDITEM, 
		"Name=SAW", "Value=1680", ENDITEM, 
		"Name=SH", "Value=1050", ENDITEM, 
		"Name=SW", "Value=1680", ENDITEM, 
		"Name=SCD", "Value=16", ENDITEM, 
		"Name=BH", "Value=894", ENDITEM, 
		"Name=BW", "Value=1680", ENDITEM, 
		LAST);

	web_url("Icons.16x16.Edit.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Edit.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Event.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Event.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t219.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ExitDoor.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ExitDoor.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t220.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Folder.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Folder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Folders.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Folders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Group.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Group.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.History.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.History.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.IconsView.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.IconsView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ImportantMail.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ImportantMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t226.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Interface.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Interface.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t227.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.ListView.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.ListView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Member.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Member.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t229.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Method.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Method.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t230.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MonthView.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MonthView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t231.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MultiSelect.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MultiSelect.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t232.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.MultiSplitterWindow.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.MultiSplitterWindow.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t233.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Namespace.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Namespace.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t234.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.NewEvent.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.NewEvent.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t235.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.NewItem.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.NewItem.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t236.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Next.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Next.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t237.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Open.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Open.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t238.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.OpenedMail.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.OpenedMail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t239.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Paintbrushes.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Paintbrushes.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t240.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PersonalFolders.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PersonalFolders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t241.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PrivateSearchFolder.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PrivateSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t242.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Properties.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Properties.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t243.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.PublicSearchFolder.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.PublicSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t244.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Remove.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Remove.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t245.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.RemoveItem.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.RemoveItem.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t246.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.RequestOCR.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.RequestOCR.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t247.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Save.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Save.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t248.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Search.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Search.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t249.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.SearchFolder.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.SearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t250.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.SearchLOUPE.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.SearchLOUPE.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t251.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Sorting.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Sorting.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t252.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.StaticSearchFolder.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.StaticSearchFolder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.trash.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.trash.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t254.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.TrashBin.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.TrashBin.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.User.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.User.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t256.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.weekView.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.weekView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t257.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.WorkWeekView.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.WorkWeekView.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Files.None.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Files.None.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t259.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Attachment.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Attachment.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t260.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Important.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Important.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Headers.Opened.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Headers.Opened.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Selected.Folder.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Selected.Folder.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t263.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.16x16.Toolbar.User.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.16x16.Toolbar.User.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t264.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Applications.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Applications.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Behaviors.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Behaviors.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Controls.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Controls.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Folders.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Folders.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Mail.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Mail.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t269.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.24X24.Search.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.24X24.Search.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.32x32.Document.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.32x32.Document.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.32x32.New.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.32x32.New.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t272.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.AddCalendar.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.AddCalendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t273.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.AddIssue.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.AddIssue.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t274.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Add_Document_4_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Add_Document_4_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t275.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Calendar.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Calendar.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t276.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Contacts.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Contacts.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t277.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Edit_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Edit_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t278.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.File_and_Folder_2_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.File_and_Folder_2_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t279.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.NewShortcut_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.NewShortcut_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t280.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.New_Blank_Document_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.New_Blank_Document_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t281.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Note_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Note_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t282.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Pen_and_Document_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Pen_and_Document_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t283.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Rules_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Rules_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t284.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Search_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Search_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t285.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Send_Mail_48_n_g.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Send_Mail_48_n_g.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t286.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Icons.48x48.Files.None.gif.wgx_3", 
		"URL=http://10.1.12.102:85/Route/1.76.52.1/ie/pl-PL/Outlook/Icons.48x48.Files.None.gif.wgx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.1.12.102:85/MainForm.wgx", 
		"Snapshot=t287.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_Wylogowanie", LR_PASS);

	return 0;
}