/* collab.h generated by valac 0.10.1, the Vala compiler, do not modify */


#ifndef __POLYOL_COLLAB_H__
#define __POLYOL_COLLAB_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <polyol/env.h>

G_BEGIN_DECLS


#define SUGAR_TYPE_CONNECTION (sugar_connection_get_type ())
#define SUGAR_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUGAR_TYPE_CONNECTION, SugarConnection))
#define SUGAR_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUGAR_TYPE_CONNECTION, SugarConnectionClass))
#define SUGAR_IS_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUGAR_TYPE_CONNECTION))
#define SUGAR_IS_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUGAR_TYPE_CONNECTION))
#define SUGAR_CONNECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUGAR_TYPE_CONNECTION, SugarConnectionClass))

typedef struct _SugarConnection SugarConnection;
typedef struct _SugarConnectionClass SugarConnectionClass;
typedef struct _SugarConnectionPrivate SugarConnectionPrivate;

#define SUGAR_TYPE_CHANNEL (sugar_channel_get_type ())
#define SUGAR_CHANNEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUGAR_TYPE_CHANNEL, SugarChannel))
#define SUGAR_CHANNEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUGAR_TYPE_CHANNEL, SugarChannelClass))
#define SUGAR_IS_CHANNEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUGAR_TYPE_CHANNEL))
#define SUGAR_IS_CHANNEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUGAR_TYPE_CHANNEL))
#define SUGAR_CHANNEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUGAR_TYPE_CHANNEL, SugarChannelClass))

typedef struct _SugarChannel SugarChannel;
typedef struct _SugarChannelClass SugarChannelClass;
typedef struct _SugarChannelPrivate SugarChannelPrivate;

struct _SugarConnection {
	GObject parent_instance;
	SugarConnectionPrivate * priv;
};

struct _SugarConnectionClass {
	GObjectClass parent_class;
};

struct _SugarChannel {
	GObject parent_instance;
	SugarChannelPrivate * priv;
	guint _self_handle;
	guint _initiator_id;
};

struct _SugarChannelClass {
	GObjectClass parent_class;
};


GType sugar_connection_get_type (void) G_GNUC_CONST;
void sugar_connection_offer_channel (SugarConnection* self, const char* bus_name);
SugarConnection* sugar_connection_new (void);
SugarConnection* sugar_connection_construct (GType object_type);
SugarShareScope sugar_connection_get_scope (SugarConnection* self);
void sugar_connection_set_scope (SugarConnection* self, SugarShareScope value);
gboolean sugar_connection_get_scope_changing (SugarConnection* self);
gboolean sugar_connection_get_initiator (SugarConnection* self);
const char* sugar_connection_get_title (SugarConnection* self);
void sugar_connection_set_title (SugarConnection* self, const char* value);
gboolean sugar_connection_get_shared (SugarConnection* self);
#define TELEPATHY_HANDLE_TYPE_ROOM 2
#define TELEPATHY_TUBE_TYPE_DBUS 0
#define TELEPATHY_TUBE_TYPE_STREAM 1
#define TELEPATHY_TUBE_STATE_LOCAL_PENDING 0
#define TELEPATHY_TUBE_STATE_OPEN 2
#define TELEPATHY_CONN_INTERFACE "org.freedesktop.Telepathy.Connection"
#define TELEPATHY_CHANNEL_INTERFACE "org.freedesktop.Telepathy.Channel"
#define TELEPATHY_CHANNEL_TYPE_TEXT "org.freedesktop.Telepathy.Channel.Type.Text"
#define TELEPATHY_CHANNEL_TYPE_TUBES "org.freedesktop.Telepathy.Channel.Type.Tubes"
#define TELEPATHY_CHANNEL_INTERFACE_GROUP "org.freedesktop.Telepathy.Channel.Interface.Group"
GType sugar_channel_get_type (void) G_GNUC_CONST;
void _sugar_channel_add_buddy (SugarChannel* self, guint buddy, const char* bus_name);
void _sugar_channel_remove_buddies (SugarChannel* self, guint* removed, int removed_length1);
SugarChannel* sugar_channel_construct (GType object_type);
gboolean sugar_channel_get_initiator (SugarChannel* self);
const char* sugar_channel_get_bus_name (SugarChannel* self);
void sugar_channel_set_bus_name (SugarChannel* self, const char* value);
guint sugar_channel_get_me (SugarChannel* self);
guint sugar_channel_get_owner (SugarChannel* self);
const char* sugar_channel_get_address (SugarChannel* self);
void sugar_channel_set_address (SugarChannel* self, const char* value);


G_END_DECLS

#endif