//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, NSNumber, NSString, SCAlertGear;

@protocol SCAlertGearDelegate <NSObject>
- (void)alertGear:(SCAlertGear *)arg1 didNotificationStatusChangeForFriend:(Friend *)arg2;
- (void)alertGear:(SCAlertGear *)arg1 didSetDisplay:(NSString *)arg2 friend:(Friend *)arg3 shouldScroll:(_Bool)arg4;
- (_Bool)alertGear:(SCAlertGear *)arg1 notificationStatusForFriend:(Friend *)arg2;

@optional
- (NSString *)blockOrUnblockButtonTitle:(Friend *)arg1;
- (void)customOperationForBlock:(Friend *)arg1 blockReasonId:(NSNumber *)arg2;
- (void)customOperationForDeleteorIgnore:(Friend *)arg1;
- (void)customOperationForEditName:(Friend *)arg1;
- (void)customOperationForReport:(Friend *)arg1;
- (void)customOperationForUnBlock:(Friend *)arg1;
- (void)didUpdateMuteState;
- (NSString *)removeOrIgnoreButtonTitle:(Friend *)arg1;
@end
