//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBlockedExceptionAlertDelegate-Protocol.h"

@class SCLazy;
@protocol SCBlockedExceptionAlertControllerDelegate;

@interface SCBlockedExceptionAlertViewController : NSObject <SCBlockedExceptionAlertDelegate>
{
    SCLazy *_blockedExceptionAlertView;
    SCLazy *_blockedExceptionSendToAlertView;
    SCLazy *_leaveGroupAlertViewController;
    SCLazy *_groupsDataFetcher;
    id <SCBlockedExceptionAlertControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_showBlockedExceptionAlertForGroup:(id)arg1;
- (void)_showBlockedExceptionSendToAlertForGroup:(id)arg1;
@property(nonatomic) __weak id <SCBlockedExceptionAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPressGrantExceptionForGroupId:(id)arg1 blockedParticipantExceptions:(id)arg2;
- (void)didPressLeaveChatForGroupId:(id)arg1 inAlertFlow:(id)arg2;
- (id)init;
- (void)presentBlockedExceptionAlertViewForGroupId:(id)arg1;
- (void)presentBlockedExceptionSendToAlertViewForGroupId:(id)arg1;

@end

