//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEventAnnouncing-Protocol.h"

@class SCAppNotification, SCSearchNavigationCoordinator;
@protocol SCSearchIntent;

@protocol SCSearchIntentHandler <SCEventAnnouncing>
- (_Bool)handleIntent:(id <SCSearchIntent>)arg1;
- (_Bool)handleIntent:(id <SCSearchIntent>)arg1 notification:(SCAppNotification *)arg2;
- (_Bool)handleIntent:(id <SCSearchIntent>)arg1 notification:(SCAppNotification *)arg2 notificationDismissed:(_Bool)arg3;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator;
@end

