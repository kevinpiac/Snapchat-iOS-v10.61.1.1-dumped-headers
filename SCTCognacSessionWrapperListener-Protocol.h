//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCTCognacSessionWrapper, TCV3CognacSessionState;

@protocol SCTCognacSessionWrapperListener <NSObject>
- (void)cognacSessionWrapper:(SCTCognacSessionWrapper *)arg1 changedState:(TCV3CognacSessionState *)arg2;
- (void)cognacSessionWrapperActivated:(SCTCognacSessionWrapper *)arg1;
- (void)cognacSessionWrapperBackgrounded:(SCTCognacSessionWrapper *)arg1;
- (void)cognacSessionWrapperDeactivated:(SCTCognacSessionWrapper *)arg1;
@end

