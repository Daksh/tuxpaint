/* polyol-toolkit.vapi generated by valac 0.10.1, do not modify. */

[CCode (cprefix = "Sugar", lower_case_cprefix = "sugar_")]
namespace Sugar {
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class Activity : GLib.Object {
		public Activity (bool use_journal = true, bool use_sharing = true);
		public override void dispose ();
		public virtual void write_file (string file_path, bool transfer_ownership = false);
		public Sugar.Connection? connection { get; set; }
		public Sugar.Jobject? jobject { get; set; }
		public Sugar.Journal journal { get; set; }
		public bool resumed { get; }
		public Sugar.Shell shell { get; set; }
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class ActivityButton : Sugar.ToolButton {
		public ActivityButton (Sugar.Jobject jobject);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class ActivityToolbarButton : Sugar.ToolbarButton {
		public ActivityToolbarButton (Sugar.Activity activity);
		public Sugar.KeepButton keep { get; set; }
		public Sugar.TitleEntry title { get; set; }
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class AlertBin : Gtk.EventBox {
		public AlertBin ();
		public static void pop (Sugar.Alert alert);
		public static void push (Sugar.Alert alert);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class ConfirmationAlert : Sugar.MessageAlert {
		public ConfirmationAlert (string title_text, string message_text, string? icon_name);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class CopyButton : Sugar.ToolButton {
		public CopyButton ();
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class KeepButton : Sugar.ToolButton {
		public KeepButton (Sugar.Jobject jobject);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class MessageAlert : Gtk.HBox, Sugar.Alert {
		public MessageAlert (string title_text, string message_text, string? icon_name);
		public void add_button (int response_id, string label, string? icon_name = null, int timeout = 0);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class NotifyAlert : Sugar.MessageAlert {
		public NotifyAlert (string title_text, string message_text, string? icon_name, int timeout = 7);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class PasteButton : Sugar.ToolButton {
		public PasteButton ();
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class RedoButton : Sugar.ToolButton {
		public RedoButton ();
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class ShareButton : Sugar.ComboToolButton {
		public ShareButton (Sugar.Connection connection);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class StopButton : Sugar.ToolButton {
		public StopButton ();
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class TimeoutAlert : Sugar.MessageAlert {
		public TimeoutAlert (string title_text, string message_text, string? icon_name, int timeout = 7);
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class TitleEntry : Gtk.ToolItem {
		public TitleEntry (Sugar.Jobject jobject);
		public Gtk.Entry entry { get; set; }
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public class UndoButton : Sugar.ToolButton {
		public UndoButton ();
	}
	[CCode (cheader_filename = "polyol/toolkit.h")]
	public interface Alert : Gtk.Widget {
		public signal void popup ();
		public signal void response (int response_id);
	}
}
