//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsTakeoverForResurrectedUserGatingDelegate-Protocol.h"

@class SCFeatureSettingsManager, SCPreferences;

@interface SCAddFriendsTakeoverForResurrectedUserGating : NSObject <SCAddFriendsTakeoverForResurrectedUserGatingDelegate>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCPreferences *_userPreferences;
}

- (void).cxx_destruct;
- (void)didTriggerFriendsTakeover;
- (id)initWithFeatureSettingsManager:(id)arg1 userPreferences:(id)arg2;
- (_Bool)shouldShowTakeoverForResurrectedUser;

@end

