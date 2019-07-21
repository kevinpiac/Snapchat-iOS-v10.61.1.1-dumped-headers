//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBlockReportAlertDelegate-Protocol.h"
#import "SCEditNameAlertDelegate-Protocol.h"
#import "SCRemoveFriendAlertDelegate-Protocol.h"

@class Friend, NSString, SCBlockReportAlert, SCEditNameAlert, SCRemoveFriendAlert, SCScopedAccess;
@protocol SCAlertGearDelegate;

@interface SCAlertGear : NSObject <SCBlockReportAlertDelegate, SCEditNameAlertDelegate, SCRemoveFriendAlertDelegate>
{
    NSString *_currentUsername;
    SCScopedAccess *_friendsFeedDataAccess;
    SCScopedAccess *_conversationManagerAcesss;
    SCScopedAccess *_arroyoConversationIdsAccess;
    id <SCAlertGearDelegate> _alertGearDelegate;
    Friend *_friendEditing;
    SCBlockReportAlert *_blockerReportAlert;
    SCEditNameAlert *_editNameAlert;
    SCRemoveFriendAlert *_removeFriendAlert;
}

- (void).cxx_destruct;
- (void)_clearFriendsFeedItem:(id)arg1;
- (void)_didNotificationStatusChangeForFriend:(id)arg1;
- (void)_showBlockUnblockAlertViewInFlow:(id)arg1;
- (void)_showRemoveFriendAlertViewInFlow:(id)arg1;
- (void)_updateMuteState:(_Bool)arg1 forFriend:(id)arg2 inFlow:(id)arg3;
@property(nonatomic) __weak id <SCAlertGearDelegate> alertGearDelegate; // @synthesize alertGearDelegate=_alertGearDelegate;
- (id)blockOrUnblockButtonTitle:(id)arg1;
@property(retain, nonatomic) SCBlockReportAlert *blockerReportAlert; // @synthesize blockerReportAlert=_blockerReportAlert;
- (void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2;
- (void)customOperationForDeleteorIgnore:(id)arg1;
- (void)customOperationForEditName:(id)arg1;
- (void)customOperationForReport:(id)arg1;
- (void)customOperationForUnBlock:(id)arg1;
- (void)displayAlertGearWithFriend:(id)arg1 shouldScrollAfterEdit:(_Bool)arg2;
- (void)displayAlertGearWithFriend:(id)arg1 shouldScrollAfterEdit:(_Bool)arg2 contexts:(id)arg3;
@property(retain, nonatomic) SCEditNameAlert *editNameAlert; // @synthesize editNameAlert=_editNameAlert;
- (void)editNameAlert:(id)arg1 didSetDisplay:(id)arg2 friend:(id)arg3 shouldScroll:(_Bool)arg4;
@property(retain, nonatomic) Friend *friendEditing; // @synthesize friendEditing=_friendEditing;
- (void)handleBlockReportForFriend:(id)arg1;
- (void)handleDeleteOrIgnore:(id)arg1;
- (void)handleEditNameOptionForFriend:(id)arg1 inAlertFlow:(id)arg2 shouldScrollAfterEdit:(_Bool)arg3;
- (id)initWithDelegate:(id)arg1 currentUsername:(id)arg2;
@property(retain, nonatomic) SCRemoveFriendAlert *removeFriendAlert; // @synthesize removeFriendAlert=_removeFriendAlert;
- (id)removeOrIgnoreButtonTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

