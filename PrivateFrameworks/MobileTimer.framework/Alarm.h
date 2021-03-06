/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface Alarm : NSObject {
    BOOL _allowsSnooze;
    unsigned int _daySetting;
    <AlarmDelegate> *_delegate;
    Alarm *_editingProxy;
    unsigned int _hour;
    NSString *_id;
    NSURL *_idUrl;
    NSDate *_lastModified;
    unsigned int _minute;
    UILocalNotification *_notification;
    BOOL _pretendActiveIfProxy;
    NSArray *_repeatDays;
    unsigned int _revision;
    NSMutableDictionary *_settings;
    NSString *_snapshotSound;
    int _snapshotSoundType;
    UILocalNotification *_snoozedNotification;
    NSString *_sound;
    int _soundType;
    NSString *_title;
    UILocalNotification *_weeklyNotifications;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic, readonly) NSString *alarmId;
@property (nonatomic, readonly) NSURL *alarmIdUrl;
@property (nonatomic) BOOL allowsSnooze;
@property (nonatomic) unsigned int daySetting;
@property (nonatomic) <AlarmDelegate> *delegate;
@property (nonatomic, readonly) Alarm *editingProxy;
@property (nonatomic) unsigned int hour;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic) unsigned int minute;
@property (nonatomic, readonly) NSString *rawTitle;
@property (nonatomic, readonly) NSArray *repeatDays;
@property (nonatomic, readonly) BOOL repeats;
@property (nonatomic, readonly) unsigned int revision;
@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic, readonly) NSString *snapshotSound;
@property (nonatomic, readonly) int snapshotSoundType;
@property (getter=isSnoozed, nonatomic, readonly) BOOL snoozed;
@property (nonatomic, readonly) NSString *sound;
@property (nonatomic, readonly) int soundType;
@property (nonatomic, readonly) NSString *uiTitle;

+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)isSnoozeNotification:(id)arg1;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;

- (id)_newBaseDateComponentsForDay:(int)arg1;
- (id)_newNotification:(int)arg1;
- (unsigned int)_notificationsCount;
- (id)alarmId;
- (id)alarmIdUrl;
- (BOOL)allowsSnooze;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (void)cancelNotifications;
- (int)compareTime:(id)arg1;
- (unsigned int)daySetting;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)dropEditingProxy;
- (void)dropNotifications;
- (id)editingProxy;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(BOOL)arg2;
- (unsigned int)hash;
- (unsigned int)hour;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSnoozed;
- (id)lastModified;
- (void)markModified;
- (unsigned int)minute;
- (id)nextFireDate;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(int)arg3;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)prepareNotifications;
- (id)rawTitle;
- (void)refreshActiveState;
- (id)repeatDays;
- (BOOL)repeats;
- (unsigned int)revision;
- (void)scheduleNotifications;
- (void)setAllowsSnooze:(BOOL)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)setSound:(id)arg1 ofType:(int)arg2;
- (void)setTitle:(id)arg1;
- (id)settings;
- (id)snapshotSound;
- (int)snapshotSoundType;
- (id)sound;
- (int)soundType;
- (id)timeZoneForOffsetCalculation;
- (BOOL)tryAddNotification:(id)arg1;
- (id)uiTitle;

@end
